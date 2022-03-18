#include "main.h"
#include "allRole.h"
#include "finalization.h"
#include "initialization.h"
#include "staff.h"
#include "student.h"

void deleteCourseByID(Courses* courseList) {
    string courseID;
    while (true) {
        cout << "Enter the course ID (will be deleted): \n>> ";
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