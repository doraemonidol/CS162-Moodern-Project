#include "main.h"
#include "allRole.h"
#include "finalization.h"
#include "initialization.h"
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
	return nullptr;
}

void viewStudents(Students* studentList) {
    cout << setw(10) << "Student ID" << setw(25) << "Full name" << setw(10) << "Class ID" << endl;

    while (studentList) {
        cout << setw(10) << studentList->studentID;
        cout << setw(25);
        cout << studentList->account->lastname + " " + studentList->account->firstname;
        cout << setw(10) << studentList->classID << endl;
        studentList = studentList->next;
    }
}

void viewDate(Date d) {
	if (d.day.size() != 2) cout << 0;
	cout << d.day << '/';
	if (d.month.size() != 2) cout << 0;
	cout << d.month << '/';
	cout << d.year << ' ';
}
void viewClasses(Classes* classes) {
	while (classes) {
		cout << classes->classID << '\n';
		classes = classes->next;
	}
}
void viewAccounts(Accounts* acc) {
	cout << "Main Profile\n";
	cout << "Username: " << acc->uName<<'\n';
	cout << "Role: ";
	switch (acc->role) {
	case 1:
		cout << ">>> Academic Staff <<<\n";
		break;
	case 0:
		cout << ">>> Student <<<\n";
		break;
	default:
		cout << "N/A\n";
	}
	cout << '\n'
         << "Last name: " << acc->lastname << '\n'
         << "First name: " << acc->firstname << '\n'
         << "Social ID: " << acc->socialID << '\n';
	if (acc->gender != 'O') {
		cout << "Gender: ";
		if (acc->gender == 'F') cout << "Female\n";
		else cout << "Male\n";
	}
	cout << "Day of birth: ";
	viewDate(acc->doB);
}

//
void viewCourses(Courses* Course){
	while (Course){
		cout << "Course ID: " << Course->courseID << '\n';
		cout << "Course name: " << Course->courseName << '\n';
        cout << "Number of credits: " << Course->credits << '\n';
        cout << "Current enrolled students: " << Course->numStudents << "/" << Course->maxStudents << '\n';
 		cout << "Lecturer: " << Course->lecturerName << '\n';
        cout << "Room: " << Course->room << '\n';
        cout << "Schedule: " << Course->day1 << " (" << Course->session1 << ") and " << Course->day2 << " (" << Course->session2 << ")\n";
		Course = Course->next;
	}
}
void viewScoreboards (Scoreboards* scoreb){
    while (scoreb){
        cout << "Course name: " << scoreb->courseName << endl;
        cout << "Course ID: " << scoreb->courseID << endl;
        cout << "Midterm score: " << scoreb->midtermScore << endl;
		cout << "Final score: " << scoreb->finalScore << endl;
		cout << "Lab score: " << scoreb->labScore << endl;
		cout << "Bonus score: " << scoreb->bonusScore << endl;
        scoreb = scoreb->next;
    }
}
void viewClassScoreboards(Classes* classes) {
	if (!classes) return;
	Students* student = classes->students;
	while (student) {
		double sum = 0, count = 0, allsum = 0, allcount = 0;
		Scoreboards* scoreBoards = student->scoreBoards;
		cout << student->account->firstname << ' ' << student->account->lastname << ": \n";
		while (scoreBoards) {
			//check if in the semester
			if (student->enrolledCourse->findCourseByID(scoreBoards->courseID)) {
				cout << ">>>" << scoreBoards->courseName << ": " << scoreBoards->finalScore << '\n';
				count++;
				sum += scoreBoards->finalScore;
			}
			allcount++;
			allsum += scoreBoards->finalScore;
		}
		cout.precision(2);
		if (count!=0) cout << "   Semester's GPA: " << (double)(sum / count) << '\n';
		else cout << "   Semester's GPA: " << "N/A" << '\n';
		if (allcount!=0) cout << "   Overall GPA: " << (double)(allsum / allcount) << '\n';
		else cout << "   Overall GPA: " << "N/A" << '\n';
		cout.precision(6);
		student = student->next;
	}
}
void viewCourseScoreboards(Courses* course) {
	Students* student = course->studentList;
	while (student) {
		Scoreboards* scoreBoards = student->scoreBoards;
		cout << student->account->firstname << ' ' << student->account->lastname << ": \n";
		while (scoreBoards) {
			cout << ">>>" << scoreBoards->courseName << ": " << scoreBoards->finalScore << '\n';
			scoreBoards = scoreBoards->next;
		}
		student = student->next;
	}
}
//

Accounts* find_Accounts(Accounts*& accountList, string account, string password) {
	Accounts* cur = accountList;
	while (cur) {
        if ((account.compare(cur->uName) == 0) && (password.compare(cur->pwd) == 0)) {
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
Students* find_Students_by_accounts(Students*& studentList, Accounts*& current_account) {
	Students* cur = studentList;
	while (cur) {
		if (cur->account->socialID == current_account->socialID) {
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}
//

void Change_password(Accounts*& current_account) {
	string cur_check; string new_pass; cout << "Please re-enter the password: "; string check_new_pass;
	while (true) {
		getline(cin, cur_check);
		if (cur_check.compare(current_account->pwd) == 0) {
			cout << "Please enter the new password: "; getline(cin, new_pass);
			while (true) {
				cout << "Please re-enter the new password: "; getline(cin, check_new_pass);
				if (new_pass.compare(check_new_pass) == 0) {
					cout << "Your password have been changed";
					current_account->pwd = new_pass;
					break;
				}
				else {
					cout << "To re-enter press 1 or press 0 to exit: "; int m;
					cin >> m;
					if (m == 0) {
						break;
					}
					else {
						continue;
					}
				}
			}
		}
	}
}
//
void Staffs_functions(Accounts*& current_account, AcademicYears*& yearlist) {
	cout << "0. To exit the program." << '\n';
	cout << "1. To view the current account." << '\n';
	cout << "2. To change the password." << '\n';
	cout << "3. " << '\n';
	cout << "4. To add school year." << '\n';
	cout << "5. To add semester." << '\n';
	cout << "6. To update course information." << '\n';
	cout << "7. To delete course by ID." << '\n';
	cout << "8. To input course into CSV files." << '\n';
	cout << "9. To get info of the scoreboard from CSV files." << '\n';
	cout << "10. To view scoreboard." << '\n';
	cout << "11. To update scoreboard info." << '\n';
	int cur_key; bool flag = true;
	while (flag == true) {
		cin >> cur_key;
		switch (cur_key)
		{
		case 0: {
			flag = false;
		}
		case 1:{
			viewAccounts(current_account);
			break;
		}
		case 2: {
			Change_password(current_account);
			break;
		}
		case 3: {
			break;
		}
		case 4: {
			addSchoolYear(yearlist);
			break;
		}
		case 5: {
			addSemester(yearlist->semesters);
			break;
		}
		case 6: {
			updateCourseInfomation(yearlist->semesters->courses);
			break;
		}
		case 7: {
			deleteCourseByID(yearlist->semesters->courses);
			break;
		}
		case 8: {
			courseToCSV(yearlist->semesters->courses);
			break;
		}
		case 9: {
			CSVToScoreboard(yearlist->semesters->courses);
			break;
		}
		case 10: {
			bool flag_10 = true;
			while (flag_10 == true) {
				cout << "0. To exit." << '\n'; int m;
				cout << "1. To view scoreboard of the course." << '\n';
				cout << "2. To view scoreboard of the class." << '\n';
				cin >> m;
				switch (m){
				case 0: {
					flag_10 = false;
					break;
				}
				case 1: {
					viewCourseScoreboards(yearlist->semesters->courses);
					break;
				}
				case 2: {
					viewClassScoreboards(yearlist->classes);
					break;
				}
				}

			}
			break;
		}
		case 11: {
				string check_student; string check_course;
				cout << "Please enter the ID of the student: "; getline(cin, check_student);
				cout << "Please enter the course of the student: "; getline(cin, check_course);
				UpdateStudentScoreboard(yearlist->classes->students, check_student, check_course, yearlist->semesters->courses);
				break;
			}
		}
	}
};
void Students_functions(Accounts*& current_account, AcademicYears*& yearlist, Students*& studentlist) {
	cout << "0. To exit the program." << '\n';
	cout << "1. To view the current account." << '\n';
	cout << "2. To change the password." << '\n';
	cout << "3. To enroll in a course." << '\n';
	int cur_key; bool flag = true;
	while (flag == true) {
		cin >> cur_key;
		switch (cur_key)
		{
		case 0: {
			flag = false;
		}
		case 1: {
			viewAccounts(current_account);
			break;
		}
		case 2: {
			Change_password(current_account);
			break;
		}
		case 3: {
			Students* cur_student = find_Students_by_accounts(studentlist, current_account);
			studentEnrollment(cur_student, yearlist->semesters->courses);
			break;
		}
		case 4: {
		}
		default:
			break;
		}
	}
}
//
void Login(Accounts*& accountList, int& status, AcademicYears*& yearlist, Students*& studentlist) {
	status = -1;
	string username, password, log_input, re_log;
	Accounts* cur_account = NULL;
	cout << "LOGIN [Y/N]: "; getline(cin, log_input);
	while (true) {
		if (log_input == "N" || log_input == "n") {
			break;
		}
		if (log_input == "Y" || log_input == "y") {
			cout << "Username: "; getline(cin, username);
            cout << "Password: ";
            getline(cin, password);
            cur_account = find_Accounts(accountList, username, password);
			if (cur_account) {
				cout << "LOGIN SUCCESSFULLY" <<'\n';
				status = cur_account->role;
				break;
			}
			else {
				cout << "Either password or username is wrong" << '\n';
				cout << "Press Y to re_login or N to stop: "; getline(cin, re_log);
				if (re_log == "Y" || re_log == "y") {
					continue;
				}
				else {
					if (re_log == "N" || re_log == "n") {
						break;
					}
				}
			}
		}
	}
	switch (status)
	{
	case 0: {
		Students_functions(cur_account, yearlist, studentlist);
		break;
	}
	case 1: {
		Staffs_functions(cur_account, yearlist);
		break;
	}
	default: {
		break;
	}
	}
}
//