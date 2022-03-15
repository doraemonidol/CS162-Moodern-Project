#include "main.h"
#include "allRole.h"
#include "finalization.h"
#include "initialization.h"
#include "lecturer.h"
#include "staff.h"
#include "student.h"
void outDate(Date& d) {
	cout << d.day << ' ' << d.month << ' ' << d.year << '\n';
}
void outAccounts(Accounts*& acc) {
	int n = 0;
	Accounts* tmp = acc;
	//elements count
	while (tmp) {
		n++;
		tmp = tmp->next;
	}
	cout << n << '\n';
	while (acc) {
		cout << acc->pwd << ' ' << acc->uName << ' ' << acc->role << ' ' << acc->socialID << ' ' << acc->lastname << ' ' << acc->firstname << ' ' << acc->gender << ' ';
		outDate(acc->doB);
		Accounts* erase = acc;
		acc = acc->next;
		delete erase;
	}
}

void outScoreboards(Scoreboards*& Board){
    int n = 0;
    Scoreboards* cur = Board;
    while (cur){
        n++;
        cur = cur->next;
    }
    cout << n << '\n';
    while (Board){
        cout << Board->courseName << " " << Board->courseID << " " << Board->midtermScore << " "<< Board->finalScore << " "<< Board->labScore<< " "<< Board->bonusScore << " ";
		Scoreboards* del = Board;
        Board = Board->next;
		delete del;
    }
}

void outStaffs(Staffs*& St){
    Staffs* cur = St;
    int n = 0;
    while (cur){
        n++;
        cur = cur->next;
    }
    cout << n << '\n';
    while(St){
        outAccounts(St->account);
		Staffs* del = St;
        St = St->next;
		delete del;
    }
}

void outYears(AcademicYears*& yearList) {
    AcademicYears* cur = yearList;
    int n = 0;
    while (cur) {
        n++;
        cur = cur->next;
    }
    cout << n << '\n';
    cur = yearList;
    while (n--) {
        cout << cur->year << endl;
    }
}

void outCourseClass(CourseClass*& courseClass) {
    CourseClass* cur = courseClass;
    int n = 0;
    while (cur) {
        n++;
        cur = cur->next;
    }
    cout << n << '\n';
    cur = courseClass;
    while (n--) {
        if (!courseClass) {
            courseClass = new CourseClass;
            cur = courseClass;
        } else {
            cur->next = new CourseClass;
            cur = cur->next;
        }
        outDate(cur->startDate);
        outDate(cur->endDate);
        cout << cur->DayInWeek << endl
             << cur->startTime << " " << cur->endTime << endl
             << cur->classID;

        int m = 0;
        StudentCourse* sc = cur->studentCourse;
        while (sc) {
            m++;
            sc = sc->next;
        }
        cout << m << '\n';
        sc = cur->studentCourse;
        while (m--) {
            cin >> sc->studentID << " " << sc->classID << endl;
        }
    }
}

void outCourses(Courses*& courseList) {
    Courses* cur = courseList;
    int n = 0;
    while (cur) {
        cur = cur->next;
        n++;
    }
    cout << n << '\n';
    cur = courseList;

    while (n--) {
        cout << cur->courseID << endl
             << cur->courseName << endl
             << cur->LecturerName << endl
             << cur->room;
        outCourseClass(cur->courseclass);
        cout << endl;
    }
}

void outStudents(Students*& studentList) {
    Students* cur = studentList;
    int n = 0;
    while (cur) {
        n++;
        cur = cur->next;
    }

    cout << n << '\n';

    while (n--) {
        outAccounts(cur->account);
        Students* tmp = cur->next;
        delete cur;
        cur = tmp;
    }
}