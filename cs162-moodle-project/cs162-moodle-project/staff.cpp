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
            _getch();
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
            _getch();
            return;
        } else {
            cout << "Can't find course with ID " << courseID << ". Double check and try again!\n";
        }
    }
}
Scoreboards* AddScoreBoard(Students* student, string courseID) {
    Scoreboards* scoreboard = student->scoreBoards;
    while (scoreboard->next) {
        scoreboard = scoreboard->next;
    }
    scoreboard->next = new Scoreboards;
    scoreboard->next = nullptr;
    scoreboard->next->courseID = courseID;
    return scoreboard->next;
}

bool UpdateStudentScoreboard(Students* allStudentList, string studentID, string courseID, Courses* coursesList) {
    Students* student = allStudentList->findStudentByID(studentID);
    if (!student) return false;
    Scoreboards* scoreboard = student->findScoreboardByID(courseID);
    if (!scoreboard) {
        if (coursesList->findCourseByID(courseID))
            scoreboard = AddScoreBoard(student, courseID);
        else return false;
    }
    cout << ">>>" << student->account->firstname << " " << student->account->lastname << "'s Scoreboard of " << coursesList->findCourseByID(courseID) << " Update Session<<<\n";
    double sc;
    cout << "(Input nothing to skip editing a session)\n";
    cout << "Midterm Score update to: ";
    cin >> sc;
    scoreboard->midtermScore = sc;
    cout << "Lab Score update to: ";
    cin >> sc;
    scoreboard->labScore = sc;
    cout << "Final Score update to: ";
    cin >> sc;
    scoreboard->finalScore = sc;
    cout << "Bonus Score update to: ";
    cin >> sc;
    scoreboard->bonusScore = sc;
    return true;
}

void courseToCSV(Courses* course) {
    FILE* f;
    f = freopen("courseCSV.txt", "w", stdout);
    cout << course->courseID << '\n';
    cout << "Student ID, Name\n";
    Students* student = course->studentList;
    while (student) {
        cout << student->studentID << ", " << student->account->firstname << " " << student->account->lastname << '\n';
    }
    fclose(f);
}

void CSVToScoreboard(Courses* course) {
    ifstream f;
    f.open("scoreboardCSV.txt");
    string trash, courseID;
    cin >> courseID;
    getline(f, trash);
    while (!f.eof()) {
        string studentID = "", no = "", name = "";
        getline(f, no, ',');
        getline(f, studentID, ',');
        getline(f, name, ',');
        Scoreboards* scoreboard = course->findStudentByID(studentID)->findScoreboardByID(courseID);
        f >> scoreboard->labScore;
        f.get();
        f >> scoreboard->midtermScore;
        f.get();
        f >> scoreboard->finalScore;
        f.get();
        f >> scoreboard->bonusScore;
        f.get();
    }
    f.close();
}
