#include "main.h"
#include "allRole.h"
#include "finalization.h"
#include "initialization.h"
#include "staff.h"
#include "student.h"

void updateCourseInfomation(Courses* courseList, Students* studentList) {
    viewCourses(courseList);
    string courseID;
    while (true) {
        cout << "---------------\n";
        cout << "Enter the course ID to update: \n>> ";
        cin >> courseID;
        Courses* curCourse = courseList;
        while (curCourse && curCourse->courseID != courseID) {
            curCourse = curCourse->next;
        }
        if (curCourse) {
            cout << "Leave blank to keep the original data!\n";
            string change = "";
            cout << "Course ID: " << curCourse->courseID << ' -> ';
            cin.get();
            getline(cin, change);
            if (change != "") {
                curCourse->courseID = change;
                change = "";
            }
            cout << "Course name: " << curCourse->courseName << ' -> ';
            getline(cin, change);
            if (change != "") {
                curCourse->courseName = change;
                change = "";
            }
            cout << "Number of credits: " << curCourse->credits << ' -> ';
            getline(cin, change);
            if (change != "") {
                curCourse->credits = stoi(change);
                change = "";
            }
            cout << "Maximum students: " << curCourse->maxStudents << ' -> ';
            getline(cin, change);
            if (change != "") {
                curCourse->maxStudents = stoi(change);
                change = "";
            }
            cout << "Lecturer: " << curCourse->lecturerName << ' -> ';
            getline(cin, change);
            if (change != "") {
                curCourse->lecturerName = change;
                change = "";
            }
            cout << "Room: " << curCourse->room << ' -> ';
            getline(cin, change);
            if (change != "") {
                curCourse->room = change;
                change = "";
            }

            cout << "Schedule: " << curCourse->day1 << " -> ";
            getline(cin, change);
            if (change != "") {
                curCourse->room = change;
                change = "";
            }
            cout << "            -" << curCourse->session1 << " -> ";
            getline(cin, change);
            if (change != "") {
                curCourse->room = change;
                change = "";
            }
            cout << "          " << curCourse->day2 << " -> ";
            getline(cin, change);
            if (change != "") {
                curCourse->room = change;
                change = "";
            }
            cout << "            -" << curCourse->session2 << " -> ";
            getline(cin, change);
            if (change != "") {
                curCourse->room = change;
                change = "";
            }

            cout << "Update course successfully!\n";
            cout << "Press any key to Return to Main Screen!";
            int tmp = getch();
            return;
        } else {
            cout << "Can't find course with ID " << courseID << ". Double check and try again!\n";
        }
    }
}

void deleteCourseByID(Courses* courseList) {
    string courseID;
    while (true) {
        cout << "Enter the course ID to delete: \n>> ";
        cin >> courseID;
        Courses* curCourse = courseList;
        while (curCourse && curCourse->courseID != courseID) {
            curCourse = curCourse->next;
        }
        if (curCourse) {
            while (curCourse->studentList) {
                Students* tmp = curCourse->studentList->next;
                delete curCourse->studentList;
                curCourse->studentList = tmp;
            }
            Courses* tmp = curCourse->next;
            // remove enrolled course for students here
            delete curCourse;
            curCourse = tmp;
            cout << "Delete course successfully!\n";
            cout << "Press any key to Return to Main Screen!";
            int tmp = getch();
            return;
        } else {
            cout << "Can't find course with ID " << courseID << ". Double check and try again!\n";
        }
    }
}