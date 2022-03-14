#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdio.h>
#include <chrono>
#include <ctime>
using namespace std;

struct Schedule {
    string data;
    Schedule *next = NULL, *daily = NULL;
    void initDailySchedule(Schedule* schedule)
    {
        Schedule* cur = schedule;
        for (int i = 0; i < 4; i++) {
            cur->daily = new Schedule;
            cur->daily->next = schedule->next;
            cur = cur->daily;
        }
    }

    void init()
    {
        Schedule* cur = this;
        for (int i = 0; i < 5; i++) {
            cur->next = new Schedule;
            cur = cur->next;
        }
        cur = this;
        for (int i = 0; i < 6; i++) {
            initDailySchedule(cur);
            cur = cur->next;
        }
    }

    void deleteDay(Schedule* daySchedule)
    {
        if (!daySchedule)
            return;
        deleteDay(daySchedule->daily);
        delete daySchedule;
    }

    void deallocate(Schedule* schedule)
    {
        if (!schedule)
            return;
        deallocate(schedule->next);
        deleteDay(schedule->daily);
        delete schedule;
    }
};
/*2D Linked List
How to use:
`next` is for the next day
`daily` saves session in a day

Allocation:
    Schedule *<pointer name> = new Schedule;
    <pointer name>->init();
Deallocation:
    <pointer name>->deallocate(<pointer name>);
*/

struct Date {
	string day = "", month = "", year = "";
};

struct Accounts {
	string pwd;
	string uName;
	int role;
	string socialID;
	string lastname, firstname;
	char gender; //Female Male, Prefer not to say -> F,M,O
	Date doB;
	Accounts* next = nullptr;
};

struct Scoreboards {
	string courseName; //the course that this list belongs to
	string courseID;
	string midtermScore = "", finalScore = "", labScore = "", bonusScore = "";
	Scoreboards* next = nullptr;
};

struct CheckinCourse {
	int bitweek = 0;
	string courseID, room, startTime, endTime;
	Date startDate, endDate;
	CheckinCourse* next = nullptr;
};

struct Students {
	string studentID;
	Accounts* account = nullptr;
	Scoreboards* scoreboards = nullptr;
    Schedule schedule;
    CheckinCourse* checkincourse = nullptr;
    Students* next = nullptr;
};

struct CourseDetail {
	string courseID, coursename, room, StartTime, endTime;
	Date startDate, endDate;
	CourseDetail* next = nullptr;
};

struct Classes {
    string classID;
    Students* students = nullptr;
    Schedule schedule;
    CourseDetail* CD = nullptr;
    Classes* next = nullptr;
};

struct Staffs {
	Accounts* account = nullptr;
	Staffs* next = nullptr;
};
struct Lecturers {
	Accounts* account = nullptr;
	Lecturers* next = nullptr;
};
struct StudentCourse {
	string classID;
	string studentID;
	StudentCourse* next = nullptr;
};
struct CourseClass {
	string classID;
	Students* students = nullptr;
	Date startDate, endDate;
	string startTime, endTime;
	StudentCourse* studentcourse = nullptr;
	int DayInWeek;
	int AtNth; //session
	CourseClass* next = nullptr;
};
struct Courses {
	// string courseno;
	string courseID = "";
	string courseName = "";
	CourseClass* courseclass;
	string room = "";
	string LecturerName = "";
	Courses* next = nullptr;
};
struct Semesters {
	char semesterNo;
	Courses* courses = nullptr;
	Lecturers* lecturers = nullptr;
	Staffs* staffs = nullptr;
	Semesters* next = nullptr;
};

struct AcademicYears {
	string year; //Ex: 1920 2021;
	Semesters* semesters = nullptr;
	Classes* classes = nullptr;
	AcademicYears* next = nullptr;
};
