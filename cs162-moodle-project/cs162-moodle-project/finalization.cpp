#include "main.h"
#include "allRole.h"
#include "finalization.h"
#include "initialization.h"
#include "staff.h"
#include "student.h"
void outDate(Date& d) {
	cout << d.day << ' ' << d.month << ' ' << d.year << '\n';
}

void outAccount(Accounts*& acc) {
    cout << acc->pwd << '\n' << acc->uName << '\n' << acc->role << '\n' << acc->socialID << '\n' << acc->lastname << '\n' << acc->firstname << '\n' << acc->gender << '\n';
    outDate(acc->doB);
    delete acc;
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
        cout << Board->courseName << " " << Board->courseID << " " << Board->midtermScore << " "<< Board->finalScore << " "<< Board->labScore<< " "<< Board->bonusScore << "\n";
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
        outAccount(St->account);
        cout << endl;
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
        AcademicYears* tmp = cur->next;
        delete cur;
        cur = tmp;
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
             << cur->lecturerName << endl
             << cur->room << endl;
        outDate(cur->startDate);
        outDate(cur->endDate);
        cout << cur->day1 << " " << cur->day2 << endl;
        cout << cur->session1 << " " << cur->session2 << endl << endl;
        Courses* course = cur->next;
        delete cur;
        cur = course;
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
    cur = studentList;

    while (n--) {
        cout << cur->studentID << endl;
        outAccount(cur->account);
        cout << cur->classID << endl;
        outScoreboards(cur->scoreboards);
        outCourses(cur->enrolledCourse);
        cout << endl;
        Students* tmp = cur->next;
        delete cur;
        cur = tmp;
    }
}

void viewScoreboards (Scoreboards*& scoreb){
    Scoreboards* cur = scoreb;
    int n=0;
    while (cur){
        n++;
        cur = cur->next;
    }
    cout << n << '\n';
    cur = scoreb;

    while (n--){
        cout << cur->courseName << endl;
        cout << cur->courseID << endl;
        cout << cur->midtermScore << " " << cur->finalScore << " " << cur->labScore << " " << cur->bonusScore;
        cur = cur->next;
    }
}