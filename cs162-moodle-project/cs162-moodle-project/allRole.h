#pragma once
void viewDate(Date d);
void viewClasses(Classes* cl);//view all classes
void viewAccounts(Accounts* acc);
void viewStudents(Students* studentList);
void viewCourses(Courses* Course);

void viewClassScoreboards(Classes* classes);
void viewCourseScoreboards(Courses* course);

void Login(Accounts*& accountList, int& status, AcademicYears*& yearlist, Students*& studentlist);
//
void Change_password(Accounts*& current_account);
Accounts* find_Accounts(Accounts*& accountList, string account, string password);
Students* find_Students_by_accounts(Students*& studentList, Accounts*& current_account);
//
void Students_functions(Accounts*& current_account, AcademicYears*& yearlist, Students*& studentlist);
void Staffs_functions(Accounts*& current_account, AcademicYears*& yearlist, Students*& studentList);
//
Classes* findClass(Students* student, Classes* classes);