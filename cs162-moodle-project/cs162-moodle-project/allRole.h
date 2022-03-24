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
Classes* findClass(Students* student, Classes* classes);