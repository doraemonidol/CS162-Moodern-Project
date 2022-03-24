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
    cin.get();
    while (n--) {
        if (!yearList) {
            yearList = new AcademicYears;
            cur = yearList;
        } else {
            cur = new AcademicYears;
            cur->next = yearList;
        }
        getline(cin, cur->year);
        yearList = cur;
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
        cin.get();
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

void inpClasses(Classes*& classList) {
    Classes* cur = classList = nullptr;
    int n;
    cin >> n;
    while (n--) {
        if (!classList) {
            classList = new Classes;
            cur = classList;
        } else {
            cur->next = new Classes;
            cur = cur->next;
        }
        cin >> cur->classID;
    }
}

void initData(AcademicYears*& year, Students*& student, Staffs*& staff, Accounts*& account) {
    year = nullptr;
    student = nullptr;
    staff = nullptr;
    account = nullptr;
    FileInputManager f;
    // INPUT ACADEMIC YEARS
    f.open("./Database/AcademicYears.txt");
    inpYears(year);
    f.back();
    cout << "*Academic Years* Loaded!\n";
    // INPUT SEMESTERS
    AcademicYears* curYear = year;
    while (curYear) {
        f.open("./Database/" + year->year + "-Semesters.txt");
        inpSemester(year->semesters);
        f.back();
        curYear = curYear->next;
    }

    cout << "*Semesters* Loaded!\n";
    // INPUT COURSES
    curYear = year;
    while (curYear) {
        Semesters* curSem = curYear->semesters;
        while (curSem) {
            Date tmp;
            f.open("./Database/" + year->year + "-S" + string(1, (curSem->semesterNo + '0')) + "-Courses.txt");
            inpCourses(year->semesters->courses, tmp, tmp);
            f.back();
            curSem = curSem->next;
        }
        curYear = curYear->next;
    }

    cout << "*Students Info* Loaded!\n";
    // INPUT STUDENTS
    f.open("./Database/Students.txt");
    inpStudents(student, account);
    f.back();

    cout << "*Staffs Info* Loaded*\n";
    // INPUT STAFFS
    f.open("./Database/Staffs.txt");
    inpStaffs(staff, account);
    f.back();
}