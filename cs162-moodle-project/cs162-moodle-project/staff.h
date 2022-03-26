#pragma once

void deleteCourseByID(Courses*& courseList);
void updateCourseInfomation(Courses* courseList);
Scoreboards* AddScoreBoard(Students* student, string courseID);
bool UpdateStudentScoreboard(Students* allStudentList, string studentID, string courseID, Courses* coursesList);
void courseToCSV(Courses* course);
void addSchoolYear(AcademicYears*& year);
void addSemester(Semesters*& smt);