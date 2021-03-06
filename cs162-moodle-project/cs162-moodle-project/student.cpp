#include "main.h"
#include "allRole.h"
#include "finalization.h"
#include "initialization.h"
#include "staff.h"
#include "student.h"

bool cmpDate(Date left, Date right, Date middle) {
    if (left.formatYYYYmmDD() <= middle.formatYYYYmmDD() && middle.formatYYYYmmDD() <= right.formatYYYYmmDD())
        return true;
    return false;
}

void studentEnrollment(Students* student, Courses* courseList) {
    Date curDate;
    curDate.getCurrentDate();
    int n = 0;
    Courses *courseEnrolled = student->enrolledCourse, *choosenCourse, *curCourse;
    while (courseEnrolled) {
        n++;
        courseEnrolled = courseEnrolled->next;
    }

    if (n >= 5) {
        cout << "You have reached course registration limit (5/5).\n";
        return;
    }
    n = 0;
    curCourse = courseList;
    while (curCourse) {
        if (cmpDate(curCourse->startDate, curCourse->endDate, curDate)) {
            cout << "---------------\n";
            cout << "Course ID: " << curCourse->courseID << '\n';
            cout << "Course name: " << curCourse->courseName << '\n';
            cout << "Number of credits: " << curCourse->credits << '\n';
            cout << "Current enrolled students: " << curCourse->numStudents << "/" << curCourse->maxStudents << '\n';
            cout << "Lecturer: " << curCourse->lecturerName << '\n';
            cout << "Room: " << curCourse->room << '\n';
            cout << "Schedule: " << curCourse->day1 << " (" << curCourse->session1 << ") and " << curCourse->day2 << " (" << curCourse->session2 << ")\n";
            n++;
        }
        curCourse = curCourse->next;
    }
    if (n == 0) {
        cout << "There are no registration sessions of any course at the moment. Please come back later!\n";
        return;
    }
    while (true) {
        cout << "-------------------";
        cout << "Type in Course ID you want to register: \n>> ";
        string courseID;
        cin >> courseID;
        choosenCourse = courseList->findCourseByID(courseID);
        if (choosenCourse && cmpDate(choosenCourse->startDate, choosenCourse->endDate, curDate) && student->enrolledCourse->checkCourseConflict(choosenCourse) && choosenCourse->numStudents + 1 <= choosenCourse->maxStudents) {
            Students* tmp = choosenCourse->studentList;
            choosenCourse->studentList = new Students;
            choosenCourse->studentList->studentID= student->studentID;
            choosenCourse->studentList->account= student->account;
            choosenCourse->studentList->classID= student->classID;
            choosenCourse->studentList->scoreBoards= student->scoreBoards;
            choosenCourse->studentList->next = tmp;
            choosenCourse->numStudents++;

            Courses* prevCourse = student->enrolledCourse;
            student->enrolledCourse = new Courses;
            
            student->enrolledCourse->courseID = choosenCourse->courseID;
            student->enrolledCourse->courseName = choosenCourse->courseName;
            student->enrolledCourse->startDate = choosenCourse->startDate;
            student->enrolledCourse->endDate = choosenCourse->endDate;
            student->enrolledCourse->day1 = choosenCourse->day1;
            student->enrolledCourse->day2 = choosenCourse->day2;
            student->enrolledCourse->session1 = choosenCourse->session1;
            student->enrolledCourse->session2 = choosenCourse->session2;
            student->enrolledCourse->room = choosenCourse->room;
            student->enrolledCourse->lecturerName = choosenCourse->lecturerName;

            student->enrolledCourse->next = prevCourse;
            cout << "Succesfully enroll in " << student->enrolledCourse->courseID << "!\n";
            cout << "Press any key to Return to Main Screen!";
            //_getch();
            return;
        } else {
            if (!choosenCourse)
                cout << "Why did you type in an unavailable courses! Try again!\n";
            else {
                if (choosenCourse->numStudents + 1 > choosenCourse->maxStudents)
                    cout << "Maximum students reached. You can't enroll in this course.\n";
                else {
                    if (!cmpDate(choosenCourse->startDate, choosenCourse->endDate, curDate))
                        cout << "Course registration not available!\n";
                    else
                        cout << "Schedule conflicted with some enrolled courses!\n";
                }
            }
        }
    }
}

bool deleteEnrolledCourse(Students*& student, string courseID, Date curday) {
    Courses* courses = student->enrolledCourse;
    if (courses->courseID == courseID) {
        student->enrolledCourse = student->enrolledCourse->next;
        //check
        Date left, right;
        left.day += courses->day1[0];
        left.day += courses->day1[1];
        left.month += courses->day1[3];
        left.month += courses->day1[4];
        left.year += courses->day1[6];
        left.year += courses->day1[7];
        left.year += courses->day1[8];
        left.year += courses->day1[9];
        right.day += courses->day2[0];
        right.day += courses->day2[1];
        right.month += courses->day2[3];
        right.month += courses->day2[4];
        right.year += courses->day2[6];
        right.year += courses->day2[7];
        right.year += courses->day2[8];
        right.year += courses->day2[9];
        if (!cmpDate(left, right, curday)) return false;
        //check
        delete courses;
        return true;
    }
    while (courses->next) {
        if (courses->next->courseID == courseID) {
            Courses* erase = courses->next;
            courses->next = courses->next->next;
            //check
            Date left, right;
            left.day += erase->day1[0];
            left.day += erase->day1[1];
            left.month += erase->day1[3];
            left.month += erase->day1[4];
            left.year += erase->day1[6];
            left.year += erase->day1[7];
            left.year += erase->day1[8];
            left.year += erase->day1[9];
            right.day += erase->day2[0];
            right.day += erase->day2[1];
            right.month += erase->day2[3];
            right.month += erase->day2[4];
            right.year += erase->day2[6];
            right.year += erase->day2[7];
            right.year += erase->day2[8];
            right.year += erase->day2[9];
            if (!cmpDate(left, right, curday)) return false;
            //check
            delete erase;
            return true;
        }
        courses = courses->next;
    }
    return false;
}