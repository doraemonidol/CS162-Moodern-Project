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
		cout << "---------------\n";
	}
}
void viewScoreboards (Scoreboards* scoreb){
    while (scoreb){
        cout << "Course name: " << scoreb->courseName << endl;
        cout << "Course ID: " << scoreb->courseID << endl;
        cout << "Midterm score: " << scoreb->midtermScore << endl;
		cout << "Final score: " << scoreb->finalScore << endl;
		cout << "Total score: " << scoreb->totalScore << endl;
		cout << "Other score: " << scoreb->otherScore << endl;
        scoreb = scoreb->next;
		cout << "---------------\n";
    }
}
void viewClassScoreboards(Classes* classes, Students* studentList) {
	if (!classes) return;
	Students* student = classes->students;
	while (student) {
		double sum = 0, count = 0, allsum = 0, allcount = 0;
		Scoreboards* scoreBoards = studentList->findStudentByID(student->studentID)->scoreBoards;
		cout << student->account->firstname << ' ' << student->account->lastname << ": \n";
		while (scoreBoards) {
			//check if in the semester
			if (studentList->findStudentByID(student->studentID)->enrolledCourse->findCourseByID(scoreBoards->courseID)) {
				cout << ">>>" << scoreBoards->courseName << ": " << scoreBoards->finalScore << '\n';
				count++;
				sum += scoreBoards->finalScore;
			}
			allcount++;
			allsum += scoreBoards->finalScore;
			scoreBoards = scoreBoards->next;
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
			if (scoreBoards->courseID==course->courseID) cout << ">>>" << scoreBoards->courseName << ": " << scoreBoards->finalScore << '\n';
			scoreBoards = scoreBoards->next;
		}
		student = student->next;
	}
}
void viewClassstudent(Classes* classes) {
	if (!classes) return;
	Students* student = classes->students;
	if (!student) {
		cout << "There is no student in the class" << '\n';
	}
	else {
		viewStudents(student);
	}
}
void viewCourseStudent(Courses* courses) {
	if (!courses) return;
	Students* student = courses->studentList;
	if (!student) {
		cout << "There is no student in the course" << '\n';
	}
	else {
		viewStudents(student);
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
	cin.get();
	while (true) {
		getline(cin, cur_check);
		if (cur_check.compare(current_account->pwd) == 0) {
			cout << "Please enter the new password: ";
			getline(cin, new_pass);
			while (true) {
				cout << "Please re-enter the new password: ";
				getline(cin, check_new_pass);
				if (new_pass.compare(check_new_pass) == 0) {
					cout << "Your password have been changed";
					current_account->pwd = new_pass;
					break;
				}
				else {
					cout << "To re-enter press 1 or press 0 to exit: "; int m;
					cin >> m;
					cin.get();
					if (m == 0) {
						break;
					}
					else {
						continue;
					}
				}
			}
			break;
		}
		else {
			cout << "Wrong password, try again: ";
		}
	}
}
//
void Staffs_functions(Accounts*& current_account, AcademicYears*& yearlist, Students*& studentList, Accounts*& accountList) {
	int cur_key; bool flag = true;
	while (flag == true) {
		system("cls");
		cout << "0. To log out." << '\n';
		cout << "1. To view the current account." << '\n';
		cout << "2. To change the password." << '\n';
		cout << "3. To view student." << '\n';
		cout << "4. To add school year." << '\n';
		cout << "5. To add semester." << '\n';
		cout << "6. To update course information." << '\n';
		cout << "7. To delete course by ID." << '\n';
		cout << "8. To input course into CSV files." << '\n';
		cout << "9. To get info of the scoreboard from CSV files." << '\n';
		cout << "10. To view scoreboard." << '\n';
		cout << "11. To update scoreboard info." << '\n';
		cout << "12. To view list of classes." << '\n';
		cout << "13. To view list of courses." << '\n';
		cout << "14. To import first year students from CSV files." << '\n';
		cin >> cur_key;
		switch (cur_key)
		{
		case 0: {
			flag = false;
			break;
		}
		case 1:{
			system("cls");
			viewAccounts(current_account);
			cout << "\nPress any key to return to menu...";
			_getch();
			break;
		}
		case 2: {
			system("cls");
			Change_password(current_account);
			cout << "\nPress any key to return to menu...";
			_getch();
			break;
		}
		case 3: {
			system("cls");
			bool flag_3 = true;
			while (flag_3 == true) {
				system("cls");
				cout << "0. To exit." << '\n'; int m;
				cout << "1. To view students of the course." << '\n';
				cout << "2. To view students of the class." << '\n';
				cin >> m;
				switch (m) {
				case 0: {
					flag_3 = false;
					break;
				}
				case 1: {
					string courseID;
					cout << "Please enter course ID: ";
					cin >> courseID;
					Courses* outCourse = yearlist->semesters->courses->findCourseByID(courseID);
					if (outCourse) {
						viewCourseStudent(outCourse);
					}
					else cout << "No course found!\n";
					cout << "\nPress any key to return to continue...";
					_getch();
					break;
				}
				case 2: {
					string classID;
					cout << "Please enter class ID: ";
					cin >> classID;
					Classes* outClass = yearlist->classes->findByID(classID);
					if (outClass) {
						viewClassstudent(outClass);
					}
					else cout << "Class not found!\n";
					cout << "\nPress any key to return to continue...";
					_getch();
					break;
				}
				default:
					break;
				}

			}
			break;
		}
		case 4: {
			system("cls");
			addSchoolYear(yearlist);
			cout << "\nPress any key to return to menu...";
			_getch();
			break;
		}
		case 5: {
			system("cls");
			addSemester(yearlist->semesters);
			cout << "\nPress any key to return to menu...";
			_getch();
			break;
		}
		case 6: {
			system("cls");
			updateCourseInfomation(yearlist->semesters->courses);
			cout << "\nPress any key to return to menu...";
			_getch();
			break;
		}
		case 7: {
			system("cls");
			deleteCourseByID(yearlist->semesters->courses);
			cout << "\nPress any key to return to menu...";
			_getch();
			break;
		}
		case 8: {
			system("cls");
			string courseID;
			cout << "Please enter course ID: ";
			cin >> courseID;
			Courses* outCourse = yearlist->semesters->courses->findCourseByID(courseID);
			if (outCourse) {
				courseToCSV(outCourse);
				cout << "Course exported successfully!\n";
			}
			else cout << "No course found!\n";
			cout << "\nPress any key to return to menu...";
			_getch();
			break;
		}
		case 9: {
			system("cls");
			string courseID;
			cout << "Please enter course ID: ";
			cin >> courseID;
			Courses* outCourse = yearlist->semesters->courses->findCourseByID(courseID);
			if (outCourse) {
				CSVToScoreboard(outCourse, studentList);
				cout << "Scoreboard imported successfully!\n";
			}
			else cout << "No course found!\n";
			cout << "\nPress any key to return to menu...";
			_getch();
			break;
		}
		case 10: {
			bool flag_10 = true;
			while (flag_10 == true) {
				system("cls");
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
					string courseID;
					cout << "Please enter course ID: ";
					cin >> courseID;
					Courses* outCourse = yearlist->semesters->courses->findCourseByID(courseID);
					if (outCourse) {
						viewCourseScoreboards(outCourse);
					}
					else cout << "No course found!\n";
					cout << "\nPress any key to return to continue...";
					_getch();
					break;
				}
				case 2: {
					string classID;
					cout << "Please enter class ID: ";
					cin >> classID;
					Classes* outClass = yearlist->classes->findByID(classID);
					if (outClass) {
						viewClassScoreboards(yearlist->classes, studentList);
					}
					else cout << "Class not found!\n";
					cout << "\nPress any key to return to continue...";
					_getch();
					break;
				}
				default:
					break;
				}
			}
			cout << "\nPress any key to return to menu...";
			_getch();
			break;
		}
		case 11: {
			system("cls");
			string check_student; string check_course;
			cin.get();
			cout << "Please enter the ID of the student: "; getline(cin, check_student);
			cout << "Please enter the course of the student: "; getline(cin, check_course);
			if (!UpdateStudentScoreboard(studentList, check_student, check_course, yearlist->semesters->courses)) {
				cout << "Course or student not found!\n";
			}
			cout << "\nPress any key to return to menu...";
			_getch();
			break;
		}
		case 12: {
			system("cls");
			viewClasses(yearlist->classes);
			cout << "\nPress any key to return to menu...";
			_getch();
			break;
		}
		case 13: {
			system("cls");
			viewCourses(yearlist->semesters->courses);
			cout << "\nPress any key to return to menu...";
			_getch();
			break;
		}
		case 14: {
			system("cls");
			cout << "Please enter the class ID: ";
			string importClass;
			cin >> importClass;
			Classes* import = yearlist->classes->findByID(importClass);
			if (!import) {
				cout << "No class found!\n";
			}
			else CSVFirstYearStudent(studentList, import, accountList);
			cout << "\nPress any key to return to menu...";
			_getch();
			break;
		}
		}
	}
};
void Students_functions(Accounts*& current_account, AcademicYears*& yearlist, Students*& studentlist) {
	int cur_key; bool flag = true;
	while (flag == true) {
		system("cls");
		cout << "0. To log out." << '\n';
		cout << "1. To view the current account." << '\n';
		cout << "2. To change the password." << '\n';
		cout << "3. To enroll in a course." << '\n';
		cout << "4. To remove enrolled course." << '\n';
		cout << "5. To view enrolled courses." << '\n';
		cout << "6. To view scoreboards." << '\n';
		cin >> cur_key;
		switch (cur_key)
		{
		case 0: {
			flag = false;
			break;
		}
		case 1: {
			system("cls");
			viewAccounts(current_account);
			cout << "\nPress any key to return to menu...";
			_getch();
			break;
		}
		case 2: {
			system("cls");
			Change_password(current_account);
			cout << "\nPress any key to return to menu...";
			_getch();
			break;
		}
		case 3: {
			system("cls");
			Students* cur_student = find_Students_by_accounts(studentlist, current_account);
			studentEnrollment(cur_student, yearlist->semesters->courses);
			cout << "\nPress any key to return to menu...";
			_getch();
			break;
		}
		case 4: {
			system("cls");
			Students* cur_student_2 = find_Students_by_accounts(studentlist, current_account);
			string cur_course_ID; Date cur_day;
			cin.get();
			cout << "Please enter the course ID: "; getline(cin, cur_course_ID);
			cout << "Please enter the current day: ";  inpDate(cur_day);
			if (deleteEnrolledCourse(cur_student_2, cur_course_ID, cur_day)) {
				cout << "Course deleted successfully!\n";
			}
			else cout << "Course not found or out of registration session!\n";
			cout << "\nPress any key to return to menu...";
			_getch();
			break;
		}
		case 5: {
			system("cls");
			viewCourses(studentlist->findStudentByAccount(current_account)->enrolledCourse);
			cout << "\nPress any key to return to menu...";
			_getch();
			break;
		}
		case 6: {
			system("cls");
			viewScoreboards(studentlist->findStudentByAccount(current_account)->scoreBoards);
			cout << "\nPress any key to return to menu...";
			_getch();
			break;
		}
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
		system("cls");
		while (true) {
			if (log_input != "Y" && log_input != "y" && log_input != "N" && log_input != "n") {
				cout << "Wrong input. Please re-enter correct input" << '\n';
				cout << "LOGIN [Y/N]: ";
				getline(cin, log_input);
			}
			else {
				break;
			}
		}
		if (log_input == "N" || log_input == "n") {
			cout << "Exist." << '\n';
			break;
		}
		if (log_input == "Y" || log_input == "y") {
			cout << "Username: "; 
			cin >> username;
            cout << "Password: ";
			cin >> password;
            cur_account = find_Accounts(accountList, username, password);
			if (cur_account) {
				status = cur_account->role;
				switch (status)
				{
				case 0: {
					cout << "LOGIN SUCCESSFULLY" << '\n';
					Students_functions(cur_account, yearlist, studentlist);
					break;
				}
				case 1: {
					cout << "LOGIN SUCCESSFULLY" << '\n';
					Staffs_functions(cur_account, yearlist, studentlist, accountList);
					break;
				}
				default: {
					break;
				}
				}
				system("cls");
				cout << "LOGIN [Y/N]: ";
				cin >> log_input;
			}
			else {
				cout << "Either password or username is wrong" << '\n';
				cout << "Press Y to re_login or N to stop: "; 
				cin >> re_log;
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
}
//