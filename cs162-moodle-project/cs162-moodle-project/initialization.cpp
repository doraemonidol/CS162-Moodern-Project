#include "main.h"
#include "allRole.h"
#include "finalization.h"
#include "initialization.h"
#include "lecturer.h"
#include "staff.h"
#include "student.h"
void inpDate(Date& d) {
	cin >> d.day >> d.month >> d.year;
}
void inpAccounts(Accounts*& acc) {
	int n;
	cin >> n;
	Accounts* cur = nullptr;
	while (n--) {
		if (!acc) {
			acc = new Accounts;
			cur = acc;
		}
		else {
			cur->next = new Accounts;
			cur = cur->next;
		}
		cin >> cur->pwd >> cur->uName >> cur->role >> cur->socialID >> cur->lastname >> cur->firstname >> cur->gender;
		inpDate(cur->doB);
	}
}

void inpScoreboards(Scoreboards*& Board){
    Scoreboards* cur = nullptr;
    int n;
    cin >> n;
    while (n--){
        if (!Board){
            Board = new Scoreboards;
            cur = Board;
        }
        else{
            cur->next = new Scoreboards;
            cur = cur->next;
        }
        cin >> cur->courseName >> cur->courseID >> cur->midtermScore >> cur->finalScore >> cur->labScore >> cur->bonusScore;
    }
}

void inpStaffs(Staffs*& St){
    Staffs* cur = nullptr;
    int n;
    cin >> n;
    while (n--){
        if (!St){
            St = new Staffs;
            cur = St; 
        }
        else{
            cur->next = new Staffs;
            cur = cur->next;
        }
        inpAccounts(cur->account);
    }
}

void inpYears(AcademicYears*& yearList) {
    AcademicYears* cur = yearList = nullptr;
    int n;
    cin >> n;
    while (n--) {
        if (!yearList) {
            yearList = new AcademicYears;
            cur = yearList;
        } else {
            cur->next = new AcademicYears;
            cur = cur->next;
        }
        cin >> cur->year;
    }
}

void inpCourseClass(CourseClass*& courseClass) {
    CourseClass* cur = courseClass = nullptr;
    int n;
    cin >> n;
    while (n--) {
        if (!courseClass) {
            courseClass = new CourseClass;
            cur = courseClass;
        } else {
            cur->next = new CourseClass;
            cur = cur->next;
        }
        inpDate(cur->startDate);
        inpDate(cur->endDate);
        cin >> cur->DayInWeek >> cur->startTime >> cur->endTime >> cur->classID;
        int m;
        cin >> m;
        StudentCourse* sc = cur->studentCourse = nullptr;
        while (m--) {
            if (!cur->studentCourse) {
                cur->studentCourse = new StudentCourse;
                sc = cur->studentCourse;
            } else {
                sc->next = new StudentCourse;
                sc = sc->next;
            }
            cin >> sc->studentID >> sc->classID;
        }
    }
}

void inpCourses(Courses*& courseList) {
    Courses* cur = courseList = nullptr;
    int n;
    cin >> n;
    while (n--) {
        if (!courseList) {
            courseList = new Courses;
            cur = courseList;
        } else {
            cur->next = new Courses;
            cur = cur->next;
        }
        cin >> cur->courseID >> cur->courseName >> cur->LecturerName >> cur->room;
        inpCourseClass(cur->courseclass);
    }
}

void inpStudents(Students*& studentList) {
    Students* cur = studentList = nullptr;
    int n;
    cin >> n;
    while (n--) {
        if (!studentList) {
            studentList = new Students;
            cur = studentList;
        } else {
            cur->next = new Students;
            cur = cur->next;
        }
        inpAccounts(cur->account);
    }
}
