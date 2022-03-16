#include "main.h"
#include "allRole.h"
#include "finalization.h"
#include "initialization.h"
#include "staff.h"
#include "student.h"
void inpDate(Date& d) {
	cin >> d.day >> d.month >> d.year;
}

void inpAccounts(Accounts*& acc) {
    Accounts* cur = nullptr;
    int n;
    cin >> n;
    while (n--) {
        if (!acc) {
            acc = new Accounts;
            cur = acc;
        }
        else {
            cur->next = new Accounts;
            cur = cur->next;
        }
        cin >> acc->pwd >> acc->uName >> acc->role >> acc->socialID >> acc->lastname;
        cin.get();
        getline(cin, acc->firstname);
        cin >> acc->gender;
        inpDate(acc->doB);
    }
}

void inpAccount(Accounts*& acc) {
    cin >> acc->pwd >> acc->uName >> acc->role >> acc->socialID >> acc->lastname;
    cin.get();
    getline(cin, acc->firstname);
    cin >> acc->gender;
    inpDate(acc->doB);
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
        inpAccount(cur->account);
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
        cin >> cur->courseID;
        cin.get();
        getline(cin, cur->courseName);
        getline(cin, cur->lecturerName);
        cin >> cur->room;
        inpDate(cur->startDate);
        inpDate(cur->endDate);
        cin >> cur->day1 >> cur->day2 >> cur->session1 >> cur->session2;
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
        cin >> cur->studentID;
        inpAccount(cur->account);
        cin >> cur->classID;
        inpScoreboards(cur->scoreboards);
        inpCourses(cur->enrolledCourse);
    }
}
