#pragma once
void viewDate(Date d);
void viewClasses(Classes* cl);//view all classes
void viewAccounts(Accounts* acc);
void viewStudents(Students* studentList, Classes* classes);
void viewCourses(Courses* Course);

Classes* findClass(Students* student, Classes* classes);