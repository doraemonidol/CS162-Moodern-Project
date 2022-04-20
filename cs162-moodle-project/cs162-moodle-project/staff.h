#pragma once

void deleteCourseByID(Courses*& courseList, string courseID, Students* student);
void updateCourseInfomation(Courses* courseList);
Scoreboards* AddScoreBoard(Students* student, string courseID);
bool UpdateStudentScoreboard(Students* allStudentList, string studentID, string courseID, Courses* coursesList);
void courseToCSV(Courses* course, string filename);
void CSVToScoreboard(Courses* course, Students* student, string filename);
void addSchoolYear(AcademicYears*& year);
void addSemester(Semesters*& smt);