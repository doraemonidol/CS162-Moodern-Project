#pragma once
#include <chrono>
#include <conio.h>
#include <cstdio>
#include <ctime>
#include <fstream>
#include <io.h>
#include <iomanip>
#include <iostream>
#include <msclr/marshal_cppstd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <list>
#include <direct.h>
#include <winuser.h>
#include <functional>
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
#pragma warning(disable : 4996)

struct Scoreboards;
namespace CS162MoodleProject {
    public ref class studentClass : public System::Object {
    public:
        System::String ^ studentID;
        System::String ^ lName;
        System::String ^ fName;
        System::String ^ socialID;
        System::DateTime date;
        int gender;
    };
    public
        ref class courseClass : public System::Object {
        public:
            System::String ^ courseName;
            System::String ^ courseID;
            System::String ^ credits;
            System::String ^ maxStd;
            System::String ^ room;
            System::String ^ lecturer;
            System::DateTime regisS;
            System::DateTime regisE;
            int d1, s1, d2, s2;
        };
    
        }

struct Courses;
struct Date {
    string day = "", month = "", year = "";
    void getCurrentDate()
    {
        time_t now = time(0);
        tm* ltm = localtime(&now);
        year = to_string(ltm->tm_year + 1900);
        month = to_string(ltm->tm_mon + 1);
        day = to_string(ltm->tm_mday);
    }
    string formatYYYYmmDD()
    {
        string res = year;
        if (month.length() == 1)
            res += "0";
        res += month;
        if (day.length() == 1)
            res += "0";
        res += day;
        return res;
    }
};

struct Courses;

struct Accounts {
    string pwd = "";
    string uName = "";
    int role = 0; //1 (true): staff / 0 (false): student
    string socialID = "";
    string lastname = "", firstname = "";
    char gender; //female male, prefer not to say -> f,m,o
    Date doB;
    Accounts* next = nullptr;
};

struct Scoreboards {
    string courseName = ""; //the course that this list belongs to
    string courseID = "";
    double midtermScore = 0, finalScore = 0, totalScore = 0, otherScore = 0;
    Scoreboards* next = nullptr;
};

struct Students {
    string studentID = "";
    Accounts* account = nullptr;
    string classID = "";
    Scoreboards* scoreBoards = nullptr;
    Courses* enrolledCourse = nullptr;
    Students* next = nullptr;

    Students* findStudentByID(string studentID)
    {
        Students* list = this;
        while (list) {
            if (list->studentID == studentID)
                return list;
            list = list->next;
        }
        return nullptr;
    }

    Scoreboards* findScoreboardByID(string courseID)
    {
        Scoreboards* list = this->scoreBoards;
        while (list) {
            if (list->courseID == courseID)
                return list;
            list = list->next;
        }
        return nullptr;
    }
};

struct Classes {
    string classID = "";
    Students* students = nullptr;
    Classes* next = nullptr;

    Classes* findByID(string classID)
    {
        Classes* list = this;
        while (list) {
            if (list->classID == classID)
                return list;
            list = list->next;
        }
        return nullptr;
    }
};

struct Staffs {
    Accounts* account = nullptr;
    Staffs* next = nullptr;
};
struct Courses {
    string courseID = "";
    string courseName = "";
    int credits = 0, maxStudents = 50, numStudents = 0;
    Date startDate, endDate;
    Students* studentList = nullptr;
    string day1 = "", day2 = "", session1 = "", session2 = "";
    string room = "";
    string lecturerName = "";
    Courses* next = nullptr;

    Students* findStudentByID(string studentID)
    {
        Students* list = this->studentList;
        while (list) {
            if (list->studentID == studentID)
                return list;
            list = list->next;
        }
        return nullptr;
    }

    Courses* findCourseByID(string courseID)
    {
        Courses* courseList = this;
        while (courseList) {
            if (courseList->courseID == courseID)
                return courseList;
            courseList = courseList->next;
        }
        return nullptr;
    }

    bool checkCourseConflict(Courses* checkCourse)
    {
        Courses* enrolledCourses = this;
        while (enrolledCourses) {
            if (enrolledCourses->day1 == checkCourse->day1 && enrolledCourses->session1 == checkCourse->session1)
                return false;
            if (enrolledCourses->day1 == checkCourse->day2 && enrolledCourses->session1 == checkCourse->session2)
                return false;
            if (enrolledCourses->day2 == checkCourse->day2 && enrolledCourses->session2 == checkCourse->session2)
                return false;
            if (enrolledCourses->day2 == checkCourse->day1 && enrolledCourses->session2 == checkCourse->session1)
                return false;
            enrolledCourses = enrolledCourses->next;
        }
        return true;
    }
};
struct Semesters {
    int semesterNo;
    Courses* courses = nullptr;
    Date startDate, endDate;
    Semesters* next = nullptr;
};

struct AcademicYears {
    string year = ""; //Ex: 1920 2021;
    Semesters* semesters = nullptr;
    Classes* classes = nullptr;
    AcademicYears* next = nullptr;
    string getFullYear() {
        string tmp = "20";
        return tmp + year.substr(0, 2) + " - " + tmp + year.substr(2, 2);
    }
};

struct FileInputManager {
    int fd;
    fpos_t pos;
    void store()
    {
        fflush(stdin);
        fgetpos(stdin, &pos);
        fd = dup(fileno(stdin));
    }
    void back()
    {
        fflush(stdin);
        dup2(fd, fileno(stdin));
        close(fd);
        clearerr(stdin);
        fsetpos(stdin, &pos); /* for C9X */
        cin.clear();
    }
    bool open(string fileName)
    {
        ifstream fin(fileName);
        if (!fin.is_open()) {
            fin.close();
            return false;
        }
        fin.close();
        store();
        freopen(fileName.c_str(), "r", stdin); 
        return true;
    }
};
struct FileOutputManager {
    int fd;
    fpos_t pos;
    void store()
    {
        fflush(stdout);
        fgetpos(stdout, &pos);
        fd = dup(fileno(stdout));
    }
    void back()
    {
        fflush(stdout);
        dup2(fd, fileno(stdout));
        close(fd);
        clearerr(stdout);
        fsetpos(stdout, &pos); /* for C9X */
    }
    void open(string fileName)
    {
        store();
        freopen(fileName.c_str(), "w", stdout);
    }
};



int getWindowWidth();
void setConsoleCursorPosition(const short& x, const short& y);
int getStartPositionOfACenteredText(const int& textSize);
int printCenteredText(const std::string& text, const int& coordY);
void setWindowSize(const short& width, const short& height);