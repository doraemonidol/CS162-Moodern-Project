#pragma once
void viewDate(Date d);
void viewClass(Classes* cl);//view all classes
void viewAccounts(Accounts* acc);
void viewStudents(Students* studentList, Classes* classes);

Classes* findClass(Students* student, Classes* classes);