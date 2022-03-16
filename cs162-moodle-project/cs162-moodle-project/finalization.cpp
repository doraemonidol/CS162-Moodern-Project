#include "main.h"
#include "allRole.h"
#include "finalization.h"
#include "initialization.h"
#include "staff.h"
#include "student.h"
void outDate(Date& d) {
	cout << d.day << ' ' << d.month << ' ' << d.year << '\n';
}

void outAccount(Accounts*& account) {
    cout << account->pwd << '\n'
         << account->uName << '\n'
         << account->role << '\n'
         << account->socialID << '\n'
         << account->firstname << '\n'
         << account->lastname << '\n'
         << account->gender << '\n';
    outDate(account->doB);
    delete account;
}

void outScoreboards(Scoreboards*& scoreBoard){
    int n = 0;
    Scoreboards* cur = scoreBoard;
    while (cur){
        n++;
        cur = cur->next;
    }
    cout << n << '\n';
    while (scoreBoard) {
        cout << scoreBoard->courseName << " "
             << scoreBoard->courseID << " " 
             << scoreBoard->midtermScore << " " 
             << scoreBoard->finalScore << " " 
             << scoreBoard->labScore << " " 
             << scoreBoard->bonusScore << "\n";
        Scoreboards* del = scoreBoard;
        scoreBoard = scoreBoard->next;
		delete del;
    }
}

void outStaffs(Staffs*& staffList) {
    Staffs* curStaff = staffList;
    int n = 0;
    while (curStaff) {
        n++;
        curStaff = curStaff->next;
    }
    cout << n << '\n';
    while (staffList) {
        outAccount(staffList->account);
        //no endl here as outAccount had one already
        Staffs* del = staffList;
        staffList = staffList->next;
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
        cout << cur->session1 << " " << cur->session2 << endl;
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
        outScoreboards(cur->scoreBoards);
        outCourses(cur->enrolledCourse);
        //no endl here, same reason
        Students* tmp = cur->next;
        delete cur;
        cur = tmp;
    }
}
