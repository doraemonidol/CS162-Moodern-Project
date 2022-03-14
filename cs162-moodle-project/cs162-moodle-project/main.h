#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include <stdio.h>
#include <chrono>
#include <ctime>  
#include<string>
using namespace std;

/* struct<type> {
	int data;
	<type>* next;
	<type>* sub;
}; 2D Linked List*/

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

	string schedule[6][4];
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
	string schedule[6][4];
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