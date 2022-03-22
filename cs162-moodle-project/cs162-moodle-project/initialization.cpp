#include "main.h"
#include "allRole.h"
#include "finalization.h"
#include "initialization.h"
#include "staff.h"
#include "student.h"
void inpDate(Date& d) {
	cin >> d.day >> d.month >> d.year;
}

void inpAccount(Accounts*& account) {
    account = new Accounts;
    cin >> account->pwd >> account->uName >> account->role >> account->socialID >> account->firstname;
    cin.get();
    getline(cin, account->lastname);
    cin >> account->gender;
    inpDate(account->doB);
}

void inpScoreboards(Scoreboards*& scoreBoard){
    Scoreboards* cur = nullptr;
    int n;
    cin >> n;
    while (n--){
        if (!scoreBoard) {
            scoreBoard = new Scoreboards;
            cur = scoreBoard;
        }
        else{
            cur->next = new Scoreboards;
            cur = cur->next;
        }
        cin >> cur->courseName >> cur->courseID >> cur->midtermScore >> cur->finalScore >> cur->labScore >> cur->bonusScore;
    }
}

void inpStaffs(Staffs*& staffList, Accounts*& accountList){
    Staffs* curStaff = nullptr;
    Accounts* curAccount = accountList; // Khong gan nullptr vi luc nay accountList da chua du lieu cua studen
    int n;
    cin >> n;
    while (n--){
        if (!staffList) {
            staffList = new Staffs;
            curStaff = staffList; 
        }
        else{
            curStaff->next = new Staffs;
            curStaff = curStaff->next;
        }
        inpAccount(curStaff->account);
        if (!accountList) {
            accountList = curAccount = curStaff->account;
        } else {
            curAccount->next = curStaff->account;
            curAccount = curAccount->next;
        }
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
        cin.get();
        getline(cin, cur->year);
    }
}

void inpCourses(Courses*& courseList, Date startDate, Date endDate) {
    Courses* cur = courseList;
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
        cin >> cur->courseID;
        cin.get();
        getline(cin, cur->courseName);
        cin >> cur->credits >> cur->maxStudents >> cur->numStudents;
        getline(cin, cur->lecturerName);
        cin >> cur->room;
        if (startDate.day == "") {
            inpDate(cur->startDate);
            inpDate(cur->endDate);
        } else {
            cur->startDate = startDate;
            cur->endDate = endDate;
        }
        cin >> cur->day1 >> cur->day2 >> cur->session1 >> cur->session2;
    }
}

void inpStudents(Students*& studentList, Accounts*& accountList) {
    Students* curStudent = studentList = nullptr;
    Accounts* curAccount = accountList = nullptr;
    int n;
    cin >> n;
    while (n--) {
        if (!studentList) {
            studentList = new Students;
            curStudent = studentList;
        } else {
            curStudent->next = new Students;
            curStudent = curStudent->next;
        }
        cin >> curStudent->studentID;
        inpAccount(curStudent->account);

        if (!accountList) {
            accountList = curAccount = curStudent->account;
        } else {
            curAccount->next = curStudent->account;
            curAccount = curAccount->next;
        }

        cin >> curStudent->classID;
        inpScoreboards(curStudent->scoreBoards);
        Date tmp;
        inpCourses(curStudent->enrolledCourse, tmp, tmp);
    }
}

void inpSemester(Semesters*& semesterList) {
    Semesters* cur = semesterList = nullptr;
    int n;
    cin >> n;
    while (n--) {
        if (!semesterList) {
            semesterList = new Semesters;
            cur = semesterList;
        } else {
            cur->next = new Semesters;
            cur = cur->next;
        }
        cin >> cur->semesterNo;
        inpDate(cur->startDate);
        inpDate(cur->endDate);
    }
}