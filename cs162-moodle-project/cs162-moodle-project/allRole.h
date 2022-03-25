#pragma once
void viewDate(Date d);
void viewClasses(Classes* cl);//view all classes
void viewAccounts(Accounts* acc);
void viewStudents(Students* studentList, Classes* classes);
void viewCourses(Courses* Course);
//
bool check_match_username_password(Accounts*& accountList, string account, string password);
void Login(Accounts*& accountList, int& status);
//
Accounts* find_Accounts(Accounts*& accountList, string account, string password);
bool check_match_username_password(Accounts*& accountList, string account, string password);
//
void Students_functions(Accounts*& current_account);
void Staffs_functions(Accounts*& current_account);
//
Classes* findClass(Students* student, Classes* classes);