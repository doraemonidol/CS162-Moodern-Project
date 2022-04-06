#pragma once

void deleteCourseByID(Courses*& courseList);
void updateCourseInfomation(Courses* courseList);
pair<Scoreboards*, Scoreboards*> AddScoreBoard(Students* student, string courseID, Courses* courses);
bool UpdateStudentScoreboard(Students* allStudentList, string studentID, string courseID, Courses* coursesList);
void courseToCSV(Courses* course);
void CSVToScoreboard(Courses* course, Students* studenList);
void addSchoolYear(AcademicYears*& year);
void addSemester(Semesters*& smt);
void CSVFirstYearStudent(Students* studentList, Classes* classes);