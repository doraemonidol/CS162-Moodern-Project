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
        cin.get();
        getline(cin, cur->courseName);
        cin >> cur->courseID >> cur->midtermScore >> cur->finalScore >> cur->totalScore >> cur->otherScore;
    }
}

void inpStaffs(Staffs*& staffList, Accounts*& accountList){
    Staffs* curStaff = nullptr;
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
            accountList = curStaff->account;
        } else {
            curStaff->account->next = accountList;
            accountList = curStaff->account;
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
        int nClasses;
        cin >> nClasses;
        while (nClasses--) {
            Classes* tem = new Classes;
            cin >> tem->classID;
            tem->next = cur->classes;
            cur->classes = tem;
        }
    }
}

void inpCourses(Courses*& courseList) {
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
        inpDate(cur->startDate);
        inpDate(cur->endDate);
        cin >> cur->day1 >> cur->day2 >> cur->session1 >> cur->session2;
    }
}
void inpCoursesUser(Courses*& courseList, Date startDate, Date endDate) {
    Courses* cur = courseList;
    int n;
    cout << "Number of courses: ";
    cin >> n;
    while (n--) {
        if (!courseList) {
            courseList = new Courses;
            cur = courseList;
        } else {
            cur = new Courses;
            cur->next = courseList;
        }
        cout << "Course ID: ";
        cin >> cur->courseID;
        cout << "Course name: ";
        cin.get();
        getline(cin, cur->courseName);
        cout << "Number of credits: ";
        cin >> cur->credits;
        cout << "Maximum students (default 50): ";
        cin >> cur->maxStudents;
        cout << "Lecturer's name: ";
        cin.get();
        getline(cin, cur->lecturerName);
        cout << "Room: ";
        cin >> cur->room;
        cur->startDate = startDate;
        cur->endDate = endDate;
        cout << "Day 1 (MON / TUE / WED / THU / FRI / SAT): ";
        cin >> cur->day1;
        cout << "Session (1 for 07:30, 2 for 09:30, 3 for 13:30 and 4 for 15:30): ";
        cin >> cur->session1;
      
        cout << "Day 2 (MON / TUE / WED / THU / FRI / SAT): ";
        cin >> cur->day2;
        cout << "Session (1 for 07:30, 2 for 09:30, 3 for 13:30 and 4 for 15:30): ";
        cin >> cur->session2;
        courseList = cur;
    }
}
void inpStudents(Students*& studentList, Accounts*& accountList, AcademicYears* yearList, Classes* classList) {
    Students* curStudent = studentList = nullptr;
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
            accountList = curStudent->account;
        } else {
            curStudent->account->next = accountList;
            accountList = curStudent->account;
        }
        cin >> curStudent->classID;
        Classes* tmp = classList->findByID(curStudent->classID);
        inpScoreboards(curStudent->scoreBoards);
        if (tmp) {
            Students* student = new Students;
            student->studentID = curStudent->studentID;
            student->account = curStudent->account;
            student->enrolledCourse = curStudent->enrolledCourse;
            student->scoreBoards = curStudent->scoreBoards;
            student->next = tmp->students;
            tmp->students = student;
        }
        int nCourse;
        cin >> nCourse;
        while (nCourse--) {
            Courses* newCourse = new Courses;
            cin >> newCourse->courseID;
            bool kt = true;
            AcademicYears* year = yearList;
            while (year && kt) {
                Semesters* sem = year->semesters;
                if (sem) {
                    Courses* course = sem->courses->findCourseByID(newCourse->courseID);

                    if (!course) {
                    } else {
                        newCourse->courseName = course->courseName;
                        newCourse->credits = course->credits;
                        newCourse->maxStudents = course->maxStudents;
                        newCourse->numStudents = course->numStudents;
                        newCourse->startDate = course->startDate;
                        newCourse->endDate = course->endDate;
                        newCourse->day1 = course->day1;
                        newCourse->day2 = course->day2;
                        newCourse->session1 = course->session1;
                        newCourse->session2 = course->session2;
                        newCourse->room = course->room;
                        newCourse->lecturerName = course->lecturerName;
                        newCourse->next = curStudent->enrolledCourse;
                        curStudent->enrolledCourse = newCourse;

                        Students* tmp = course->studentList;
                        course->studentList = new Students;
                        course->studentList->studentID = curStudent->studentID;
                        course->studentList->account = curStudent->account;
                        course->studentList->classID = curStudent->classID;
                        course->studentList->scoreBoards = curStudent->scoreBoards;
                        course->studentList->enrolledCourse = curStudent->enrolledCourse;
                        course->studentList->next = tmp;
                        kt = false;
                    }
                }
                year = year->next;
            }
            if (kt)
                delete newCourse;
        }
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
    cout << "Number of classes: ";
    cin >> n;
    cout << "Class ID: \n";
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

void initData(AcademicYears*& year, Students*& student, Staffs*& staff, Accounts*& account)
{
    year = nullptr;
    student = nullptr;
    staff = nullptr;
    account = nullptr;
    FileInputManager f;
    // INPUT ACADEMIC YEARS
    if (f.open("./Database/AcademicYears.txt")) {
        inpYears(year);
        f.back();
    } else {
        ofstream fout("./Database/AcademicYears.txt");
        fout.close();
    }
    cout << "*Academic Years* Loaded!\n";
    // INPUT SEMESTERS
    AcademicYears* curYear = year;
    while (curYear) {
        if (f.open("./Database/" + curYear->year + "-Semesters.txt")) {
            inpSemester(curYear->semesters);
            f.back();
        }
        curYear = curYear->next;
    }

    cout << "*Semesters* Loaded!\n";
    // INPUT COURSES
    curYear = year;
    while (curYear) {
        Semesters* curSem = curYear->semesters;
        while (curSem) {
            if (f.open("./Database/" + curYear->year + "-S" + string(1, (curSem->semesterNo + '0')) + "-Courses.txt")) {
                inpCourses(curSem->courses);
                f.back();
            }
            curSem = curSem->next;
        }
        curYear = curYear->next;
    }
    cout << "*Courses* Loaded!\n";

    // INPUT STUDENTS
    if (f.open("./Database/Students.txt")) {
        inpStudents(student, account, year, year->classes);
        f.back();
    } else {
        ofstream fout("./Database/Students.txt");
        fout.close();
    }
    cout << "*Students Info* Loaded!\n";

    // INPUT STAFFS
    if (f.open("./Database/Staffs.txt")) {
        inpStaffs(staff, account);
        f.back();
    } else {
        ofstream fout("./Database/Staffs.txt");
        fout.close();
    }
    cout << "*Staffs Info* Loaded*\n";
}