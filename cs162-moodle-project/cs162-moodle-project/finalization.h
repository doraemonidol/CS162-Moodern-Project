#pragma once
void outDate(Date& d);
void outAccount(Accounts*& account);
void outScoreboards(Scoreboards*& scoreBoard);
void outStaffs(Staffs*& staffList);
void outYears(AcademicYears*& yearList);
void outCourses(Courses*& courseList);
void outStudents(Students*& studentList);
void outSemester(Semesters*& semesterList);

void deallocateCourses(Courses*& courseList);
void deallocateSemester(Semesters*& semesterList);