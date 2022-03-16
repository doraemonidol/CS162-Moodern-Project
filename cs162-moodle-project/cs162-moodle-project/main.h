#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdio.h>
#include <chrono>
#include <ctime>
#include <string>
using namespace std;

struct Courses;
struct Date {
    string day = "", month = "", year = "";
};

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
    string midtermScore = "", finalScore = "", labScore = "", bonusScore = "";
    Scoreboards* next = nullptr;
};

struct Students {
    string studentID = "";
    Accounts* account = nullptr;
    string classID = "";
    Scoreboards* scoreBoards = nullptr;
    Courses* enrolledCourse = nullptr;
    Students* next = nullptr;
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
    Date startDate, endDate;
    string startTime = "", endTime = "";
    Students* studentList = nullptr;
    string day1 = "", day2 = "", session1 = "", session2 = "";
    string room = "";
    string lecturerName = "";
    Courses* next = nullptr;
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