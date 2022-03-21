#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdio.h>
#include <chrono>
#include <ctime>
#include <string>
#include <conio.h>
using namespace std;

struct Courses;
struct Date {
    string day = "", month = "", year = "";
};

struct Courses;

struct Accounts {
    string pwd = "";
    string uName = "";
    int role = 0; //1 (true): staff / 0 (false): student
    string socialID = "";
    string lastname = "", firstname = "";
    char gender; //Female Male, Prefer not to say -> F,M,O
    Date doB;
    Accounts* next = nullptr;
};

struct Scoreboards {
    string courseName = ""; //the course that this list belongs to
    string courseID = "";
    double midtermScore = 0, finalScore = 0, labScore = 0, bonusScore = 0;
    Scoreboards* next = nullptr;
};

struct Students {
    string studentID = "";
    Accounts* account = nullptr;
    string classID = "";
    Scoreboards* scoreBoards = nullptr;
    Courses* enrolledCourse = nullptr;
    Students* next = nullptr;

    Students* findStudentByID(string studentID) {
        Students* list = this;
        while (list) {
            if (list->studentID == studentID) return list;
            list = list->next;
        }
        return nullptr;
    }

    Scoreboards* findScoreboardByID(string courseID) {
        Scoreboards* list = this->scoreBoards;
        while (list) {
            if (list->courseID == courseID) return list;
            list = list->next;
        }
        return nullptr;
    }
};

struct Classes {
    string classID = "";
    Students* students = nullptr;
    Classes* next = nullptr;
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
    Semesters* next = nullptr;
};

struct AcademicYears {
    string year = ""; //Ex: 1920 2021;
    Semesters* semesters = nullptr;
    Classes* classes = nullptr;
    AcademicYears* next = nullptr;
};