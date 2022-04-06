#include "main.h"
#include "allRole.h"
#include "finalization.h"
#include "initialization.h"
#include "staff.h"
#include "student.h"
#pragma warning(disable : 4996)
void updateCourseInfomation(Courses* courseList) {
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
            cout << "Course name: " << curCourse->courseName << " -> ";
            cin.get();
            getline(cin, change);
            if (change != "") {
                curCourse->courseName = change;
                change = "";
            }
            cout << "Number of credits: " << curCourse->credits << " -> ";
            getline(cin, change);
            if (change != "") {
                curCourse->credits = stoi(change);
                change = "";
            }
            cout << "Maximum students: " << curCourse->maxStudents << " -> ";
            getline(cin, change);
            if (change != "") {
                curCourse->maxStudents = stoi(change);
                change = "";
            }
            cout << "Lecturer: " << curCourse->lecturerName << " -> ";
            getline(cin, change);
            if (change != "") {
                curCourse->lecturerName = change;
                change = "";
            }
            cout << "Room: " << curCourse->room << " -> ";
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
            cout << "           " << curCourse->session1 << " -> ";
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
            cout << "           " << curCourse->session2 << " -> ";
            getline(cin, change);
            if (change != "") {
                curCourse->room = change;
                change = "";
            }

            cout << "Update course successfully!\n";
            return;
        } else {
            cout << "Can't find course with ID " << courseID << ". Double check and try again!\n";
        }
    }
}

void deleteCourseByID(Courses*& courseList) {
    string courseID;
    while (true) {
        cout << "Enter the course ID to delete: \n>> ";
        cin >> courseID;
        Courses *curCourse = courseList, *father = nullptr;
        while (curCourse && curCourse->courseID != courseID) {
            father = curCourse;
            curCourse = curCourse->next;
        }
        if (curCourse) {
            while (curCourse->studentList) {
                Students* tmp = curCourse->studentList->next;
                delete curCourse->studentList;
                curCourse->studentList = tmp;
            }
            if (father)
                father->next = curCourse->next;
            else
                courseList = courseList->next;
            // remove enrolled course for students here
            delete curCourse;
            cout << "Delete course successfully!\n";
            return;
        } else {
            cout << "Can't find course with ID " << courseID << ". Double check and try again!\n";
        }
    }
}
pair<Scoreboards*, Scoreboards*> AddScoreBoard(Students* student, string courseID, Courses* courses) {
    Scoreboards* scoreboard = student->scoreBoards;
    Scoreboards* scoreboard2 = courses->findCourseByID(courseID)->studentList->findStudentByID(student->studentID)->scoreBoards;
    while (scoreboard && scoreboard->next) {
        scoreboard = scoreboard->next;
        scoreboard2 = scoreboard2->next;
    }
    string courseName = student->enrolledCourse->findCourseByID(courseID)->courseName;
    if (scoreboard) {
        scoreboard->next = new Scoreboards;
        scoreboard->next->next = nullptr;
        scoreboard->next->courseID = courseID;
        scoreboard->next->courseName = courseName;

        scoreboard2->next = new Scoreboards;
        scoreboard2->next->next = nullptr;
        scoreboard2->next->courseID = courseID;
        scoreboard2->next->courseName = courseName;
        return { scoreboard->next, scoreboard2->next };
    }
    else {
        scoreboard = new Scoreboards;
        scoreboard->next = nullptr;
        scoreboard->courseID = courseID;
        student->scoreBoards = scoreboard;
        scoreboard->courseName = courseName;

        scoreboard2 = new Scoreboards;
        scoreboard2->next = nullptr;
        scoreboard2->courseID = courseID;
        courses->findCourseByID(courseID)->studentList->findStudentByID(student->studentID)->scoreBoards = scoreboard;
        scoreboard2->courseName = courseName;
        return { scoreboard, scoreboard2 };
    }
}

bool UpdateStudentScoreboard(Students* allStudentList, string studentID, string courseID, Courses* coursesList) {
    Students* student = allStudentList->findStudentByID(studentID);
    if (!student) return false;
    Scoreboards* scoreboard = student->findScoreboardByID(courseID);
    Scoreboards* scoreboard2 = coursesList->findCourseByID(courseID)->studentList->findStudentByID(studentID)->findScoreboardByID(courseID);
    if (!scoreboard) {
        if (coursesList->findCourseByID(courseID)) {
            auto tmp = AddScoreBoard(student, courseID, coursesList);
            scoreboard = tmp.first;
            scoreboard2 = tmp.second;
        }
        else return false;
    }
    cout << ">>>" << student->account->firstname << " " << student->account->lastname << "'s Scoreboard of " << coursesList->findCourseByID(courseID)->courseName << " Update Session<<<\n";
    double sc;
    cout << "(Input nothing to skip editing a session)\n";
    cout << "Midterm Score update to: ";
    cin >> sc;
    scoreboard->midtermScore = sc;
    scoreboard2->midtermScore = sc;
    cout << "Total Score update to: ";
    cin >> sc;
    scoreboard->totalScore = sc;
    scoreboard2->totalScore = sc;
    cout << "Final Score update to: ";
    cin >> sc;
    scoreboard->finalScore = sc;
    scoreboard2->finalScore = sc;
    cout << "Other Score update to: ";
    cin >> sc;
    scoreboard->otherScore = sc;
    scoreboard2->otherScore = sc;
    return true;
}

void courseToCSV(Courses* course) {
    ofstream f;
    f.open("./Database/courseCSV.txt");
    f << course->courseID << '\n';
    f << "Student ID, Name\n";
    Students* student = course->studentList;
    while (student) {
        f << student->studentID << ", " << student->account->firstname << " " << student->account->lastname << '\n';
        student = student->next;
    }
    f.close();
}

void CSVToScoreboard(Courses* course, Students* studentList) {
    ifstream f;
    f.open("./Database/scoreboardCSV.txt");
    string trash="231", courseID;
    f >> courseID;
    f.get();
    getline(f, trash);
    while (!f.eof()) {
        string studentID = "", no = "", name = "";
        getline(f, no, ',');
        f.get();
        getline(f, studentID, ',');
        f.get();
        getline(f, name, ',');
        f.get();
        Scoreboards* scoreboard = course->findStudentByID(studentID)->findScoreboardByID(courseID);
        Scoreboards* scoreboard2 = studentList->findStudentByID(studentID)->findScoreboardByID(courseID);
        if (!scoreboard) {
            auto tmp = AddScoreBoard(studentList->findStudentByID(studentID), courseID, course);
            scoreboard = tmp.first;
            scoreboard2 = tmp.second;
        }
        f >> scoreboard->totalScore;
        scoreboard2->totalScore = scoreboard->totalScore;
        f.get();
        f >> scoreboard->midtermScore;
        scoreboard2->midtermScore = scoreboard->midtermScore;
        f.get();
        f >> scoreboard->finalScore;
        scoreboard2->finalScore = scoreboard->finalScore;
        f.get();
        f >> scoreboard->otherScore;
        scoreboard2->otherScore = scoreboard->otherScore;
        f.get();
    }
    f.close();
}
  

void addSchoolYear (AcademicYears* &year){
    string tmp;
    cout << "Enter school year: ";
    cin >> tmp;
    AcademicYears* cur_year = new AcademicYears;
    cur_year->year = tmp;
    inpClasses(cur_year->classes);
    if (!year) {
        year = cur_year;
    } else {
        cur_year->next = year;
        year = cur_year;
    }
}  

void addSemester(Semesters* &smt){
    int tmp;
    Date d1,d2;
    cout << "Enter semester: ";
    cin >> tmp;
    cout << "Start date: ";
    inpDate(d1);
    cout << "End date ";
    inpDate(d2);
    Semesters* cur_smt = new Semesters;

    cur_smt->semesterNo = tmp;
    cur_smt->startDate = d1;
    cur_smt->endDate = d2;
    cout << "Course registration session\n";
    cout << "Start date: ";
    inpDate(d1);
    cout << "End date: ";
    inpDate(d2);
    inpCoursesUser(cur_smt->courses, d1, d2);

    if (!smt){
        smt = cur_smt;
    }
    else{
        cur_smt->next = smt;
        smt = cur_smt;
    }
}

void CSVFirstYearStudent(Students* studentList, Classes* classes) {
    ifstream f;
    f.open("./Database/FirstYearStudents.txt");
    string trash;
    getline(f, trash);
    while (!f.eof()) {
        string studentID = "", no = "", firstname = "", lastname = "", gender = "", socialID = "";
        Date dob;
        getline(f, no, ',');
        f.get();
        getline(f, studentID, ',');
        f.get();
        getline(f, firstname, ',');
        f.get();
        getline(f, lastname, ',');
        f.get();
        getline(f, gender, ',');
        f.get();
        f >> dob.day >> dob.month;
        getline(f, dob.year, ',');
        f.get();
        f >> socialID;
        if (!studentList->findStudentByID(studentID)) {
            Students* student1 = new Students;
            Students* student2 = new Students;
            student1->account = new Accounts;
            student2->account = new Accounts;
            student1->studentID = student2->studentID = studentID;
            student1->account->firstname = student2->account->firstname = firstname;
            student1->account->lastname = student2->account->lastname = lastname;
            student1->account->gender = student2->account->gender = gender[0];
            student1->account->doB = student2->account->doB = dob;
            student1->account->socialID = student2->account->socialID = socialID;
            student1->next = studentList;
            studentList = student1;
            student2->next = classes->students;
            classes->students = student2;
        }
    }
    f.close();
    cout << "First year students imported successfully!\n";
}