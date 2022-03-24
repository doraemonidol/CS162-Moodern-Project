#pragma once
void inpDate(Date& d);
void inpAccount(Accounts*& account);
void inpScoreboards(Scoreboards*& scoreBoard);
void inpStaffs(Staffs*& staffList, Accounts*& accountList);
void inpYears(AcademicYears*& yearList);
void inpCourses(Courses*& courseList, Date startDate, Date endDate);
void inpStudents(Students*& studentList, Accounts*& accountList);
void inpSemester(Semesters*& semesterList);
void inpClasses(Classes*& classList);