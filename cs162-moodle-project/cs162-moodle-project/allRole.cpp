#include "main.h"
#include "allRole.h"
#include "finalization.h"
#include "initialization.h"
#include "lecturer.h"
#include "staff.h"
#include "student.h"

Classes* findClass(Students* student, Classes* classes) {
    while (classes) {
        Students* cur = classes->students;
        while (cur) {
            if (cur->studentID == student->studentID)
                return classes;
            cur = cur->next;
        }
        classes = classes->next;
    }
}

void viewStudents(Students* studentList, Classes* classes) {
    cout << setw(10) << "Student ID" << setw(25) << "Full name" << setw(10) << "Class ID" << endl;

    while (studentList) {
        cout << setw(10) << studentList->studentID;
        cout << setw(25);
        cout << studentList->account->lastname + " " + studentList->account->firstname;
        cout << setw(10) << findClass(studentList, classes)->classID << endl;
        studentList = studentList->next;
    }
}

void viewDate(Date d) {
	if (d.day.size() != 2) cout << 0;
	cout << d.day << '/';
	if (d.month.size() != 2) cout << 0;
	cout << d.month << '/';
	cout << d.year << '\n';
}
void viewClass(Classes* cl) {
	
}
void viewAccounts(Accounts* acc) {
	cout << "Main Profile\n";
	cout << "Username: " << acc->uName<<'\n';
	cout << "Role: ";
	switch (acc->role) {
	case 1:
		cout << "Academic Staff\n";
		break;
	case 2:
		cout << "Lecturer\n";
		break;
	case 3:
		cout << "Student\n";
		break;
	default:
		cout << "N/A\n";
	}
	cout << '\n';
	cout << "Last name: " << acc->lastname << '\n';
	cout << "First name: " << acc->firstname << '\n';
	if (acc->gender != 'O') {
		cout << "Gender: ";
		if (acc->gender == 'F') cout << "Female\n";
		else cout << "Male\n";
	}
	cout << "Day of birth: ";
	viewDate(acc->doB);
}
