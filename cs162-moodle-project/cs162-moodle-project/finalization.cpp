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
             << scoreBoard->totalScore << " " 
             << scoreBoard->otherScore << "\n";
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
        Classes* tem = cur->classes;
        int nClasses = 0;
        while (tem) {
            nClasses++;
            tem = tem->next;
        }
        cout << nClasses << '\n';
        while (nClasses--) {
            cout << cur->classes->classID;
            Classes* erase = cur->classes;
            cur->classes=cur->classes->next;
            delete cur->classes;
        }
        AcademicYears* tmp = cur->next;
        delete cur;
        cur = tmp;
    }
    yearList = NULL;
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
             << cur->credits << endl
             << cur->maxStudents << endl
             << cur->numStudents << endl
             << cur->lecturerName << endl
             << cur->room << endl;
        outDate(cur->startDate);
        outDate(cur->endDate);
        cout << cur->day1 << " " << cur->day2 << endl;
        cout << cur->session1 << " " << cur->session2 << endl;

        while (cur->studentList) {
            Students* student = cur->studentList->next;
            delete cur->studentList;
            cur->studentList = student;
        }

        Courses* course = cur->next;
        delete cur;
        cur = course;
    }
    courseList = NULL;
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
        int nCourse = 0;
        Courses* curCourse = cur->enrolledCourse;
        while (curCourse) {
            nCourse++;
            curCourse = curCourse->next;
        }
        cout << nCourse << '\n';
        while (cur->enrolledCourse) {
            cout << cur->enrolledCourse->courseID << '\n';
            Courses* tmp = cur->enrolledCourse->next;
            delete cur->enrolledCourse;
            cur->enrolledCourse = tmp;
        }


        Students* tmp = cur->next;
        delete cur;
        cur = tmp;
    }
    studentList = NULL;
}

void outSemester(Semesters*& semesterList) {
    Semesters* cur = semesterList;
    int n = 0;
    while (cur) {
        n++;
        cur = cur->next;
    }
    cout << n << '\n';
    cur = semesterList;
    while (n--) {
        cout << cur->semesterNo << '\n';
        outDate(cur->startDate);
        outDate(cur->endDate);
        Semesters* tmp = cur->next;
        delete cur;
        cur = tmp;
    }
}

void unloadData(AcademicYears* year, Students*& student, Staffs*& staff) {
    FileOutputManager f;
    AcademicYears* curYear = year;
    while (year) {
        // OUTPUT COURSES FIRST!
        Semesters* semester = year->semesters;
        while (semester) {
            f.open("./Database/" + year->year + "-S" + string(1, (semester->semesterNo + '0')) + "-Courses.txt");
            outCourses(semester->courses);
            f.back();
            semester = semester->next;
        }

        // OUTPUT SEMESTER
        f.open("./Database/" + year->year + "-Semesters.txt");
        outSemester(year->semesters);
        f.back();

        year = year->next;
    }
    cout << "** Courses and Semesters Unloaded Succesfully**\n";

    year = curYear;
    // OUTPUT ACADEMIC YEARS
    f.open("./Database/AcademicYears.txt");
    outYears(year);
    f.back();
    cout << "** Academic Years Unloaded Succesfully**\n";

    // OUTPUT STUDENTS INFO
    f.open("./Database/Students.txt");
    outStudents(student);
    f.back();
    cout << "** Students Info Unloaded Succesfully**\n";

    // OUTPUT STAFFS INFO
    f.open("./Database/Staffs.txt");
    outStaffs(staff);
    f.back();
    cout << "** Staffs Info Unloaded Succesfully**\n";
}