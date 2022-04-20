#pragma once
void inpDate(Date& d);
void inpAccount(Accounts*& account);
void inpScoreboards(Scoreboards*& scoreBoard);
void inpStaffs(Staffs*& staffList, Accounts*& accountList);
void inpYears(AcademicYears*& yearList);
void inpCourses(Courses*& courseList);
void inpCoursesUser(Courses*& courseList, Date startDate, Date endDate);
void inpStudents(Students*& studentList, Accounts*& accountList, Courses* courseList, Classes* classList);
void inpSemester(Semesters*& semesterList);
void inpClasses(Classes*& classList);

void initData(AcademicYears*& year, Students*& student, Staffs*& staff, Accounts*& account);