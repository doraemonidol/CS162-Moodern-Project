#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include "main.h"
#include "allRole.h"
#include "finalization.h"
#include "initialization.h"
#include "staff.h"
#include "student.h"
#include "loginScreen.h"
#include "inputClassCourse.h"

namespace CS162MoodleProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace std;
    using namespace System::Collections::Generic;
	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class functionScreen : public System::Windows::Forms::Form {
            public:
                bool Exit1 = false;
                AcademicYears* yearList2 = nullptr;
                Students* studentList2 = nullptr;
                Staffs* staffList2 = nullptr;
                Accounts* accountList2 = nullptr;
                Courses* curCourseUpdate = nullptr;
                Students* currentStudent = nullptr;
                int courseRegisCount = 0;

            private:
                ref class courseMark : public System::Object {
                public:
                    Scoreboards* mark;
                };
            private:
                ref class scoreBoardU : public System::Object {
                public:
                    String ^ classID;

                public:
                    String ^ stdID;

                public:
                    List<courseMark ^> ^ course;
                };

            private:
                System::Windows::Forms::ListView ^ viewStudentUI;

            private:
                System::Windows::Forms::ColumnHeader ^ viewStudentNo;

            private:
                System::Windows::Forms::ColumnHeader ^ viewStudentID;

            private:
                System::Windows::Forms::ColumnHeader ^ viewStudentLName;

            private:
                System::Windows::Forms::ColumnHeader ^ viewStudentFName;

            private:
                System::Windows::Forms::ColumnHeader ^ viewStudentClassID;

            private:
                System::Windows::Forms::ListView ^ viewCoSBUI;

            private:
                System::Windows::Forms::ColumnHeader ^ viewCoSBNo;

            private:
                System::Windows::Forms::ColumnHeader ^ viewCoSBStudenID;

            private:
                System::Windows::Forms::ColumnHeader ^ viewCoSBStudentName;

            private:
                System::Windows::Forms::ColumnHeader ^ viewCoSBTotal;

            private:
                System::Windows::Forms::ColumnHeader ^ viewCoSBFinal;

            private:
                System::Windows::Forms::ColumnHeader ^ viewCoSBMid;

            private:
                System::Windows::Forms::ColumnHeader ^ viewCoSBOther;

            private:
                System::Windows::Forms::ColumnHeader ^ viewCOSBClass;

            private:
                System::Windows::Forms::ColumnHeader ^ viewStudentSocialID;

            private:
                System::Windows::Forms::ColumnHeader ^ viewStudentGender;

            private:
                System::Windows::Forms::ColumnHeader ^ viewStudentdob;

            private:
                System::Windows::Forms::ListView ^ viewClSBUI;

            private:
                System::Windows::Forms::ColumnHeader ^ viewClSBNo;

            private:
                System::Windows::Forms::ColumnHeader ^ viewClSBStudentID;

            private:
                System::Windows::Forms::ColumnHeader ^ viewClSBStudentName;

            private:
                System::Windows::Forms::ColumnHeader ^ viewClSBCourseID;

            private:
                System::Windows::Forms::ColumnHeader ^ viewClSBTotalMark;

            private:
                System::Windows::Forms::ColumnHeader ^ viewClSBGPA;

            private:
                System::Windows::Forms::ColumnHeader ^ viewClSBOGPA;

            private:
                System::Windows::Forms::ListView ^ viewClassUI;

            private:
                System::Windows::Forms::ColumnHeader ^ viewClassUINo;

            private:
                System::Windows::Forms::ColumnHeader ^ viewClassUIYear;

            private:
                System::Windows::Forms::ColumnHeader ^ viewClassUIClID;

            private:
                System::Windows::Forms::Panel ^ courseUpdateUI;

            private:
                System::Windows::Forms::Panel ^ updateCoursePanel;

            private:
                System::Windows::Forms::ComboBox ^ updateCourseD2;

            private:
                System::Windows::Forms::ComboBox ^ updateCourseS2;

            private:
                System::Windows::Forms::ComboBox ^ updateCourseD1;

            private:
                System::Windows::Forms::ComboBox ^ updateCourseS1;

            private:
                System::Windows::Forms::Label ^ labelWorkspaceName;

            private:
                System::Windows::Forms::TextBox ^ updateCourseName;

            private:
                System::Windows::Forms::Button ^ btnSave;

            private:
                System::Windows::Forms::Button ^ btRevertChanges;

            private:
                System::Windows::Forms::Label ^ label1;

            private:
                System::Windows::Forms::TextBox ^ updateCourseCre;

            private:
                System::Windows::Forms::Label ^ label2;

            private:
                System::Windows::Forms::Label ^ label10;

            private:
                System::Windows::Forms::TextBox ^ updateCourseMaxSt;

            private:
                System::Windows::Forms::Label ^ label3;

            private:
                System::Windows::Forms::TextBox ^ updateCourseLecturer;

            private:
                System::Windows::Forms::Label ^ label4;

            private:
                System::Windows::Forms::TextBox ^ updateCourseRoom;

            private:
                System::Windows::Forms::Label ^ label5;

            private:
                System::Windows::Forms::Label ^ label6;

            private:
                System::Windows::Forms::DateTimePicker ^ updateCourseRegisStart;

            private:
                System::Windows::Forms::Label ^ label7;

            private:
                System::Windows::Forms::Label ^ label8;

            private:
                System::Windows::Forms::Label ^ label9;

            private:
                System::Windows::Forms::DateTimePicker ^ updateCourseRegisEnd;

            private:
                System::Windows::Forms::Label ^ labelCourseList;

            private:
                System::Windows::Forms::Button ^ btDelCourse;

            private:
                System::Windows::Forms::ListBox ^ listCourses;

            private:
                System::Windows::Forms::Panel ^ panel1;

            private:
                System::Windows::Forms::Panel ^ panelSchoolYear;

            private:
                System::Windows::Forms::Label ^ label13;

            private:
                System::Windows::Forms::TextBox ^ classInput;

            private:
                System::Windows::Forms::Label ^ label11;

            private:
                System::Windows::Forms::Button ^ btnAddClass;

            private:
                System::Windows::Forms::TreeView ^ treeViewClass;

            private:
                System::Windows::Forms::Panel ^ panelAddStudent;

            private:
                System::Windows::Forms::ComboBox ^ gender;

            private:
                System::Windows::Forms::Label ^ label14;

            private:
                System::Windows::Forms::TextBox ^ studentID;

            private:
                System::Windows::Forms::Button ^ btnAddStd;

            private:
                System::Windows::Forms::Button ^ btnCancel;

            private:
                System::Windows::Forms::Label ^ label15;

            private:
                System::Windows::Forms::TextBox ^ fName;

            private:
                System::Windows::Forms::Label ^ label16;

            private:
                System::Windows::Forms::TextBox ^ lName;

            private:
                System::Windows::Forms::Label ^ label18;

            private:
                System::Windows::Forms::Label ^ label19;

            private:
                System::Windows::Forms::TextBox ^ socialID;

            private:
                System::Windows::Forms::DateTimePicker ^ doB;

            private:
                System::Windows::Forms::Label ^ label22;

            private:
                System::Windows::Forms::Panel ^ panel4;

            private:
                System::Windows::Forms::Panel ^ panel3;

            private:
                System::Windows::Forms::TextBox ^ endYear;

            private:
                System::Windows::Forms::Label ^ label12;

            private:
                System::Windows::Forms::TextBox ^ startYear;

            private:
                System::Windows::Forms::Button ^ btnFinish;

            private:
                System::Windows::Forms::Button ^ btnCancelAll;

            private:
                System::Windows::Forms::Button ^ btnFromFile;

            private:
                System::Windows::Forms::Panel ^ newSemesterUI;

            private:


            private:


            private:
                System::Windows::Forms::Label ^ label17;

            private:
                System::Windows::Forms::Label ^ label20;

            private:
                System::Windows::Forms::TextBox ^ newSem;

            private:
                System::Windows::Forms::Label ^ label21;

            private:
                System::Windows::Forms::ComboBox ^ newSemYear;

            private:
                System::Windows::Forms::ListBox ^ inputedCourseList;

            private:
                System::Windows::Forms::Panel ^ panel8;

            private:
                System::Windows::Forms::Label ^ label23;

            private:
                System::Windows::Forms::TextBox ^ nsCourseID;

            private:
                System::Windows::Forms::Button ^ nsBtnDone;

            private:
                System::Windows::Forms::Button ^ nsBtnAdd;

            private:
                System::Windows::Forms::Button ^ nsBtnCancel;

            private:
                System::Windows::Forms::ComboBox ^ nsDay2;

            private:
                System::Windows::Forms::ComboBox ^ nsSession2;

            private:
                System::Windows::Forms::ComboBox ^ nsDay1;

            private:
                System::Windows::Forms::ComboBox ^ nsSession1;

            private:
                System::Windows::Forms::Label ^ label29;

            private:
                System::Windows::Forms::TextBox ^ nsCourseName;

            private:
                System::Windows::Forms::Label ^ label30;

            private:
                System::Windows::Forms::TextBox ^ nsCredit;

            private:
                System::Windows::Forms::Label ^ label31;

            private:
                System::Windows::Forms::Label ^ label32;

            private:
                System::Windows::Forms::TextBox ^ nsMaxStd;

            private:
                System::Windows::Forms::Label ^ label33;

            private:
                System::Windows::Forms::TextBox ^ nsLecturerName;

            private:
                System::Windows::Forms::Label ^ label34;

            private:
                System::Windows::Forms::TextBox ^ nsRoom;

            private:
                System::Windows::Forms::Label ^ label35;

            private:
                System::Windows::Forms::Label ^ label36;

            private:
                System::Windows::Forms::DateTimePicker ^ semStartDate;

            private:
                System::Windows::Forms::DateTimePicker ^ semEndDate;

            private:
                System::Windows::Forms::DateTimePicker ^ nsRegisStart;

            private:
                System::Windows::Forms::Label ^ label37;

            private:
                System::Windows::Forms::Label ^ label38;

            private:
                System::Windows::Forms::Label ^ label39;

            private:
                System::Windows::Forms::DateTimePicker ^ nsRegisEnd;

            private:
                System::Windows::Forms::Panel ^ updateStdRes;

            private:
                System::Windows::Forms::TreeView ^ treeViewsbU;

            private:
                System::Windows::Forms::Panel ^ panel6;

            private:
                System::Windows::Forms::TextBox ^ sbUStdID;

            private:
                System::Windows::Forms::Label ^ label26;

            private:
                System::Windows::Forms::Button ^ sbUSearch;

            private:
                System::Windows::Forms::Panel ^ sbUCoursePan;

            private:
                System::Windows::Forms::Label ^ label27;

            private:
                System::Windows::Forms::TextBox ^ midMark;

            private:
                System::Windows::Forms::Button ^ sbUbtnSave;

            private:
                System::Windows::Forms::Label ^ label28;

            private:
                System::Windows::Forms::TextBox ^ finMark;

            private:
                System::Windows::Forms::Label ^ label40;

            private:
                System::Windows::Forms::TextBox ^ oMark;

            private:
                System::Windows::Forms::Label ^ label42;

            private:
                System::Windows::Forms::TextBox ^ totMark;

            private:
                System::Windows::Forms::Label ^ label24;

            private:
                System::Windows::Forms::ComboBox ^ sbUCourse;

            private:
                System::Windows::Forms::Panel ^ courseExStd;

            private:
                System::Windows::Forms::Label ^ label25;

            private:
                System::Windows::Forms::ComboBox ^ coExStdInput;

            private:
                System::Windows::Forms::Button ^ coExStdBtn;

            private:
                System::Windows::Forms::Panel ^ imSBpanel;

            private:
                System::Windows::Forms::Panel ^ panel5;

            private:
                System::Windows::Forms::TextBox ^ imSBFileInput;

            private:
                System::Windows::Forms::Button ^ imSBbtn;

            private:
                System::Windows::Forms::Label ^ label41;

            private:
                System::Windows::Forms::ComboBox ^ imSBCourse;

            private:
                System::Windows::Forms::Button ^ imSBExBtn;

            private:
                System::Windows::Forms::Panel ^ profilePanel;

            private:
                System::Windows::Forms::TextBox ^ profileName;

            private:
                System::Windows::Forms::Label ^ label45;

            private:
                System::Windows::Forms::Button ^ button3;

            private:


            private:
                System::Windows::Forms::TextBox ^ profileGender;

            private:
                System::Windows::Forms::Label ^ label44;

            private:
                System::Windows::Forms::Label ^ label46;

            private:
                System::Windows::Forms::TextBox ^ profileSocialID;

            private:
                System::Windows::Forms::Label ^ label43;

            private:
                System::Windows::Forms::Label ^ label57;

            private:
                System::Windows::Forms::TextBox ^ profileDob;

            private:
                System::Windows::Forms::Panel ^ changePassPanel;

            private:
                System::Windows::Forms::Button ^ changePassBtn;

            private:
                System::Windows::Forms::Button ^ changePassCancel;

            private:
                System::Windows::Forms::Panel ^ panel10;

            private:
                System::Windows::Forms::TextBox ^ newPass2;

            private:
                System::Windows::Forms::Label ^ label49;

            private:
                System::Windows::Forms::Panel ^ panel7;

            private:
                System::Windows::Forms::Panel ^ panel9;

            private:
                System::Windows::Forms::TextBox ^ newPass1;

            private:
                System::Windows::Forms::Label ^ label47;

            private:
                System::Windows::Forms::TextBox ^ oldPass;

            private:
                System::Windows::Forms::Label ^ label48;

            private:
                System::Windows::Forms::ListView ^ stdViewCourseUI;

            private:
                System::Windows::Forms::ColumnHeader ^ columnHeader1;

            private:
                System::Windows::Forms::ColumnHeader ^ columnHeader2;

            private:
                System::Windows::Forms::ColumnHeader ^ columnHeader3;

            private:
                System::Windows::Forms::ColumnHeader ^ columnHeader4;

            private:
                System::Windows::Forms::ColumnHeader ^ columnHeader5;

            private:
                System::Windows::Forms::ColumnHeader ^ columnHeader6;

            private:
                System::Windows::Forms::ColumnHeader ^ columnHeader7;

            private:
                System::Windows::Forms::ColumnHeader ^ columnHeader8;

            private:
                System::Windows::Forms::ColumnHeader ^ columnHeader9;

            private:
                System::Windows::Forms::ListView ^ stdViewSBUI;

            private:
                System::Windows::Forms::ColumnHeader ^ columnHeader10;

            private:
                System::Windows::Forms::ColumnHeader ^ columnHeader11;

            private:
                System::Windows::Forms::ColumnHeader ^ columnHeader12;

            private:
                System::Windows::Forms::ColumnHeader ^ columnHeader14;

            private:
                System::Windows::Forms::ColumnHeader ^ columnHeader15;

            private:
                System::Windows::Forms::ColumnHeader ^ columnHeader16;

            private:
                System::Windows::Forms::ColumnHeader ^ columnHeader17;

            private:
                System::Windows::Forms::Panel ^ courseRegisPanel;

            private:
                System::Windows::Forms::ListBox ^ listCourseRegis;

            private:
                System::Windows::Forms::Panel ^ courseRegisInfo;

            private:
                System::Windows::Forms::Label ^ label50;

            private:
                System::Windows::Forms::TextBox ^ courseRegisID;

            private:
                System::Windows::Forms::Button ^ courseRegisPanelBtn;

            private:
                System::Windows::Forms::Button ^ courseRegisCancel;

            private:
                System::Windows::Forms::Label ^ label51;

            private:
                System::Windows::Forms::TextBox ^ courseRegisName;

            private:
                System::Windows::Forms::Label ^ label52;

            private:
                System::Windows::Forms::TextBox ^ courseRegisCre;

            private:
                System::Windows::Forms::Label ^ label53;

            private:
                System::Windows::Forms::Label ^ label54;

            private:
                System::Windows::Forms::TextBox ^ courseRegisStd;

            private:
                System::Windows::Forms::Label ^ label55;

            private:
                System::Windows::Forms::TextBox ^ courseRegisLecturer;

            private:
                System::Windows::Forms::Label ^ label56;

            private:
                System::Windows::Forms::TextBox ^ courseRegisRoom;

            private:
                System::Windows::Forms::Label ^ label58;

            private:
                System::Windows::Forms::Label ^ label59;

            private:
                System::Windows::Forms::Label ^ label60;

            private:
                System::Windows::Forms::Label ^ label61;

            private:
                System::Windows::Forms::Label ^ label62;

            private:
                System::Windows::Forms::TextBox ^ courseRegisStart;

            private:
                System::Windows::Forms::TextBox ^ courseRegisS1;

            private:
                System::Windows::Forms::TextBox ^ courseRegisEnd;

            private:
                System::Windows::Forms::TextBox ^ courseRegisD1;

            private:
                System::Windows::Forms::TextBox ^ courseRegisS2;

            private:
                System::Windows::Forms::TextBox ^ courseRegisD2;

            private:


            private:


            private:
                System::Windows::Forms::Button ^ courseUnRegisPanelBtn;

            private:


            private:


            private:

                Accounts* curAccount;
	public:
		functionScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

        void setRole(int role)
        {
            if (role == 1) {
                staffFunctionPanel->Show();
                studentFunctionPanel->Hide();
            } else {
                staffFunctionPanel->Hide();
                studentFunctionPanel->Show();
            }
        }

        void getData(AcademicYears* year, Students* student, Staffs* staff, Accounts* account, Accounts* cur_account)
        {
            yearList2 = year;
            studentList2 = student;
            staffList2 = staff;
            accountList2 = account;
            curAccount = cur_account;
        }

        void returnData(AcademicYears*& year, Students*& student, Staffs*& staff, Accounts*& account)
        {
            year = yearList2;
            student = studentList2;
            staff = staffList2;
            account = accountList2;
        }
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~functionScreen()
		{
			if (components)
			{
				delete components;
			}
		}

            private:
                System::Windows::Forms::Label ^ greetText;

            private:
                System::Windows::Forms::Button ^ btMinimise;

            private:
                System::Windows::Forms::Button ^ btCloseApp;

            private:
                System::Windows::Forms::Button ^ btMinimiseBG;

            private:
                System::Windows::Forms::Button ^ btCloseBG;

            private:
                System::Windows::Forms::FlowLayoutPanel ^ allRolePanel;

            private:
                System::Windows::Forms::Button ^ showProfile;

            private:
                System::Windows::Forms::Button ^ changePassword;

            private:
                System::Windows::Forms::Button ^ logoutBTN;

            private:
                System::Windows::Forms::Timer ^ timer1;

            private:
                System::Windows::Forms::FlowLayoutPanel ^ staffFunctionPanel;

            private:
                System::Windows::Forms::Button ^ newbtn;

            private:
                System::Windows::Forms::Button ^ viewbtn;

            private:
                System::Windows::Forms::Label ^ time;

            private:
                System::Windows::Forms::Label ^ date;

            private:
                System::Windows::Forms::Timer ^ timeController;

            private:
                System::Windows::Forms::Button ^ updateCoursebtn;

            private:
                System::Windows::Forms::Button ^ btncourseExStd;

            private:
                System::Windows::Forms::Button ^ importSB;

            private:
                System::Windows::Forms::Button ^ btnUpdateRes;

            private:
                System::Windows::Forms::Button ^ newSchoolYear;

            private:
                System::Windows::Forms::Button ^ newSemester;

            private:
                System::Windows::Forms::Button ^ viewCourses;

            private:
                System::Windows::Forms::Button ^ viewScoreboard;

            private:
                System::Windows::Forms::Button ^ viewStudentList;

            private:
                System::Windows::Forms::Button ^ viewClasses;

            private:
                System::Windows::Forms::FlowLayoutPanel ^ studentFunctionPanel;

            private:
                System::Windows::Forms::Button ^ courseRegistrationbtn;

            private:
                System::Windows::Forms::Button ^ studentView;

            private:
                System::Windows::Forms::Button ^ studentViewCourse;

            private:
                System::Windows::Forms::Button ^ studentViewScoreboard;

            private:
                System::Windows::Forms::ListView ^ viewCourseUI;

            private:
                System::Windows::Forms::ColumnHeader ^ enrolledCourseNo;

            private:
                System::Windows::Forms::ColumnHeader ^ enrolledCourseID;

            private:
                System::Windows::Forms::ColumnHeader ^ enrolledCourseName;

            private:
                System::Windows::Forms::ColumnHeader ^ enrolledCourseCre;

            private:
                System::Windows::Forms::ColumnHeader ^ enrolledCourseStudentNum;

            private:
                System::Windows::Forms::ColumnHeader ^ enrolledCourseD1;

            private:
                System::Windows::Forms::ColumnHeader ^ enrolledCourseD2;

            private:
                System::Windows::Forms::ColumnHeader ^ enrolledCourseRoom;

            private:
                System::Windows::Forms::ColumnHeader ^ enrolledCourseLecturer;

            private:
                System::ComponentModel::IContainer ^ components;

            protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>

        private:
            int selectedIndex = -1;

        private:
            int selectedItemIndex = -1;

        private:
            List<String^>^ coursesToUpdate;

        private:
            List<String ^> ^ classIDList;

        private:
            List<List<studentClass ^> ^> ^ stdClassList;

        private:
            List<List<scoreBoardU ^> ^> ^ scoreBoardUList;
            
        private:
            List<courseClass ^>^ inputedCourse;
        private:
            int classIDIndex = -1;
            int studentIndex = -1;
            
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
                    this->components = (gcnew System::ComponentModel::Container());
                    System::ComponentModel::ComponentResourceManager ^ resources = (gcnew System::ComponentModel::ComponentResourceManager(functionScreen::typeid));
                    System::Windows::Forms::ListViewGroup ^ listViewGroup1 = (gcnew System::Windows::Forms::ListViewGroup(L"aaaa", System::Windows::Forms::HorizontalAlignment::Right));
                    System::Windows::Forms::ListViewGroup ^ listViewGroup2 = (gcnew System::Windows::Forms::ListViewGroup(L"aaaa", System::Windows::Forms::HorizontalAlignment::Right));
                    System::Windows::Forms::ListViewGroup ^ listViewGroup3 = (gcnew System::Windows::Forms::ListViewGroup(L"aaaa", System::Windows::Forms::HorizontalAlignment::Right));
                    System::Windows::Forms::ListViewGroup ^ listViewGroup4 = (gcnew System::Windows::Forms::ListViewGroup(L"Overall Gpa", System::Windows::Forms::HorizontalAlignment::Center));
                    System::Windows::Forms::ListViewGroup ^ listViewGroup5 = (gcnew System::Windows::Forms::ListViewGroup(L"Overall Gpa", System::Windows::Forms::HorizontalAlignment::Center));
                    System::Windows::Forms::ListViewGroup ^ listViewGroup6 = (gcnew System::Windows::Forms::ListViewGroup(L"aaaa", System::Windows::Forms::HorizontalAlignment::Right));
                    System::Windows::Forms::ListViewGroup ^ listViewGroup7 = (gcnew System::Windows::Forms::ListViewGroup(L"aaaa", System::Windows::Forms::HorizontalAlignment::Right));
                    this->greetText = (gcnew System::Windows::Forms::Label());
                    this->btMinimise = (gcnew System::Windows::Forms::Button());
                    this->btCloseApp = (gcnew System::Windows::Forms::Button());
                    this->btMinimiseBG = (gcnew System::Windows::Forms::Button());
                    this->btCloseBG = (gcnew System::Windows::Forms::Button());
                    this->allRolePanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
                    this->logoutBTN = (gcnew System::Windows::Forms::Button());
                    this->changePassword = (gcnew System::Windows::Forms::Button());
                    this->showProfile = (gcnew System::Windows::Forms::Button());
                    this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
                    this->staffFunctionPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
                    this->newbtn = (gcnew System::Windows::Forms::Button());
                    this->newSchoolYear = (gcnew System::Windows::Forms::Button());
                    this->newSemester = (gcnew System::Windows::Forms::Button());
                    this->viewbtn = (gcnew System::Windows::Forms::Button());
                    this->viewStudentList = (gcnew System::Windows::Forms::Button());
                    this->viewScoreboard = (gcnew System::Windows::Forms::Button());
                    this->viewCourses = (gcnew System::Windows::Forms::Button());
                    this->viewClasses = (gcnew System::Windows::Forms::Button());
                    this->updateCoursebtn = (gcnew System::Windows::Forms::Button());
                    this->btncourseExStd = (gcnew System::Windows::Forms::Button());
                    this->importSB = (gcnew System::Windows::Forms::Button());
                    this->btnUpdateRes = (gcnew System::Windows::Forms::Button());
                    this->time = (gcnew System::Windows::Forms::Label());
                    this->date = (gcnew System::Windows::Forms::Label());
                    this->timeController = (gcnew System::Windows::Forms::Timer(this->components));
                    this->studentFunctionPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
                    this->studentView = (gcnew System::Windows::Forms::Button());
                    this->studentViewCourse = (gcnew System::Windows::Forms::Button());
                    this->studentViewScoreboard = (gcnew System::Windows::Forms::Button());
                    this->courseRegistrationbtn = (gcnew System::Windows::Forms::Button());
                    this->viewCourseUI = (gcnew System::Windows::Forms::ListView());
                    this->enrolledCourseNo = (gcnew System::Windows::Forms::ColumnHeader());
                    this->enrolledCourseID = (gcnew System::Windows::Forms::ColumnHeader());
                    this->enrolledCourseName = (gcnew System::Windows::Forms::ColumnHeader());
                    this->enrolledCourseCre = (gcnew System::Windows::Forms::ColumnHeader());
                    this->enrolledCourseStudentNum = (gcnew System::Windows::Forms::ColumnHeader());
                    this->enrolledCourseD1 = (gcnew System::Windows::Forms::ColumnHeader());
                    this->enrolledCourseD2 = (gcnew System::Windows::Forms::ColumnHeader());
                    this->enrolledCourseRoom = (gcnew System::Windows::Forms::ColumnHeader());
                    this->enrolledCourseLecturer = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewStudentUI = (gcnew System::Windows::Forms::ListView());
                    this->viewStudentNo = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewStudentID = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewStudentLName = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewStudentFName = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewStudentSocialID = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewStudentGender = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewStudentdob = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewStudentClassID = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewCoSBUI = (gcnew System::Windows::Forms::ListView());
                    this->viewCoSBNo = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewCoSBStudenID = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewCoSBStudentName = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewCOSBClass = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewCoSBTotal = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewCoSBFinal = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewCoSBMid = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewCoSBOther = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewClSBUI = (gcnew System::Windows::Forms::ListView());
                    this->viewClSBNo = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewClSBStudentID = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewClSBStudentName = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewClSBCourseID = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewClSBTotalMark = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewClSBGPA = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewClSBOGPA = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewClassUI = (gcnew System::Windows::Forms::ListView());
                    this->viewClassUINo = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewClassUIYear = (gcnew System::Windows::Forms::ColumnHeader());
                    this->viewClassUIClID = (gcnew System::Windows::Forms::ColumnHeader());
                    this->courseUpdateUI = (gcnew System::Windows::Forms::Panel());
                    this->panel1 = (gcnew System::Windows::Forms::Panel());
                    this->listCourses = (gcnew System::Windows::Forms::ListBox());
                    this->btDelCourse = (gcnew System::Windows::Forms::Button());
                    this->labelCourseList = (gcnew System::Windows::Forms::Label());
                    this->updateCoursePanel = (gcnew System::Windows::Forms::Panel());
                    this->updateCourseD2 = (gcnew System::Windows::Forms::ComboBox());
                    this->updateCourseS2 = (gcnew System::Windows::Forms::ComboBox());
                    this->updateCourseD1 = (gcnew System::Windows::Forms::ComboBox());
                    this->updateCourseS1 = (gcnew System::Windows::Forms::ComboBox());
                    this->labelWorkspaceName = (gcnew System::Windows::Forms::Label());
                    this->updateCourseName = (gcnew System::Windows::Forms::TextBox());
                    this->btnSave = (gcnew System::Windows::Forms::Button());
                    this->btRevertChanges = (gcnew System::Windows::Forms::Button());
                    this->label1 = (gcnew System::Windows::Forms::Label());
                    this->updateCourseCre = (gcnew System::Windows::Forms::TextBox());
                    this->label2 = (gcnew System::Windows::Forms::Label());
                    this->label10 = (gcnew System::Windows::Forms::Label());
                    this->updateCourseMaxSt = (gcnew System::Windows::Forms::TextBox());
                    this->label3 = (gcnew System::Windows::Forms::Label());
                    this->updateCourseLecturer = (gcnew System::Windows::Forms::TextBox());
                    this->label4 = (gcnew System::Windows::Forms::Label());
                    this->updateCourseRoom = (gcnew System::Windows::Forms::TextBox());
                    this->label5 = (gcnew System::Windows::Forms::Label());
                    this->label6 = (gcnew System::Windows::Forms::Label());
                    this->updateCourseRegisStart = (gcnew System::Windows::Forms::DateTimePicker());
                    this->label7 = (gcnew System::Windows::Forms::Label());
                    this->label8 = (gcnew System::Windows::Forms::Label());
                    this->label9 = (gcnew System::Windows::Forms::Label());
                    this->updateCourseRegisEnd = (gcnew System::Windows::Forms::DateTimePicker());
                    this->panelSchoolYear = (gcnew System::Windows::Forms::Panel());
                    this->btnFinish = (gcnew System::Windows::Forms::Button());
                    this->btnCancelAll = (gcnew System::Windows::Forms::Button());
                    this->treeViewClass = (gcnew System::Windows::Forms::TreeView());
                    this->panel4 = (gcnew System::Windows::Forms::Panel());
                    this->panel3 = (gcnew System::Windows::Forms::Panel());
                    this->endYear = (gcnew System::Windows::Forms::TextBox());
                    this->label12 = (gcnew System::Windows::Forms::Label());
                    this->startYear = (gcnew System::Windows::Forms::TextBox());
                    this->label13 = (gcnew System::Windows::Forms::Label());
                    this->classInput = (gcnew System::Windows::Forms::TextBox());
                    this->label11 = (gcnew System::Windows::Forms::Label());
                    this->btnAddClass = (gcnew System::Windows::Forms::Button());
                    this->panelAddStudent = (gcnew System::Windows::Forms::Panel());
                    this->btnFromFile = (gcnew System::Windows::Forms::Button());
                    this->gender = (gcnew System::Windows::Forms::ComboBox());
                    this->label14 = (gcnew System::Windows::Forms::Label());
                    this->studentID = (gcnew System::Windows::Forms::TextBox());
                    this->btnAddStd = (gcnew System::Windows::Forms::Button());
                    this->btnCancel = (gcnew System::Windows::Forms::Button());
                    this->label15 = (gcnew System::Windows::Forms::Label());
                    this->fName = (gcnew System::Windows::Forms::TextBox());
                    this->label16 = (gcnew System::Windows::Forms::Label());
                    this->lName = (gcnew System::Windows::Forms::TextBox());
                    this->label18 = (gcnew System::Windows::Forms::Label());
                    this->label19 = (gcnew System::Windows::Forms::Label());
                    this->socialID = (gcnew System::Windows::Forms::TextBox());
                    this->doB = (gcnew System::Windows::Forms::DateTimePicker());
                    this->label22 = (gcnew System::Windows::Forms::Label());
                    this->newSemesterUI = (gcnew System::Windows::Forms::Panel());
                    this->semStartDate = (gcnew System::Windows::Forms::DateTimePicker());
                    this->semEndDate = (gcnew System::Windows::Forms::DateTimePicker());
                    this->newSemYear = (gcnew System::Windows::Forms::ComboBox());
                    this->inputedCourseList = (gcnew System::Windows::Forms::ListBox());
                    this->label17 = (gcnew System::Windows::Forms::Label());
                    this->label20 = (gcnew System::Windows::Forms::Label());
                    this->newSem = (gcnew System::Windows::Forms::TextBox());
                    this->label21 = (gcnew System::Windows::Forms::Label());
                    this->panel8 = (gcnew System::Windows::Forms::Panel());
                    this->label23 = (gcnew System::Windows::Forms::Label());
                    this->nsCourseID = (gcnew System::Windows::Forms::TextBox());
                    this->nsBtnDone = (gcnew System::Windows::Forms::Button());
                    this->nsBtnAdd = (gcnew System::Windows::Forms::Button());
                    this->nsBtnCancel = (gcnew System::Windows::Forms::Button());
                    this->nsDay2 = (gcnew System::Windows::Forms::ComboBox());
                    this->nsSession2 = (gcnew System::Windows::Forms::ComboBox());
                    this->nsDay1 = (gcnew System::Windows::Forms::ComboBox());
                    this->nsSession1 = (gcnew System::Windows::Forms::ComboBox());
                    this->label29 = (gcnew System::Windows::Forms::Label());
                    this->nsCourseName = (gcnew System::Windows::Forms::TextBox());
                    this->label30 = (gcnew System::Windows::Forms::Label());
                    this->nsCredit = (gcnew System::Windows::Forms::TextBox());
                    this->label31 = (gcnew System::Windows::Forms::Label());
                    this->label32 = (gcnew System::Windows::Forms::Label());
                    this->nsMaxStd = (gcnew System::Windows::Forms::TextBox());
                    this->label33 = (gcnew System::Windows::Forms::Label());
                    this->nsLecturerName = (gcnew System::Windows::Forms::TextBox());
                    this->label34 = (gcnew System::Windows::Forms::Label());
                    this->nsRoom = (gcnew System::Windows::Forms::TextBox());
                    this->label35 = (gcnew System::Windows::Forms::Label());
                    this->label36 = (gcnew System::Windows::Forms::Label());
                    this->nsRegisStart = (gcnew System::Windows::Forms::DateTimePicker());
                    this->label37 = (gcnew System::Windows::Forms::Label());
                    this->label38 = (gcnew System::Windows::Forms::Label());
                    this->label39 = (gcnew System::Windows::Forms::Label());
                    this->nsRegisEnd = (gcnew System::Windows::Forms::DateTimePicker());
                    this->updateStdRes = (gcnew System::Windows::Forms::Panel());
                    this->treeViewsbU = (gcnew System::Windows::Forms::TreeView());
                    this->panel6 = (gcnew System::Windows::Forms::Panel());
                    this->sbUStdID = (gcnew System::Windows::Forms::TextBox());
                    this->label26 = (gcnew System::Windows::Forms::Label());
                    this->sbUSearch = (gcnew System::Windows::Forms::Button());
                    this->sbUCoursePan = (gcnew System::Windows::Forms::Panel());
                    this->label24 = (gcnew System::Windows::Forms::Label());
                    this->sbUCourse = (gcnew System::Windows::Forms::ComboBox());
                    this->label27 = (gcnew System::Windows::Forms::Label());
                    this->midMark = (gcnew System::Windows::Forms::TextBox());
                    this->sbUbtnSave = (gcnew System::Windows::Forms::Button());
                    this->label28 = (gcnew System::Windows::Forms::Label());
                    this->finMark = (gcnew System::Windows::Forms::TextBox());
                    this->label40 = (gcnew System::Windows::Forms::Label());
                    this->oMark = (gcnew System::Windows::Forms::TextBox());
                    this->label42 = (gcnew System::Windows::Forms::Label());
                    this->totMark = (gcnew System::Windows::Forms::TextBox());
                    this->courseExStd = (gcnew System::Windows::Forms::Panel());
                    this->label25 = (gcnew System::Windows::Forms::Label());
                    this->coExStdInput = (gcnew System::Windows::Forms::ComboBox());
                    this->coExStdBtn = (gcnew System::Windows::Forms::Button());
                    this->imSBpanel = (gcnew System::Windows::Forms::Panel());
                    this->panel5 = (gcnew System::Windows::Forms::Panel());
                    this->imSBFileInput = (gcnew System::Windows::Forms::TextBox());
                    this->imSBbtn = (gcnew System::Windows::Forms::Button());
                    this->label41 = (gcnew System::Windows::Forms::Label());
                    this->imSBCourse = (gcnew System::Windows::Forms::ComboBox());
                    this->imSBExBtn = (gcnew System::Windows::Forms::Button());
                    this->profilePanel = (gcnew System::Windows::Forms::Panel());
                    this->profileDob = (gcnew System::Windows::Forms::TextBox());
                    this->button3 = (gcnew System::Windows::Forms::Button());
                    this->profileGender = (gcnew System::Windows::Forms::TextBox());
                    this->label44 = (gcnew System::Windows::Forms::Label());
                    this->label46 = (gcnew System::Windows::Forms::Label());
                    this->profileSocialID = (gcnew System::Windows::Forms::TextBox());
                    this->label43 = (gcnew System::Windows::Forms::Label());
                    this->label57 = (gcnew System::Windows::Forms::Label());
                    this->profileName = (gcnew System::Windows::Forms::TextBox());
                    this->label45 = (gcnew System::Windows::Forms::Label());
                    this->changePassPanel = (gcnew System::Windows::Forms::Panel());
                    this->changePassBtn = (gcnew System::Windows::Forms::Button());
                    this->changePassCancel = (gcnew System::Windows::Forms::Button());
                    this->panel10 = (gcnew System::Windows::Forms::Panel());
                    this->newPass2 = (gcnew System::Windows::Forms::TextBox());
                    this->label49 = (gcnew System::Windows::Forms::Label());
                    this->panel7 = (gcnew System::Windows::Forms::Panel());
                    this->panel9 = (gcnew System::Windows::Forms::Panel());
                    this->newPass1 = (gcnew System::Windows::Forms::TextBox());
                    this->label47 = (gcnew System::Windows::Forms::Label());
                    this->oldPass = (gcnew System::Windows::Forms::TextBox());
                    this->label48 = (gcnew System::Windows::Forms::Label());
                    this->stdViewCourseUI = (gcnew System::Windows::Forms::ListView());
                    this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
                    this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
                    this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
                    this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
                    this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
                    this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
                    this->columnHeader7 = (gcnew System::Windows::Forms::ColumnHeader());
                    this->columnHeader8 = (gcnew System::Windows::Forms::ColumnHeader());
                    this->columnHeader9 = (gcnew System::Windows::Forms::ColumnHeader());
                    this->stdViewSBUI = (gcnew System::Windows::Forms::ListView());
                    this->columnHeader10 = (gcnew System::Windows::Forms::ColumnHeader());
                    this->columnHeader11 = (gcnew System::Windows::Forms::ColumnHeader());
                    this->columnHeader12 = (gcnew System::Windows::Forms::ColumnHeader());
                    this->columnHeader16 = (gcnew System::Windows::Forms::ColumnHeader());
                    this->columnHeader15 = (gcnew System::Windows::Forms::ColumnHeader());
                    this->columnHeader14 = (gcnew System::Windows::Forms::ColumnHeader());
                    this->columnHeader17 = (gcnew System::Windows::Forms::ColumnHeader());
                    this->courseRegisPanel = (gcnew System::Windows::Forms::Panel());
                    this->listCourseRegis = (gcnew System::Windows::Forms::ListBox());
                    this->courseRegisInfo = (gcnew System::Windows::Forms::Panel());
                    this->courseUnRegisPanelBtn = (gcnew System::Windows::Forms::Button());
                    this->label50 = (gcnew System::Windows::Forms::Label());
                    this->courseRegisID = (gcnew System::Windows::Forms::TextBox());
                    this->courseRegisPanelBtn = (gcnew System::Windows::Forms::Button());
                    this->courseRegisCancel = (gcnew System::Windows::Forms::Button());
                    this->label51 = (gcnew System::Windows::Forms::Label());
                    this->courseRegisName = (gcnew System::Windows::Forms::TextBox());
                    this->label52 = (gcnew System::Windows::Forms::Label());
                    this->courseRegisCre = (gcnew System::Windows::Forms::TextBox());
                    this->label53 = (gcnew System::Windows::Forms::Label());
                    this->label54 = (gcnew System::Windows::Forms::Label());
                    this->courseRegisStd = (gcnew System::Windows::Forms::TextBox());
                    this->label55 = (gcnew System::Windows::Forms::Label());
                    this->courseRegisLecturer = (gcnew System::Windows::Forms::TextBox());
                    this->label56 = (gcnew System::Windows::Forms::Label());
                    this->courseRegisRoom = (gcnew System::Windows::Forms::TextBox());
                    this->label58 = (gcnew System::Windows::Forms::Label());
                    this->label59 = (gcnew System::Windows::Forms::Label());
                    this->label60 = (gcnew System::Windows::Forms::Label());
                    this->label61 = (gcnew System::Windows::Forms::Label());
                    this->label62 = (gcnew System::Windows::Forms::Label());
                    this->courseRegisStart = (gcnew System::Windows::Forms::TextBox());
                    this->courseRegisS1 = (gcnew System::Windows::Forms::TextBox());
                    this->courseRegisEnd = (gcnew System::Windows::Forms::TextBox());
                    this->courseRegisD1 = (gcnew System::Windows::Forms::TextBox());
                    this->courseRegisS2 = (gcnew System::Windows::Forms::TextBox());
                    this->courseRegisD2 = (gcnew System::Windows::Forms::TextBox());
                    this->allRolePanel->SuspendLayout();
                    this->staffFunctionPanel->SuspendLayout();
                    this->studentFunctionPanel->SuspendLayout();
                    this->courseUpdateUI->SuspendLayout();
                    this->panel1->SuspendLayout();
                    this->updateCoursePanel->SuspendLayout();
                    this->panelSchoolYear->SuspendLayout();
                    this->panelAddStudent->SuspendLayout();
                    this->newSemesterUI->SuspendLayout();
                    this->panel8->SuspendLayout();
                    this->updateStdRes->SuspendLayout();
                    this->sbUCoursePan->SuspendLayout();
                    this->courseExStd->SuspendLayout();
                    this->imSBpanel->SuspendLayout();
                    this->profilePanel->SuspendLayout();
                    this->changePassPanel->SuspendLayout();
                    this->courseRegisPanel->SuspendLayout();
                    this->courseRegisInfo->SuspendLayout();
                    this->SuspendLayout();
                    //
                    // greetText
                    //
                    this->greetText->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
                    this->greetText->BackColor = System::Drawing::Color::Transparent;
                    this->greetText->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->greetText->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
                    this->greetText->ForeColor = System::Drawing::Color::White;
                    this->greetText->Location = System::Drawing::Point(928, 62);
                    this->greetText->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
                    this->greetText->Name = L"greetText";
                    this->greetText->Size = System::Drawing::Size(493, 37);
                    this->greetText->TabIndex = 9;
                    this->greetText->Text = L"Good morning, Dang Hoang Nhat Hung";
                    this->greetText->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
                    this->greetText->MouseEnter += gcnew System::EventHandler(this, &functionScreen::greetText_MouseEnter);
                    this->greetText->MouseHover += gcnew System::EventHandler(this, &functionScreen::greetText_MouseEnter);
                    //
                    // btMinimise
                    //
                    this->btMinimise->BackColor = System::Drawing::Color::Transparent;
                    this->btMinimise->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"btMinimise.BackgroundImage")));
                    this->btMinimise->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
                    this->btMinimise->FlatAppearance->BorderColor = System::Drawing::Color::Black;
                    this->btMinimise->FlatAppearance->BorderSize = 0;
                    this->btMinimise->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
                    this->btMinimise->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->btMinimise->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btMinimise->ForeColor = System::Drawing::Color::Transparent;
                    this->btMinimise->Location = System::Drawing::Point(1360, 26);
                    this->btMinimise->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
                    this->btMinimise->Name = L"btMinimise";
                    this->btMinimise->Size = System::Drawing::Size(20, 1);
                    this->btMinimise->TabIndex = 24;
                    this->btMinimise->UseMnemonic = false;
                    this->btMinimise->UseVisualStyleBackColor = false;
                    this->btMinimise->Click += gcnew System::EventHandler(this, &functionScreen::btMinimise_Click);
                    this->btMinimise->MouseHover += gcnew System::EventHandler(this, &functionScreen::btMinimiseBG_MouseHover);
                    //
                    // btCloseApp
                    //
                    this->btCloseApp->BackColor = System::Drawing::Color::Transparent;
                    this->btCloseApp->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"btCloseApp.BackgroundImage")));
                    this->btCloseApp->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
                    this->btCloseApp->FlatAppearance->BorderColor = System::Drawing::Color::Black;
                    this->btCloseApp->FlatAppearance->BorderSize = 0;
                    this->btCloseApp->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
                    this->btCloseApp->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->btCloseApp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btCloseApp->ForeColor = System::Drawing::Color::Transparent;
                    this->btCloseApp->Location = System::Drawing::Point(1398, 18);
                    this->btCloseApp->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
                    this->btCloseApp->Name = L"btCloseApp";
                    this->btCloseApp->Size = System::Drawing::Size(16, 16);
                    this->btCloseApp->TabIndex = 23;
                    this->btCloseApp->UseMnemonic = false;
                    this->btCloseApp->UseVisualStyleBackColor = false;
                    this->btCloseApp->Click += gcnew System::EventHandler(this, &functionScreen::btCloseApp_Click);
                    this->btCloseApp->MouseEnter += gcnew System::EventHandler(this, &functionScreen::btCloseBG_MouseHover);
                    this->btCloseApp->MouseHover += gcnew System::EventHandler(this, &functionScreen::btCloseBG_MouseHover);
                    //
                    // btMinimiseBG
                    //
                    this->btMinimiseBG->BackColor = System::Drawing::Color::Transparent;
                    this->btMinimiseBG->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
                    this->btMinimiseBG->FlatAppearance->BorderColor = System::Drawing::Color::White;
                    this->btMinimiseBG->FlatAppearance->BorderSize = 0;
                    this->btMinimiseBG->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->btMinimiseBG->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btMinimiseBG->ForeColor = System::Drawing::Color::Transparent;
                    this->btMinimiseBG->Location = System::Drawing::Point(1355, 11);
                    this->btMinimiseBG->Name = L"btMinimiseBG";
                    this->btMinimiseBG->Size = System::Drawing::Size(30, 30);
                    this->btMinimiseBG->TabIndex = 25;
                    this->btMinimiseBG->UseVisualStyleBackColor = false;
                    this->btMinimiseBG->Click += gcnew System::EventHandler(this, &functionScreen::btMinimise_Click);
                    this->btMinimiseBG->MouseEnter += gcnew System::EventHandler(this, &functionScreen::btMinimiseBG_MouseHover);
                    this->btMinimiseBG->MouseLeave += gcnew System::EventHandler(this, &functionScreen::btMinimiseBG_MouseLeave);
                    this->btMinimiseBG->MouseHover += gcnew System::EventHandler(this, &functionScreen::btMinimiseBG_MouseHover);
                    //
                    // btCloseBG
                    //
                    this->btCloseBG->BackColor = System::Drawing::Color::Transparent;
                    this->btCloseBG->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
                    this->btCloseBG->FlatAppearance->BorderColor = System::Drawing::Color::White;
                    this->btCloseBG->FlatAppearance->BorderSize = 0;
                    this->btCloseBG->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->btCloseBG->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btCloseBG->ForeColor = System::Drawing::Color::Transparent;
                    this->btCloseBG->Location = System::Drawing::Point(1391, 11);
                    this->btCloseBG->Name = L"btCloseBG";
                    this->btCloseBG->Size = System::Drawing::Size(30, 30);
                    this->btCloseBG->TabIndex = 26;
                    this->btCloseBG->UseVisualStyleBackColor = false;
                    this->btCloseBG->Click += gcnew System::EventHandler(this, &functionScreen::btCloseApp_Click);
                    this->btCloseBG->MouseEnter += gcnew System::EventHandler(this, &functionScreen::btCloseBG_MouseHover);
                    this->btCloseBG->MouseLeave += gcnew System::EventHandler(this, &functionScreen::btCloseBG_MouseLeave);
                    this->btCloseBG->MouseHover += gcnew System::EventHandler(this, &functionScreen::btCloseBG_MouseHover);
                    //
                    // allRolePanel
                    //
                    this->allRolePanel->BackColor = System::Drawing::Color::Transparent;
                    this->allRolePanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
                    this->allRolePanel->Controls->Add(this->logoutBTN);
                    this->allRolePanel->Controls->Add(this->changePassword);
                    this->allRolePanel->Controls->Add(this->showProfile);
                    this->allRolePanel->FlowDirection = System::Windows::Forms::FlowDirection::BottomUp;
                    this->allRolePanel->ForeColor = System::Drawing::Color::Transparent;
                    this->allRolePanel->Location = System::Drawing::Point(1179, 83);
                    this->allRolePanel->Name = L"allRolePanel";
                    this->allRolePanel->Size = System::Drawing::Size(230, 168);
                    this->allRolePanel->TabIndex = 27;
                    this->allRolePanel->Visible = false;
                    this->allRolePanel->MouseEnter += gcnew System::EventHandler(this, &functionScreen::allRolePanel_MouseEnter);
                    this->allRolePanel->MouseHover += gcnew System::EventHandler(this, &functionScreen::allRolePanel_MouseEnter);
                    //
                    // logoutBTN
                    //
                    this->logoutBTN->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->logoutBTN->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
                    this->logoutBTN->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
                    this->logoutBTN->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->logoutBTN->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->logoutBTN->ForeColor = System::Drawing::Color::Red;
                    this->logoutBTN->Location = System::Drawing::Point(3, 120);
                    this->logoutBTN->Name = L"logoutBTN";
                    this->logoutBTN->Size = System::Drawing::Size(226, 45);
                    this->logoutBTN->TabIndex = 4;
                    this->logoutBTN->Text = L"Log out";
                    this->logoutBTN->UseVisualStyleBackColor = true;
                    this->logoutBTN->Click += gcnew System::EventHandler(this, &functionScreen::logoutBTN_Click);
                    //
                    // changePassword
                    //
                    this->changePassword->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->changePassword->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->changePassword->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->changePassword->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->changePassword->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->changePassword->ForeColor = System::Drawing::Color::DeepSkyBlue;
                    this->changePassword->Location = System::Drawing::Point(3, 69);
                    this->changePassword->Name = L"changePassword";
                    this->changePassword->Size = System::Drawing::Size(226, 45);
                    this->changePassword->TabIndex = 3;
                    this->changePassword->Text = L"Change Password";
                    this->changePassword->UseVisualStyleBackColor = true;
                    this->changePassword->Click += gcnew System::EventHandler(this, &functionScreen::changePassword_Click);
                    //
                    // showProfile
                    //
                    this->showProfile->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->showProfile->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->showProfile->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->showProfile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->showProfile->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->showProfile->ForeColor = System::Drawing::Color::DeepSkyBlue;
                    this->showProfile->Location = System::Drawing::Point(3, 18);
                    this->showProfile->Name = L"showProfile";
                    this->showProfile->Size = System::Drawing::Size(226, 45);
                    this->showProfile->TabIndex = 2;
                    this->showProfile->Text = L"Profile";
                    this->showProfile->UseVisualStyleBackColor = true;
                    this->showProfile->Click += gcnew System::EventHandler(this, &functionScreen::showProfile_Click);
                    //
                    // timer1
                    //
                    this->timer1->Tick += gcnew System::EventHandler(this, &functionScreen::timer1_Tick);
                    //
                    // staffFunctionPanel
                    //
                    this->staffFunctionPanel->BackColor = System::Drawing::Color::Transparent;
                    this->staffFunctionPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
                    this->staffFunctionPanel->Controls->Add(this->newbtn);
                    this->staffFunctionPanel->Controls->Add(this->newSchoolYear);
                    this->staffFunctionPanel->Controls->Add(this->newSemester);
                    this->staffFunctionPanel->Controls->Add(this->viewbtn);
                    this->staffFunctionPanel->Controls->Add(this->viewStudentList);
                    this->staffFunctionPanel->Controls->Add(this->viewScoreboard);
                    this->staffFunctionPanel->Controls->Add(this->viewCourses);
                    this->staffFunctionPanel->Controls->Add(this->viewClasses);
                    this->staffFunctionPanel->Controls->Add(this->updateCoursebtn);
                    this->staffFunctionPanel->Controls->Add(this->btncourseExStd);
                    this->staffFunctionPanel->Controls->Add(this->importSB);
                    this->staffFunctionPanel->Controls->Add(this->btnUpdateRes);
                    this->staffFunctionPanel->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
                    this->staffFunctionPanel->ForeColor = System::Drawing::Color::Transparent;
                    this->staffFunctionPanel->Location = System::Drawing::Point(29, 104);
                    this->staffFunctionPanel->Name = L"staffFunctionPanel";
                    this->staffFunctionPanel->Size = System::Drawing::Size(232, 696);
                    this->staffFunctionPanel->TabIndex = 28;
                    this->staffFunctionPanel->Visible = false;
                    //
                    // newbtn
                    //
                    this->newbtn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->newbtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->newbtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
                        static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
                    this->newbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->newbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->newbtn->ForeColor = System::Drawing::Color::White;
                    this->newbtn->Location = System::Drawing::Point(3, 3);
                    this->newbtn->Name = L"newbtn";
                    this->newbtn->Size = System::Drawing::Size(226, 45);
                    this->newbtn->TabIndex = 3;
                    this->newbtn->Text = L"New...";
                    this->newbtn->UseVisualStyleBackColor = true;
                    this->newbtn->Click += gcnew System::EventHandler(this, &functionScreen::newbtn_Click);
                    //
                    // newSchoolYear
                    //
                    this->newSchoolYear->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->newSchoolYear->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
                    this->newSchoolYear->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->newSchoolYear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->newSchoolYear->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->newSchoolYear->ForeColor = System::Drawing::Color::DeepSkyBlue;
                    this->newSchoolYear->Location = System::Drawing::Point(22, 54);
                    this->newSchoolYear->Name = L"newSchoolYear";
                    this->newSchoolYear->Size = System::Drawing::Size(188, 40);
                    this->newSchoolYear->TabIndex = 9;
                    this->newSchoolYear->Text = L"School Year";
                    this->newSchoolYear->UseVisualStyleBackColor = true;
                    this->newSchoolYear->Visible = false;
                    this->newSchoolYear->Click += gcnew System::EventHandler(this, &functionScreen::newSchoolYear_Click);
                    //
                    // newSemester
                    //
                    this->newSemester->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->newSemester->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
                    this->newSemester->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->newSemester->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->newSemester->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->newSemester->ForeColor = System::Drawing::Color::DeepSkyBlue;
                    this->newSemester->Location = System::Drawing::Point(22, 100);
                    this->newSemester->Name = L"newSemester";
                    this->newSemester->Size = System::Drawing::Size(188, 40);
                    this->newSemester->TabIndex = 8;
                    this->newSemester->Text = L"Semester";
                    this->newSemester->UseVisualStyleBackColor = true;
                    this->newSemester->Visible = false;
                    this->newSemester->Click += gcnew System::EventHandler(this, &functionScreen::newSemester_Click);
                    //
                    // viewbtn
                    //
                    this->viewbtn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->viewbtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->viewbtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
                        static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
                    this->viewbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->viewbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->viewbtn->ForeColor = System::Drawing::Color::White;
                    this->viewbtn->Location = System::Drawing::Point(3, 146);
                    this->viewbtn->Name = L"viewbtn";
                    this->viewbtn->Size = System::Drawing::Size(226, 45);
                    this->viewbtn->TabIndex = 2;
                    this->viewbtn->Text = L"View...";
                    this->viewbtn->UseVisualStyleBackColor = true;
                    this->viewbtn->Click += gcnew System::EventHandler(this, &functionScreen::viewbtn_Click);
                    //
                    // viewStudentList
                    //
                    this->viewStudentList->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->viewStudentList->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
                    this->viewStudentList->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->viewStudentList->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->viewStudentList->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->viewStudentList->ForeColor = System::Drawing::Color::DeepSkyBlue;
                    this->viewStudentList->Location = System::Drawing::Point(22, 197);
                    this->viewStudentList->Name = L"viewStudentList";
                    this->viewStudentList->Size = System::Drawing::Size(188, 40);
                    this->viewStudentList->TabIndex = 12;
                    this->viewStudentList->Text = L"Students List";
                    this->viewStudentList->UseVisualStyleBackColor = true;
                    this->viewStudentList->Visible = false;
                    this->viewStudentList->Click += gcnew System::EventHandler(this, &functionScreen::viewStudentList_Click);
                    //
                    // viewScoreboard
                    //
                    this->viewScoreboard->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->viewScoreboard->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
                    this->viewScoreboard->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->viewScoreboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->viewScoreboard->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->viewScoreboard->ForeColor = System::Drawing::Color::DeepSkyBlue;
                    this->viewScoreboard->Location = System::Drawing::Point(22, 243);
                    this->viewScoreboard->Name = L"viewScoreboard";
                    this->viewScoreboard->Size = System::Drawing::Size(188, 40);
                    this->viewScoreboard->TabIndex = 10;
                    this->viewScoreboard->Text = L"Scoreboard";
                    this->viewScoreboard->UseVisualStyleBackColor = true;
                    this->viewScoreboard->Visible = false;
                    this->viewScoreboard->Click += gcnew System::EventHandler(this, &functionScreen::viewScoreboard_Click);
                    //
                    // viewCourses
                    //
                    this->viewCourses->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->viewCourses->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
                    this->viewCourses->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->viewCourses->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->viewCourses->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->viewCourses->ForeColor = System::Drawing::Color::DeepSkyBlue;
                    this->viewCourses->Location = System::Drawing::Point(22, 289);
                    this->viewCourses->Name = L"viewCourses";
                    this->viewCourses->RightToLeft = System::Windows::Forms::RightToLeft::No;
                    this->viewCourses->Size = System::Drawing::Size(188, 40);
                    this->viewCourses->TabIndex = 11;
                    this->viewCourses->Text = L"Courses";
                    this->viewCourses->UseVisualStyleBackColor = true;
                    this->viewCourses->Visible = false;
                    this->viewCourses->Click += gcnew System::EventHandler(this, &functionScreen::viewCourses_Click);
                    //
                    // viewClasses
                    //
                    this->viewClasses->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->viewClasses->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
                    this->viewClasses->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->viewClasses->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->viewClasses->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->viewClasses->ForeColor = System::Drawing::Color::DeepSkyBlue;
                    this->viewClasses->Location = System::Drawing::Point(22, 335);
                    this->viewClasses->Name = L"viewClasses";
                    this->viewClasses->Size = System::Drawing::Size(188, 40);
                    this->viewClasses->TabIndex = 13;
                    this->viewClasses->Text = L"Classes";
                    this->viewClasses->UseVisualStyleBackColor = true;
                    this->viewClasses->Visible = false;
                    this->viewClasses->Click += gcnew System::EventHandler(this, &functionScreen::viewClasses_Click);
                    //
                    // updateCoursebtn
                    //
                    this->updateCoursebtn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->updateCoursebtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->updateCoursebtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
                        static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
                    this->updateCoursebtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->updateCoursebtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->updateCoursebtn->ForeColor = System::Drawing::Color::White;
                    this->updateCoursebtn->Location = System::Drawing::Point(3, 381);
                    this->updateCoursebtn->Name = L"updateCoursebtn";
                    this->updateCoursebtn->Size = System::Drawing::Size(226, 45);
                    this->updateCoursebtn->TabIndex = 4;
                    this->updateCoursebtn->Text = L"Update Course Info";
                    this->updateCoursebtn->UseVisualStyleBackColor = true;
                    this->updateCoursebtn->Click += gcnew System::EventHandler(this, &functionScreen::updateCoursebtn_Click);
                    //
                    // btncourseExStd
                    //
                    this->btncourseExStd->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->btncourseExStd->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->btncourseExStd->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
                        static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
                    this->btncourseExStd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btncourseExStd->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->btncourseExStd->ForeColor = System::Drawing::Color::White;
                    this->btncourseExStd->Location = System::Drawing::Point(3, 432);
                    this->btncourseExStd->Name = L"btncourseExStd";
                    this->btncourseExStd->Size = System::Drawing::Size(226, 45);
                    this->btncourseExStd->TabIndex = 5;
                    this->btncourseExStd->Text = L"Export Course\'s Students";
                    this->btncourseExStd->UseVisualStyleBackColor = true;
                    this->btncourseExStd->Click += gcnew System::EventHandler(this, &functionScreen::btncourseExStd_Click);
                    //
                    // importSB
                    //
                    this->importSB->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->importSB->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->importSB->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
                        static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
                    this->importSB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->importSB->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->importSB->ForeColor = System::Drawing::Color::White;
                    this->importSB->Location = System::Drawing::Point(3, 483);
                    this->importSB->Name = L"importSB";
                    this->importSB->Size = System::Drawing::Size(226, 45);
                    this->importSB->TabIndex = 6;
                    this->importSB->Text = L"Import Scoreboard";
                    this->importSB->UseVisualStyleBackColor = true;
                    this->importSB->Click += gcnew System::EventHandler(this, &functionScreen::importSB_Click);
                    //
                    // btnUpdateRes
                    //
                    this->btnUpdateRes->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->btnUpdateRes->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->btnUpdateRes->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)),
                        static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)));
                    this->btnUpdateRes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnUpdateRes->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->btnUpdateRes->ForeColor = System::Drawing::Color::White;
                    this->btnUpdateRes->Location = System::Drawing::Point(3, 534);
                    this->btnUpdateRes->Name = L"btnUpdateRes";
                    this->btnUpdateRes->Size = System::Drawing::Size(226, 45);
                    this->btnUpdateRes->TabIndex = 7;
                    this->btnUpdateRes->Text = L"Update Student Result";
                    this->btnUpdateRes->UseVisualStyleBackColor = true;
                    this->btnUpdateRes->Click += gcnew System::EventHandler(this, &functionScreen::btnUpdateRes_Click);
                    //
                    // time
                    //
                    this->time->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
                    this->time->BackColor = System::Drawing::Color::Transparent;
                    this->time->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->time->Font = (gcnew System::Drawing::Font(L"Digital-7 Mono", 32));
                    this->time->ForeColor = System::Drawing::Color::White;
                    this->time->Location = System::Drawing::Point(-20, 689);
                    this->time->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
                    this->time->Name = L"time";
                    this->time->Size = System::Drawing::Size(159, 73);
                    this->time->TabIndex = 31;
                    this->time->Text = L"10:05";
                    this->time->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
                    //
                    // date
                    //
                    this->date->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
                    this->date->BackColor = System::Drawing::Color::Transparent;
                    this->date->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->date->Font = (gcnew System::Drawing::Font(L"Digital-7 Mono", 16));
                    this->date->ForeColor = System::Drawing::Color::Transparent;
                    this->date->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
                    this->date->Location = System::Drawing::Point(151, 689);
                    this->date->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
                    this->date->Name = L"date";
                    this->date->Size = System::Drawing::Size(93, 73);
                    this->date->TabIndex = 32;
                    this->date->Text = L"MAR 17 2022";
                    this->date->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
                    //
                    // timeController
                    //
                    this->timeController->Tick += gcnew System::EventHandler(this, &functionScreen::timeController_Tick);
                    //
                    // studentFunctionPanel
                    //
                    this->studentFunctionPanel->BackColor = System::Drawing::Color::Transparent;
                    this->studentFunctionPanel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
                    this->studentFunctionPanel->Controls->Add(this->studentView);
                    this->studentFunctionPanel->Controls->Add(this->studentViewCourse);
                    this->studentFunctionPanel->Controls->Add(this->studentViewScoreboard);
                    this->studentFunctionPanel->Controls->Add(this->courseRegistrationbtn);
                    this->studentFunctionPanel->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
                    this->studentFunctionPanel->ForeColor = System::Drawing::Color::Transparent;
                    this->studentFunctionPanel->Location = System::Drawing::Point(29, 104);
                    this->studentFunctionPanel->Name = L"studentFunctionPanel";
                    this->studentFunctionPanel->Size = System::Drawing::Size(232, 696);
                    this->studentFunctionPanel->TabIndex = 33;
                    this->studentFunctionPanel->Visible = false;
                    this->studentFunctionPanel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::studentFunctionPanel_MouseMove);
                    //
                    // studentView
                    //
                    this->studentView->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->studentView->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                        static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
                    this->studentView->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                        static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
                    this->studentView->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->studentView->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->studentView->ForeColor = System::Drawing::Color::White;
                    this->studentView->Location = System::Drawing::Point(3, 3);
                    this->studentView->Name = L"studentView";
                    this->studentView->Size = System::Drawing::Size(226, 45);
                    this->studentView->TabIndex = 2;
                    this->studentView->Text = L"View...";
                    this->studentView->UseVisualStyleBackColor = true;
                    this->studentView->Click += gcnew System::EventHandler(this, &functionScreen::studentView_Click);
                    //
                    // studentViewCourse
                    //
                    this->studentViewCourse->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->studentViewCourse->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
                    this->studentViewCourse->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->studentViewCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->studentViewCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->studentViewCourse->ForeColor = System::Drawing::Color::DeepSkyBlue;
                    this->studentViewCourse->Location = System::Drawing::Point(22, 54);
                    this->studentViewCourse->Name = L"studentViewCourse";
                    this->studentViewCourse->Size = System::Drawing::Size(188, 40);
                    this->studentViewCourse->TabIndex = 12;
                    this->studentViewCourse->Text = L"Enrolled Courses";
                    this->studentViewCourse->UseVisualStyleBackColor = true;
                    this->studentViewCourse->Visible = false;
                    this->studentViewCourse->Click += gcnew System::EventHandler(this, &functionScreen::studentViewCourse_Click);
                    //
                    // studentViewScoreboard
                    //
                    this->studentViewScoreboard->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->studentViewScoreboard->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(50)));
                    this->studentViewScoreboard->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->studentViewScoreboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->studentViewScoreboard->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->studentViewScoreboard->ForeColor = System::Drawing::Color::DeepSkyBlue;
                    this->studentViewScoreboard->Location = System::Drawing::Point(22, 100);
                    this->studentViewScoreboard->Name = L"studentViewScoreboard";
                    this->studentViewScoreboard->Size = System::Drawing::Size(188, 40);
                    this->studentViewScoreboard->TabIndex = 10;
                    this->studentViewScoreboard->Text = L"Scoreboard";
                    this->studentViewScoreboard->UseVisualStyleBackColor = true;
                    this->studentViewScoreboard->Visible = false;
                    this->studentViewScoreboard->Click += gcnew System::EventHandler(this, &functionScreen::studentViewScoreboard_Click);
                    //
                    // courseRegistrationbtn
                    //
                    this->courseRegistrationbtn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->courseRegistrationbtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                        static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
                    this->courseRegistrationbtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                        static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
                    this->courseRegistrationbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->courseRegistrationbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->courseRegistrationbtn->ForeColor = System::Drawing::Color::White;
                    this->courseRegistrationbtn->Location = System::Drawing::Point(3, 146);
                    this->courseRegistrationbtn->Name = L"courseRegistrationbtn";
                    this->courseRegistrationbtn->Size = System::Drawing::Size(226, 45);
                    this->courseRegistrationbtn->TabIndex = 3;
                    this->courseRegistrationbtn->Text = L"Course Registration";
                    this->courseRegistrationbtn->UseVisualStyleBackColor = true;
                    this->courseRegistrationbtn->Click += gcnew System::EventHandler(this, &functionScreen::courseRegistrationbtn_Click);
                    //
                    // viewCourseUI
                    //
                    this->viewCourseUI->Alignment = System::Windows::Forms::ListViewAlignment::Default;
                    this->viewCourseUI->AllowColumnReorder = true;
                    this->viewCourseUI->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->viewCourseUI->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->viewCourseUI->Columns->AddRange(gcnew cli::array<System::Windows::Forms::ColumnHeader ^>(9) { this->enrolledCourseNo,
                        this->enrolledCourseID, this->enrolledCourseName, this->enrolledCourseCre, this->enrolledCourseStudentNum, this->enrolledCourseD1,
                        this->enrolledCourseD2, this->enrolledCourseRoom, this->enrolledCourseLecturer });
                    this->viewCourseUI->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
                    this->viewCourseUI->ForeColor = System::Drawing::Color::White;
                    listViewGroup1->Header = L"aaaa";
                    listViewGroup1->HeaderAlignment = System::Windows::Forms::HorizontalAlignment::Right;
                    listViewGroup1->Name = L"aaaaa";
                    this->viewCourseUI->Groups->AddRange(gcnew cli::array<System::Windows::Forms::ListViewGroup ^>(1) { listViewGroup1 });
                    this->viewCourseUI->HideSelection = false;
                    this->viewCourseUI->Location = System::Drawing::Point(280, 107);
                    this->viewCourseUI->Name = L"viewCourseUI";
                    this->viewCourseUI->ShowGroups = false;
                    this->viewCourseUI->Size = System::Drawing::Size(1129, 623);
                    this->viewCourseUI->TabIndex = 35;
                    this->viewCourseUI->UseCompatibleStateImageBehavior = false;
                    this->viewCourseUI->View = System::Windows::Forms::View::Details;
                    this->viewCourseUI->Visible = false;
                    this->viewCourseUI->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::viewCourseUI_MouseMove);
                    //
                    // enrolledCourseNo
                    //
                    this->enrolledCourseNo->Text = L"No.";
                    this->enrolledCourseNo->Width = 40;
                    //
                    // enrolledCourseID
                    //
                    this->enrolledCourseID->Text = L"Course ID";
                    this->enrolledCourseID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->enrolledCourseID->Width = 91;
                    //
                    // enrolledCourseName
                    //
                    this->enrolledCourseName->Text = L"Course Name";
                    this->enrolledCourseName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->enrolledCourseName->Width = 284;
                    //
                    // enrolledCourseCre
                    //
                    this->enrolledCourseCre->Text = L"Credits";
                    this->enrolledCourseCre->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->enrolledCourseCre->Width = 68;
                    //
                    // enrolledCourseStudentNum
                    //
                    this->enrolledCourseStudentNum->Text = L"Students";
                    this->enrolledCourseStudentNum->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->enrolledCourseStudentNum->Width = 84;
                    //
                    // enrolledCourseD1
                    //
                    this->enrolledCourseD1->Text = L"Day 1";
                    this->enrolledCourseD1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->enrolledCourseD1->Width = 135;
                    //
                    // enrolledCourseD2
                    //
                    this->enrolledCourseD2->Text = L"Day 2";
                    this->enrolledCourseD2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->enrolledCourseD2->Width = 135;
                    //
                    // enrolledCourseRoom
                    //
                    this->enrolledCourseRoom->Text = L"Room";
                    this->enrolledCourseRoom->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->enrolledCourseRoom->Width = 71;
                    //
                    // enrolledCourseLecturer
                    //
                    this->enrolledCourseLecturer->Text = L"Lecturer";
                    this->enrolledCourseLecturer->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->enrolledCourseLecturer->Width = 220;
                    //
                    // viewStudentUI
                    //
                    this->viewStudentUI->Alignment = System::Windows::Forms::ListViewAlignment::Default;
                    this->viewStudentUI->AllowColumnReorder = true;
                    this->viewStudentUI->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->viewStudentUI->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->viewStudentUI->Columns->AddRange(gcnew cli::array<System::Windows::Forms::ColumnHeader ^>(8) { this->viewStudentNo,
                        this->viewStudentID, this->viewStudentLName, this->viewStudentFName, this->viewStudentSocialID, this->viewStudentGender, this->viewStudentdob,
                        this->viewStudentClassID });
                    this->viewStudentUI->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
                    this->viewStudentUI->ForeColor = System::Drawing::Color::White;
                    listViewGroup2->Header = L"aaaa";
                    listViewGroup2->HeaderAlignment = System::Windows::Forms::HorizontalAlignment::Right;
                    listViewGroup2->Name = L"aaaaa";
                    this->viewStudentUI->Groups->AddRange(gcnew cli::array<System::Windows::Forms::ListViewGroup ^>(1) { listViewGroup2 });
                    this->viewStudentUI->HideSelection = false;
                    this->viewStudentUI->Location = System::Drawing::Point(280, 107);
                    this->viewStudentUI->Name = L"viewStudentUI";
                    this->viewStudentUI->ShowGroups = false;
                    this->viewStudentUI->Size = System::Drawing::Size(1129, 623);
                    this->viewStudentUI->TabIndex = 36;
                    this->viewStudentUI->UseCompatibleStateImageBehavior = false;
                    this->viewStudentUI->View = System::Windows::Forms::View::Details;
                    this->viewStudentUI->Visible = false;
                    this->viewStudentUI->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::viewStudentUI_MouseMove);
                    //
                    // viewStudentNo
                    //
                    this->viewStudentNo->Text = L"No.";
                    this->viewStudentNo->Width = 40;
                    //
                    // viewStudentID
                    //
                    this->viewStudentID->Text = L"Student ID";
                    this->viewStudentID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewStudentID->Width = 149;
                    //
                    // viewStudentLName
                    //
                    this->viewStudentLName->Text = L"Last Name";
                    this->viewStudentLName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewStudentLName->Width = 260;
                    //
                    // viewStudentFName
                    //
                    this->viewStudentFName->Text = L"First Name";
                    this->viewStudentFName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewStudentFName->Width = 130;
                    //
                    // viewStudentSocialID
                    //
                    this->viewStudentSocialID->Text = L"Social ID";
                    this->viewStudentSocialID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewStudentSocialID->Width = 162;
                    //
                    // viewStudentGender
                    //
                    this->viewStudentGender->Text = L"Gender";
                    this->viewStudentGender->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewStudentGender->Width = 100;
                    //
                    // viewStudentdob
                    //
                    this->viewStudentdob->Text = L"Date of Birth";
                    this->viewStudentdob->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewStudentdob->Width = 165;
                    //
                    // viewStudentClassID
                    //
                    this->viewStudentClassID->Text = L"Class ID";
                    this->viewStudentClassID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewStudentClassID->Width = 123;
                    //
                    // viewCoSBUI
                    //
                    this->viewCoSBUI->Alignment = System::Windows::Forms::ListViewAlignment::Default;
                    this->viewCoSBUI->AllowColumnReorder = true;
                    this->viewCoSBUI->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->viewCoSBUI->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->viewCoSBUI->Columns->AddRange(gcnew cli::array<System::Windows::Forms::ColumnHeader ^>(8) { this->viewCoSBNo, this->viewCoSBStudenID,
                        this->viewCoSBStudentName, this->viewCOSBClass, this->viewCoSBTotal, this->viewCoSBFinal, this->viewCoSBMid, this->viewCoSBOther });
                    this->viewCoSBUI->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
                    this->viewCoSBUI->ForeColor = System::Drawing::Color::White;
                    listViewGroup3->Header = L"aaaa";
                    listViewGroup3->HeaderAlignment = System::Windows::Forms::HorizontalAlignment::Right;
                    listViewGroup3->Name = L"aaaaa";
                    this->viewCoSBUI->Groups->AddRange(gcnew cli::array<System::Windows::Forms::ListViewGroup ^>(1) { listViewGroup3 });
                    this->viewCoSBUI->HideSelection = false;
                    this->viewCoSBUI->Location = System::Drawing::Point(280, 107);
                    this->viewCoSBUI->Name = L"viewCoSBUI";
                    this->viewCoSBUI->ShowGroups = false;
                    this->viewCoSBUI->Size = System::Drawing::Size(1129, 623);
                    this->viewCoSBUI->TabIndex = 37;
                    this->viewCoSBUI->UseCompatibleStateImageBehavior = false;
                    this->viewCoSBUI->View = System::Windows::Forms::View::Details;
                    this->viewCoSBUI->Visible = false;
                    this->viewCoSBUI->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::viewCoSBUI_MouseMove);
                    //
                    // viewCoSBNo
                    //
                    this->viewCoSBNo->Text = L"No.";
                    this->viewCoSBNo->Width = 40;
                    //
                    // viewCoSBStudenID
                    //
                    this->viewCoSBStudenID->Text = L"Student ID";
                    this->viewCoSBStudenID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewCoSBStudenID->Width = 149;
                    //
                    // viewCoSBStudentName
                    //
                    this->viewCoSBStudentName->Text = L"Student Name";
                    this->viewCoSBStudentName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewCoSBStudentName->Width = 290;
                    //
                    // viewCOSBClass
                    //
                    this->viewCOSBClass->Text = L"Class ID";
                    this->viewCOSBClass->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewCOSBClass->Width = 129;
                    //
                    // viewCoSBTotal
                    //
                    this->viewCoSBTotal->Text = L"Total Mark";
                    this->viewCoSBTotal->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewCoSBTotal->Width = 130;
                    //
                    // viewCoSBFinal
                    //
                    this->viewCoSBFinal->Text = L"Final Mark";
                    this->viewCoSBFinal->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewCoSBFinal->Width = 130;
                    //
                    // viewCoSBMid
                    //
                    this->viewCoSBMid->Text = L"Midterm Mark";
                    this->viewCoSBMid->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewCoSBMid->Width = 130;
                    //
                    // viewCoSBOther
                    //
                    this->viewCoSBOther->Text = L"Other Mark";
                    this->viewCoSBOther->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewCoSBOther->Width = 130;
                    //
                    // viewClSBUI
                    //
                    this->viewClSBUI->Alignment = System::Windows::Forms::ListViewAlignment::Default;
                    this->viewClSBUI->AllowColumnReorder = true;
                    this->viewClSBUI->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->viewClSBUI->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->viewClSBUI->Columns->AddRange(gcnew cli::array<System::Windows::Forms::ColumnHeader ^>(7) { this->viewClSBNo, this->viewClSBStudentID,
                        this->viewClSBStudentName, this->viewClSBCourseID, this->viewClSBTotalMark, this->viewClSBGPA, this->viewClSBOGPA });
                    this->viewClSBUI->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
                    this->viewClSBUI->ForeColor = System::Drawing::Color::White;
                    listViewGroup4->Header = L"Overall Gpa";
                    listViewGroup4->HeaderAlignment = System::Windows::Forms::HorizontalAlignment::Center;
                    listViewGroup4->Name = L"aaaaaadff";
                    listViewGroup4->Tag = L"aa";
                    this->viewClSBUI->Groups->AddRange(gcnew cli::array<System::Windows::Forms::ListViewGroup ^>(1) { listViewGroup4 });
                    this->viewClSBUI->HideSelection = false;
                    this->viewClSBUI->Location = System::Drawing::Point(280, 107);
                    this->viewClSBUI->Name = L"viewClSBUI";
                    this->viewClSBUI->ShowGroups = false;
                    this->viewClSBUI->Size = System::Drawing::Size(1129, 623);
                    this->viewClSBUI->TabIndex = 38;
                    this->viewClSBUI->UseCompatibleStateImageBehavior = false;
                    this->viewClSBUI->View = System::Windows::Forms::View::Details;
                    this->viewClSBUI->Visible = false;
                    this->viewClSBUI->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::viewClSBUI_MouseMove);
                    //
                    // viewClSBNo
                    //
                    this->viewClSBNo->Text = L"No.";
                    this->viewClSBNo->Width = 40;
                    //
                    // viewClSBStudentID
                    //
                    this->viewClSBStudentID->Text = L"Student ID";
                    this->viewClSBStudentID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewClSBStudentID->Width = 149;
                    //
                    // viewClSBStudentName
                    //
                    this->viewClSBStudentName->Text = L"Student Name";
                    this->viewClSBStudentName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewClSBStudentName->Width = 423;
                    //
                    // viewClSBCourseID
                    //
                    this->viewClSBCourseID->Text = L"Course ID";
                    this->viewClSBCourseID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewClSBCourseID->Width = 155;
                    //
                    // viewClSBTotalMark
                    //
                    this->viewClSBTotalMark->Text = L"Total Mark";
                    this->viewClSBTotalMark->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewClSBTotalMark->Width = 120;
                    //
                    // viewClSBGPA
                    //
                    this->viewClSBGPA->Text = L"GPA";
                    this->viewClSBGPA->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewClSBGPA->Width = 120;
                    //
                    // viewClSBOGPA
                    //
                    this->viewClSBOGPA->Text = L"Overall GPA";
                    this->viewClSBOGPA->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewClSBOGPA->Width = 120;
                    //
                    // viewClassUI
                    //
                    this->viewClassUI->Alignment = System::Windows::Forms::ListViewAlignment::Default;
                    this->viewClassUI->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->viewClassUI->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->viewClassUI->Columns->AddRange(gcnew cli::array<System::Windows::Forms::ColumnHeader ^>(3) { this->viewClassUINo,
                        this->viewClassUIYear, this->viewClassUIClID });
                    this->viewClassUI->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
                    this->viewClassUI->ForeColor = System::Drawing::Color::White;
                    listViewGroup5->Header = L"Overall Gpa";
                    listViewGroup5->HeaderAlignment = System::Windows::Forms::HorizontalAlignment::Center;
                    listViewGroup5->Name = L"aaaaaadff";
                    listViewGroup5->Tag = L"aa";
                    this->viewClassUI->Groups->AddRange(gcnew cli::array<System::Windows::Forms::ListViewGroup ^>(1) { listViewGroup5 });
                    this->viewClassUI->HideSelection = false;
                    this->viewClassUI->Location = System::Drawing::Point(280, 107);
                    this->viewClassUI->Name = L"viewClassUI";
                    this->viewClassUI->ShowGroups = false;
                    this->viewClassUI->Size = System::Drawing::Size(494, 623);
                    this->viewClassUI->TabIndex = 39;
                    this->viewClassUI->UseCompatibleStateImageBehavior = false;
                    this->viewClassUI->View = System::Windows::Forms::View::Details;
                    this->viewClassUI->Visible = false;
                    this->viewClassUI->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::viewClassUI_MouseMove);
                    //
                    // viewClassUINo
                    //
                    this->viewClassUINo->Text = L"No.";
                    this->viewClassUINo->Width = 40;
                    //
                    // viewClassUIYear
                    //
                    this->viewClassUIYear->Text = L"Academic Year";
                    this->viewClassUIYear->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewClassUIYear->Width = 292;
                    //
                    // viewClassUIClID
                    //
                    this->viewClassUIClID->Text = L"Class ID";
                    this->viewClassUIClID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->viewClassUIClID->Width = 162;
                    //
                    // courseUpdateUI
                    //
                    this->courseUpdateUI->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
                        | System::Windows::Forms::AnchorStyles::Right));
                    this->courseUpdateUI->Controls->Add(this->panel1);
                    this->courseUpdateUI->Controls->Add(this->updateCoursePanel);
                    this->courseUpdateUI->Location = System::Drawing::Point(279, 83);
                    this->courseUpdateUI->Name = L"courseUpdateUI";
                    this->courseUpdateUI->Size = System::Drawing::Size(1129, 643);
                    this->courseUpdateUI->TabIndex = 40;
                    this->courseUpdateUI->Visible = false;
                    this->courseUpdateUI->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::stdViewSBUI_MouseMove);
                    //
                    // panel1
                    //
                    this->panel1->Controls->Add(this->listCourses);
                    this->panel1->Controls->Add(this->btDelCourse);
                    this->panel1->Controls->Add(this->labelCourseList);
                    this->panel1->Location = System::Drawing::Point(85, 3);
                    this->panel1->Name = L"panel1";
                    this->panel1->Size = System::Drawing::Size(355, 637);
                    this->panel1->TabIndex = 41;
                    this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::stdViewSBUI_MouseMove);
                    //
                    // listCourses
                    //
                    this->listCourses->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->listCourses->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->listCourses->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
                    this->listCourses->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
                    this->listCourses->ItemHeight = 28;
                    this->listCourses->Location = System::Drawing::Point(51, 65);
                    this->listCourses->Name = L"listCourses";
                    this->listCourses->Size = System::Drawing::Size(255, 476);
                    this->listCourses->TabIndex = 65;
                    this->listCourses->SelectedIndexChanged += gcnew System::EventHandler(this, &functionScreen::listCourses_SelectedIndexChanged);
                    //
                    // btDelCourse
                    //
                    this->btDelCourse->FlatAppearance->BorderSize = 0;
                    this->btDelCourse->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
                    this->btDelCourse->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
                    this->btDelCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btDelCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->btDelCourse->ForeColor = System::Drawing::Color::Red;
                    this->btDelCourse->Location = System::Drawing::Point(51, 562);
                    this->btDelCourse->Name = L"btDelCourse";
                    this->btDelCourse->Size = System::Drawing::Size(247, 45);
                    this->btDelCourse->TabIndex = 64;
                    this->btDelCourse->Text = L"Delete Course";
                    this->btDelCourse->UseVisualStyleBackColor = true;
                    this->btDelCourse->Visible = false;
                    this->btDelCourse->Click += gcnew System::EventHandler(this, &functionScreen::btDelCourse_Click);
                    //
                    // labelCourseList
                    //
                    this->labelCourseList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
                    this->labelCourseList->BackColor = System::Drawing::Color::Transparent;
                    this->labelCourseList->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 20, System::Drawing::FontStyle::Bold));
                    this->labelCourseList->ForeColor = System::Drawing::Color::White;
                    this->labelCourseList->Location = System::Drawing::Point(84, 12);
                    this->labelCourseList->Name = L"labelCourseList";
                    this->labelCourseList->Size = System::Drawing::Size(189, 46);
                    this->labelCourseList->TabIndex = 63;
                    this->labelCourseList->Text = L"Course List";
                    this->labelCourseList->TextAlign = System::Drawing::ContentAlignment::TopCenter;
                    //
                    // updateCoursePanel
                    //
                    this->updateCoursePanel->Controls->Add(this->updateCourseD2);
                    this->updateCoursePanel->Controls->Add(this->updateCourseS2);
                    this->updateCoursePanel->Controls->Add(this->updateCourseD1);
                    this->updateCoursePanel->Controls->Add(this->updateCourseS1);
                    this->updateCoursePanel->Controls->Add(this->labelWorkspaceName);
                    this->updateCoursePanel->Controls->Add(this->updateCourseName);
                    this->updateCoursePanel->Controls->Add(this->btnSave);
                    this->updateCoursePanel->Controls->Add(this->btRevertChanges);
                    this->updateCoursePanel->Controls->Add(this->label1);
                    this->updateCoursePanel->Controls->Add(this->updateCourseCre);
                    this->updateCoursePanel->Controls->Add(this->label2);
                    this->updateCoursePanel->Controls->Add(this->label10);
                    this->updateCoursePanel->Controls->Add(this->updateCourseMaxSt);
                    this->updateCoursePanel->Controls->Add(this->label3);
                    this->updateCoursePanel->Controls->Add(this->updateCourseLecturer);
                    this->updateCoursePanel->Controls->Add(this->label4);
                    this->updateCoursePanel->Controls->Add(this->updateCourseRoom);
                    this->updateCoursePanel->Controls->Add(this->label5);
                    this->updateCoursePanel->Controls->Add(this->label6);
                    this->updateCoursePanel->Controls->Add(this->updateCourseRegisStart);
                    this->updateCoursePanel->Controls->Add(this->label7);
                    this->updateCoursePanel->Controls->Add(this->label8);
                    this->updateCoursePanel->Controls->Add(this->label9);
                    this->updateCoursePanel->Controls->Add(this->updateCourseRegisEnd);
                    this->updateCoursePanel->Location = System::Drawing::Point(470, 21);
                    this->updateCoursePanel->Name = L"updateCoursePanel";
                    this->updateCoursePanel->Size = System::Drawing::Size(537, 599);
                    this->updateCoursePanel->TabIndex = 66;
                    this->updateCoursePanel->Visible = false;
                    this->updateCoursePanel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::stdViewSBUI_MouseMove);
                    //
                    // updateCourseD2
                    //
                    this->updateCourseD2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->updateCourseD2->Cursor = System::Windows::Forms::Cursors::Default;
                    this->updateCourseD2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
                    this->updateCourseD2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->updateCourseD2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->updateCourseD2->ForeColor = System::Drawing::Color::White;
                    this->updateCourseD2->FormattingEnabled = true;
                    this->updateCourseD2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
                    this->updateCourseD2->Items->AddRange(gcnew cli::array<System::Object ^>(6) { L"Mon", L"Tue", L"Wed", L"Thu", L"Fri", L"Sat" });
                    this->updateCourseD2->Location = System::Drawing::Point(148, 468);
                    this->updateCourseD2->Name = L"updateCourseD2";
                    this->updateCourseD2->Size = System::Drawing::Size(137, 33);
                    this->updateCourseD2->TabIndex = 109;
                    this->updateCourseD2->SelectedIndexChanged += gcnew System::EventHandler(this, &functionScreen::updateCourseD2_SelectedIndexChanged);
                    //
                    // updateCourseS2
                    //
                    this->updateCourseS2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->updateCourseS2->Cursor = System::Windows::Forms::Cursors::Default;
                    this->updateCourseS2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
                    this->updateCourseS2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->updateCourseS2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->updateCourseS2->ForeColor = System::Drawing::Color::White;
                    this->updateCourseS2->FormattingEnabled = true;
                    this->updateCourseS2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
                    this->updateCourseS2->Items->AddRange(gcnew cli::array<System::Object ^>(4) { L"07:30 - 09:10", L"09:30 - 11:30", L"13:30 - 15:30",
                        L"15:30 - 17:10" });
                    this->updateCourseS2->Location = System::Drawing::Point(315, 468);
                    this->updateCourseS2->Name = L"updateCourseS2";
                    this->updateCourseS2->Size = System::Drawing::Size(179, 33);
                    this->updateCourseS2->TabIndex = 110;
                    this->updateCourseS2->SelectedIndexChanged += gcnew System::EventHandler(this, &functionScreen::updateCourseS2_SelectedIndexChanged);
                    //
                    // updateCourseD1
                    //
                    this->updateCourseD1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->updateCourseD1->Cursor = System::Windows::Forms::Cursors::Default;
                    this->updateCourseD1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
                    this->updateCourseD1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->updateCourseD1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->updateCourseD1->ForeColor = System::Drawing::Color::White;
                    this->updateCourseD1->FormattingEnabled = true;
                    this->updateCourseD1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
                    this->updateCourseD1->Items->AddRange(gcnew cli::array<System::Object ^>(6) { L"Mon", L"Tue", L"Wed", L"Thu", L"Fri", L"Sat" });
                    this->updateCourseD1->Location = System::Drawing::Point(148, 425);
                    this->updateCourseD1->Name = L"updateCourseD1";
                    this->updateCourseD1->Size = System::Drawing::Size(137, 33);
                    this->updateCourseD1->TabIndex = 107;
                    this->updateCourseD1->SelectedIndexChanged += gcnew System::EventHandler(this, &functionScreen::updateCourseD1_SelectedIndexChanged);
                    //
                    // updateCourseS1
                    //
                    this->updateCourseS1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->updateCourseS1->Cursor = System::Windows::Forms::Cursors::Default;
                    this->updateCourseS1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
                    this->updateCourseS1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->updateCourseS1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->updateCourseS1->ForeColor = System::Drawing::Color::White;
                    this->updateCourseS1->FormattingEnabled = true;
                    this->updateCourseS1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
                    this->updateCourseS1->Items->AddRange(gcnew cli::array<System::Object ^>(4) { L"07:30 - 09:10", L"09:30 - 11:30", L"13:30 - 15:30",
                        L"15:30 - 17:10" });
                    this->updateCourseS1->Location = System::Drawing::Point(315, 425);
                    this->updateCourseS1->Name = L"updateCourseS1";
                    this->updateCourseS1->Size = System::Drawing::Size(179, 33);
                    this->updateCourseS1->TabIndex = 108;
                    this->updateCourseS1->SelectedIndexChanged += gcnew System::EventHandler(this, &functionScreen::updateCourseS1_SelectedIndexChanged);
                    //
                    // labelWorkspaceName
                    //
                    this->labelWorkspaceName->AutoSize = true;
                    this->labelWorkspaceName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->labelWorkspaceName->ForeColor = System::Drawing::Color::White;
                    this->labelWorkspaceName->Location = System::Drawing::Point(3, 16);
                    this->labelWorkspaceName->Name = L"labelWorkspaceName";
                    this->labelWorkspaceName->Size = System::Drawing::Size(123, 25);
                    this->labelWorkspaceName->TabIndex = 21;
                    this->labelWorkspaceName->Text = L"Course name";
                    //
                    // updateCourseName
                    //
                    this->updateCourseName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->updateCourseName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->updateCourseName->ForeColor = System::Drawing::SystemColors::Control;
                    this->updateCourseName->Location = System::Drawing::Point(6, 53);
                    this->updateCourseName->Margin = System::Windows::Forms::Padding(5);
                    this->updateCourseName->Name = L"updateCourseName";
                    this->updateCourseName->Size = System::Drawing::Size(525, 31);
                    this->updateCourseName->TabIndex = 100;
                    this->updateCourseName->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &functionScreen::updateCourseName_KeyUp);
                    //
                    // btnSave
                    //
                    this->btnSave->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->btnSave->BackColor = System::Drawing::Color::DodgerBlue;
                    this->btnSave->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
                    this->btnSave->FlatAppearance->BorderColor = System::Drawing::Color::White;
                    this->btnSave->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
                    this->btnSave->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnSave->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->btnSave->ForeColor = System::Drawing::Color::White;
                    this->btnSave->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
                    this->btnSave->Location = System::Drawing::Point(399, 544);
                    this->btnSave->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
                    this->btnSave->Name = L"btnSave";
                    this->btnSave->Size = System::Drawing::Size(112, 39);
                    this->btnSave->TabIndex = 111;
                    this->btnSave->Text = L"Save";
                    this->btnSave->UseMnemonic = false;
                    this->btnSave->UseVisualStyleBackColor = false;
                    this->btnSave->Click += gcnew System::EventHandler(this, &functionScreen::btnSave_Click);
                    //
                    // btRevertChanges
                    //
                    this->btRevertChanges->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->btRevertChanges->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btRevertChanges->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->btRevertChanges->ForeColor = System::Drawing::SystemColors::ButtonFace;
                    this->btRevertChanges->Location = System::Drawing::Point(241, 544);
                    this->btRevertChanges->Name = L"btRevertChanges";
                    this->btRevertChanges->Size = System::Drawing::Size(152, 39);
                    this->btRevertChanges->TabIndex = 112;
                    this->btRevertChanges->Text = L"Revert Changes";
                    this->btRevertChanges->UseVisualStyleBackColor = true;
                    this->btRevertChanges->Click += gcnew System::EventHandler(this, &functionScreen::btRevertChanges_Click);
                    //
                    // label1
                    //
                    this->label1->AutoSize = true;
                    this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label1->ForeColor = System::Drawing::Color::White;
                    this->label1->Location = System::Drawing::Point(3, 112);
                    this->label1->Name = L"label1";
                    this->label1->Size = System::Drawing::Size(164, 25);
                    this->label1->TabIndex = 29;
                    this->label1->Text = L"Number of credits";
                    //
                    // updateCourseCre
                    //
                    this->updateCourseCre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->updateCourseCre->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->updateCourseCre->ForeColor = System::Drawing::SystemColors::Control;
                    this->updateCourseCre->Location = System::Drawing::Point(6, 149);
                    this->updateCourseCre->Margin = System::Windows::Forms::Padding(5);
                    this->updateCourseCre->Name = L"updateCourseCre";
                    this->updateCourseCre->Size = System::Drawing::Size(144, 31);
                    this->updateCourseCre->TabIndex = 101;
                    this->updateCourseCre->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &functionScreen::updateCourseCre_KeyUp);
                    //
                    // label2
                    //
                    this->label2->AutoSize = true;
                    this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label2->ForeColor = System::Drawing::Color::White;
                    this->label2->Location = System::Drawing::Point(213, 112);
                    this->label2->Name = L"label2";
                    this->label2->Size = System::Drawing::Size(172, 25);
                    this->label2->TabIndex = 31;
                    this->label2->Text = L"Maximum students";
                    //
                    // label10
                    //
                    this->label10->AutoSize = true;
                    this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
                    this->label10->ForeColor = System::Drawing::Color::White;
                    this->label10->Location = System::Drawing::Point(44, 473);
                    this->label10->Name = L"label10";
                    this->label10->Size = System::Drawing::Size(80, 23);
                    this->label10->TabIndex = 57;
                    this->label10->Text = L"Session 2";
                    //
                    // updateCourseMaxSt
                    //
                    this->updateCourseMaxSt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->updateCourseMaxSt->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->updateCourseMaxSt->ForeColor = System::Drawing::SystemColors::Control;
                    this->updateCourseMaxSt->Location = System::Drawing::Point(218, 149);
                    this->updateCourseMaxSt->Margin = System::Windows::Forms::Padding(5);
                    this->updateCourseMaxSt->Name = L"updateCourseMaxSt";
                    this->updateCourseMaxSt->Size = System::Drawing::Size(159, 31);
                    this->updateCourseMaxSt->TabIndex = 102;
                    this->updateCourseMaxSt->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &functionScreen::updateCourseMaxSt_KeyUp);
                    //
                    // label3
                    //
                    this->label3->AutoSize = true;
                    this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label3->ForeColor = System::Drawing::Color::White;
                    this->label3->Location = System::Drawing::Point(1, 208);
                    this->label3->Name = L"label3";
                    this->label3->Size = System::Drawing::Size(133, 25);
                    this->label3->TabIndex = 33;
                    this->label3->Text = L"Lecturer name";
                    //
                    // updateCourseLecturer
                    //
                    this->updateCourseLecturer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->updateCourseLecturer->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->updateCourseLecturer->ForeColor = System::Drawing::SystemColors::Control;
                    this->updateCourseLecturer->Location = System::Drawing::Point(6, 245);
                    this->updateCourseLecturer->Margin = System::Windows::Forms::Padding(5);
                    this->updateCourseLecturer->Name = L"updateCourseLecturer";
                    this->updateCourseLecturer->Size = System::Drawing::Size(526, 31);
                    this->updateCourseLecturer->TabIndex = 104;
                    this->updateCourseLecturer->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &functionScreen::updateCourseLecturer_KeyUp);
                    //
                    // label4
                    //
                    this->label4->AutoSize = true;
                    this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label4->ForeColor = System::Drawing::Color::White;
                    this->label4->Location = System::Drawing::Point(431, 112);
                    this->label4->Name = L"label4";
                    this->label4->Size = System::Drawing::Size(60, 25);
                    this->label4->TabIndex = 35;
                    this->label4->Text = L"Room";
                    //
                    // updateCourseRoom
                    //
                    this->updateCourseRoom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->updateCourseRoom->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->updateCourseRoom->ForeColor = System::Drawing::SystemColors::Control;
                    this->updateCourseRoom->Location = System::Drawing::Point(432, 149);
                    this->updateCourseRoom->Margin = System::Windows::Forms::Padding(5);
                    this->updateCourseRoom->Name = L"updateCourseRoom";
                    this->updateCourseRoom->Size = System::Drawing::Size(100, 31);
                    this->updateCourseRoom->TabIndex = 103;
                    this->updateCourseRoom->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &functionScreen::updateCourseRoom_KeyUp);
                    //
                    // label5
                    //
                    this->label5->AutoSize = true;
                    this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label5->ForeColor = System::Drawing::Color::White;
                    this->label5->Location = System::Drawing::Point(3, 392);
                    this->label5->Name = L"label5";
                    this->label5->Size = System::Drawing::Size(89, 25);
                    this->label5->TabIndex = 37;
                    this->label5->Text = L"Schedule";
                    //
                    // label6
                    //
                    this->label6->AutoSize = true;
                    this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
                    this->label6->ForeColor = System::Drawing::Color::White;
                    this->label6->Location = System::Drawing::Point(44, 430);
                    this->label6->Name = L"label6";
                    this->label6->Size = System::Drawing::Size(80, 23);
                    this->label6->TabIndex = 39;
                    this->label6->Text = L"Session 1";
                    //
                    // updateCourseRegisStart
                    //
                    this->updateCourseRegisStart->CalendarFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.75F));
                    this->updateCourseRegisStart->CalendarTitleBackColor = System::Drawing::SystemColors::ControlText;
                    this->updateCourseRegisStart->CalendarTitleForeColor = System::Drawing::SystemColors::ButtonHighlight;
                    this->updateCourseRegisStart->CustomFormat = L"dd/MM/yyyy";
                    this->updateCourseRegisStart->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->updateCourseRegisStart->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
                    this->updateCourseRegisStart->Location = System::Drawing::Point(113, 337);
                    this->updateCourseRegisStart->Name = L"updateCourseRegisStart";
                    this->updateCourseRegisStart->Size = System::Drawing::Size(153, 31);
                    this->updateCourseRegisStart->TabIndex = 105;
                    this->updateCourseRegisStart->CloseUp += gcnew System::EventHandler(this, &functionScreen::updateCourseRegisStart_CloseUp);
                    //
                    // label7
                    //
                    this->label7->AutoSize = true;
                    this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label7->ForeColor = System::Drawing::Color::White;
                    this->label7->Location = System::Drawing::Point(3, 304);
                    this->label7->Name = L"label7";
                    this->label7->Size = System::Drawing::Size(154, 25);
                    this->label7->TabIndex = 42;
                    this->label7->Text = L"Registration date";
                    //
                    // label8
                    //
                    this->label8->AutoSize = true;
                    this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
                    this->label8->ForeColor = System::Drawing::Color::White;
                    this->label8->Location = System::Drawing::Point(44, 341);
                    this->label8->Name = L"label8";
                    this->label8->Size = System::Drawing::Size(53, 23);
                    this->label8->TabIndex = 44;
                    this->label8->Text = L"From:";
                    //
                    // label9
                    //
                    this->label9->AutoSize = true;
                    this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
                    this->label9->ForeColor = System::Drawing::Color::White;
                    this->label9->Location = System::Drawing::Point(294, 341);
                    this->label9->Name = L"label9";
                    this->label9->Size = System::Drawing::Size(31, 23);
                    this->label9->TabIndex = 45;
                    this->label9->Text = L"To:";
                    //
                    // updateCourseRegisEnd
                    //
                    this->updateCourseRegisEnd->CalendarFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.75F));
                    this->updateCourseRegisEnd->CustomFormat = L"dd/MM/yyyy";
                    this->updateCourseRegisEnd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->updateCourseRegisEnd->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
                    this->updateCourseRegisEnd->Location = System::Drawing::Point(341, 337);
                    this->updateCourseRegisEnd->Name = L"updateCourseRegisEnd";
                    this->updateCourseRegisEnd->Size = System::Drawing::Size(153, 31);
                    this->updateCourseRegisEnd->TabIndex = 106;
                    this->updateCourseRegisEnd->CloseUp += gcnew System::EventHandler(this, &functionScreen::updateCourseRegisEnd_CloseUp);
                    //
                    // panelSchoolYear
                    //
                    this->panelSchoolYear->Controls->Add(this->btnFinish);
                    this->panelSchoolYear->Controls->Add(this->btnCancelAll);
                    this->panelSchoolYear->Controls->Add(this->treeViewClass);
                    this->panelSchoolYear->Controls->Add(this->panel4);
                    this->panelSchoolYear->Controls->Add(this->panel3);
                    this->panelSchoolYear->Controls->Add(this->endYear);
                    this->panelSchoolYear->Controls->Add(this->label12);
                    this->panelSchoolYear->Controls->Add(this->startYear);
                    this->panelSchoolYear->Controls->Add(this->label13);
                    this->panelSchoolYear->Controls->Add(this->classInput);
                    this->panelSchoolYear->Controls->Add(this->label11);
                    this->panelSchoolYear->Controls->Add(this->btnAddClass);
                    this->panelSchoolYear->Controls->Add(this->panelAddStudent);
                    this->panelSchoolYear->Location = System::Drawing::Point(279, 83);
                    this->panelSchoolYear->Name = L"panelSchoolYear";
                    this->panelSchoolYear->Size = System::Drawing::Size(1130, 643);
                    this->panelSchoolYear->TabIndex = 41;
                    this->panelSchoolYear->Visible = false;
                    this->panelSchoolYear->Click += gcnew System::EventHandler(this, &functionScreen::panelSchoolYear_Click);
                    this->panelSchoolYear->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::stdViewSBUI_MouseMove);
                    //
                    // btnFinish
                    //
                    this->btnFinish->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->btnFinish->BackColor = System::Drawing::Color::DodgerBlue;
                    this->btnFinish->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
                    this->btnFinish->FlatAppearance->BorderColor = System::Drawing::Color::White;
                    this->btnFinish->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
                    this->btnFinish->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->btnFinish->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnFinish->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->btnFinish->ForeColor = System::Drawing::Color::White;
                    this->btnFinish->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
                    this->btnFinish->Location = System::Drawing::Point(739, 599);
                    this->btnFinish->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
                    this->btnFinish->Name = L"btnFinish";
                    this->btnFinish->Size = System::Drawing::Size(148, 39);
                    this->btnFinish->TabIndex = 153;
                    this->btnFinish->Text = L"Finish";
                    this->btnFinish->UseMnemonic = false;
                    this->btnFinish->UseVisualStyleBackColor = false;
                    this->btnFinish->Click += gcnew System::EventHandler(this, &functionScreen::btnFinish_Click);
                    //
                    // btnCancelAll
                    //
                    this->btnCancelAll->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->btnCancelAll->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
                    this->btnCancelAll->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->btnCancelAll->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnCancelAll->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->btnCancelAll->ForeColor = System::Drawing::SystemColors::ButtonFace;
                    this->btnCancelAll->Location = System::Drawing::Point(906, 599);
                    this->btnCancelAll->Name = L"btnCancelAll";
                    this->btnCancelAll->Size = System::Drawing::Size(148, 39);
                    this->btnCancelAll->TabIndex = 154;
                    this->btnCancelAll->Text = L"Cancel All";
                    this->btnCancelAll->UseVisualStyleBackColor = true;
                    this->btnCancelAll->Click += gcnew System::EventHandler(this, &functionScreen::btnCancelAll_Click);
                    //
                    // treeViewClass
                    //
                    this->treeViewClass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->treeViewClass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
                    this->treeViewClass->ForeColor = System::Drawing::SystemColors::Info;
                    this->treeViewClass->Location = System::Drawing::Point(59, 237);
                    this->treeViewClass->Name = L"treeViewClass";
                    this->treeViewClass->Size = System::Drawing::Size(334, 386);
                    this->treeViewClass->TabIndex = 68;
                    this->treeViewClass->NodeMouseClick += gcnew System::Windows::Forms::TreeNodeMouseClickEventHandler(this, &functionScreen::treeViewClass_NodeMouseClick);
                    this->treeViewClass->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::stdViewSBUI_MouseMove);
                    //
                    // panel4
                    //
                    this->panel4->BackColor = System::Drawing::Color::White;
                    this->panel4->ForeColor = System::Drawing::Color::White;
                    this->panel4->Location = System::Drawing::Point(246, 113);
                    this->panel4->Name = L"panel4";
                    this->panel4->Size = System::Drawing::Size(143, 2);
                    this->panel4->TabIndex = 46;
                    //
                    // panel3
                    //
                    this->panel3->BackColor = System::Drawing::Color::White;
                    this->panel3->ForeColor = System::Drawing::Color::White;
                    this->panel3->Location = System::Drawing::Point(59, 113);
                    this->panel3->Name = L"panel3";
                    this->panel3->Size = System::Drawing::Size(143, 2);
                    this->panel3->TabIndex = 43;
                    //
                    // endYear
                    //
                    this->endYear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->endYear->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->endYear->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
                    this->endYear->ForeColor = System::Drawing::SystemColors::Info;
                    this->endYear->HideSelection = false;
                    this->endYear->Location = System::Drawing::Point(246, 88);
                    this->endYear->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->endYear->Name = L"endYear";
                    this->endYear->Size = System::Drawing::Size(143, 27);
                    this->endYear->TabIndex = 141;
                    //
                    // label12
                    //
                    this->label12->AutoSize = true;
                    this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label12->ForeColor = System::Drawing::Color::White;
                    this->label12->Location = System::Drawing::Point(240, 49);
                    this->label12->Name = L"label12";
                    this->label12->Size = System::Drawing::Size(85, 25);
                    this->label12->TabIndex = 44;
                    this->label12->Text = L"End year";
                    //
                    // startYear
                    //
                    this->startYear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->startYear->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->startYear->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
                    this->startYear->ForeColor = System::Drawing::SystemColors::Info;
                    this->startYear->HideSelection = false;
                    this->startYear->Location = System::Drawing::Point(59, 88);
                    this->startYear->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->startYear->Name = L"startYear";
                    this->startYear->Size = System::Drawing::Size(143, 27);
                    this->startYear->TabIndex = 140;
                    //
                    // label13
                    //
                    this->label13->AutoSize = true;
                    this->label13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label13->ForeColor = System::Drawing::Color::White;
                    this->label13->Location = System::Drawing::Point(52, 143);
                    this->label13->Name = L"label13";
                    this->label13->Size = System::Drawing::Size(73, 25);
                    this->label13->TabIndex = 37;
                    this->label13->Text = L"Classes";
                    //
                    // classInput
                    //
                    this->classInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->classInput->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
                    this->classInput->ForeColor = System::Drawing::SystemColors::Control;
                    this->classInput->Location = System::Drawing::Point(58, 185);
                    this->classInput->Margin = System::Windows::Forms::Padding(5);
                    this->classInput->Name = L"classInput";
                    this->classInput->Size = System::Drawing::Size(144, 34);
                    this->classInput->TabIndex = 142;
                    this->classInput->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &functionScreen::classInput_KeyDown);
                    //
                    // label11
                    //
                    this->label11->AutoSize = true;
                    this->label11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label11->ForeColor = System::Drawing::Color::White;
                    this->label11->Location = System::Drawing::Point(53, 49);
                    this->label11->Name = L"label11";
                    this->label11->Size = System::Drawing::Size(91, 25);
                    this->label11->TabIndex = 31;
                    this->label11->Text = L"Start year";
                    //
                    // btnAddClass
                    //
                    this->btnAddClass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->btnAddClass->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
                    this->btnAddClass->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->btnAddClass->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnAddClass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->btnAddClass->ForeColor = System::Drawing::SystemColors::ButtonFace;
                    this->btnAddClass->Location = System::Drawing::Point(246, 185);
                    this->btnAddClass->Name = L"btnAddClass";
                    this->btnAddClass->Size = System::Drawing::Size(140, 34);
                    this->btnAddClass->TabIndex = 143;
                    this->btnAddClass->Text = L"Add class";
                    this->btnAddClass->UseVisualStyleBackColor = true;
                    this->btnAddClass->Click += gcnew System::EventHandler(this, &functionScreen::btnAddClass_Click);
                    //
                    // panelAddStudent
                    //
                    this->panelAddStudent->Controls->Add(this->btnFromFile);
                    this->panelAddStudent->Controls->Add(this->gender);
                    this->panelAddStudent->Controls->Add(this->label14);
                    this->panelAddStudent->Controls->Add(this->studentID);
                    this->panelAddStudent->Controls->Add(this->btnAddStd);
                    this->panelAddStudent->Controls->Add(this->btnCancel);
                    this->panelAddStudent->Controls->Add(this->label15);
                    this->panelAddStudent->Controls->Add(this->fName);
                    this->panelAddStudent->Controls->Add(this->label16);
                    this->panelAddStudent->Controls->Add(this->lName);
                    this->panelAddStudent->Controls->Add(this->label18);
                    this->panelAddStudent->Controls->Add(this->label19);
                    this->panelAddStudent->Controls->Add(this->socialID);
                    this->panelAddStudent->Controls->Add(this->doB);
                    this->panelAddStudent->Controls->Add(this->label22);
                    this->panelAddStudent->Location = System::Drawing::Point(537, 24);
                    this->panelAddStudent->Name = L"panelAddStudent";
                    this->panelAddStudent->Size = System::Drawing::Size(537, 599);
                    this->panelAddStudent->TabIndex = 67;
                    this->panelAddStudent->Visible = false;
                    this->panelAddStudent->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::stdViewSBUI_MouseMove);
                    //
                    // btnFromFile
                    //
                    this->btnFromFile->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->btnFromFile->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->btnFromFile->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
                    this->btnFromFile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnFromFile->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->btnFromFile->ForeColor = System::Drawing::SystemColors::ButtonFace;
                    this->btnFromFile->Location = System::Drawing::Point(35, 531);
                    this->btnFromFile->Name = L"btnFromFile";
                    this->btnFromFile->Size = System::Drawing::Size(148, 39);
                    this->btnFromFile->TabIndex = 151;
                    this->btnFromFile->Text = L"From file...";
                    this->btnFromFile->UseVisualStyleBackColor = true;
                    this->btnFromFile->Click += gcnew System::EventHandler(this, &functionScreen::btnFromFile_Click);
                    //
                    // gender
                    //
                    this->gender->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->gender->Cursor = System::Windows::Forms::Cursors::Default;
                    this->gender->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
                    this->gender->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->gender->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->gender->ForeColor = System::Drawing::Color::White;
                    this->gender->FormattingEnabled = true;
                    this->gender->ImeMode = System::Windows::Forms::ImeMode::NoControl;
                    this->gender->Items->AddRange(gcnew cli::array<System::Object ^>(3) { L"Female", L"Male", L"Don\'t want to answer" });
                    this->gender->Location = System::Drawing::Point(7, 373);
                    this->gender->Name = L"gender";
                    this->gender->Size = System::Drawing::Size(227, 33);
                    this->gender->TabIndex = 148;
                    this->gender->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &functionScreen::gender_KeyDown);
                    //
                    // label14
                    //
                    this->label14->AutoSize = true;
                    this->label14->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label14->ForeColor = System::Drawing::Color::White;
                    this->label14->Location = System::Drawing::Point(2, 59);
                    this->label14->Name = L"label14";
                    this->label14->Size = System::Drawing::Size(99, 25);
                    this->label14->TabIndex = 21;
                    this->label14->Text = L"Student ID";
                    //
                    // studentID
                    //
                    this->studentID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->studentID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->studentID->ForeColor = System::Drawing::SystemColors::Control;
                    this->studentID->Location = System::Drawing::Point(7, 91);
                    this->studentID->Margin = System::Windows::Forms::Padding(5);
                    this->studentID->Name = L"studentID";
                    this->studentID->Size = System::Drawing::Size(525, 31);
                    this->studentID->TabIndex = 144;
                    this->studentID->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &functionScreen::studentID_KeyDown);
                    //
                    // btnAddStd
                    //
                    this->btnAddStd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->btnAddStd->BackColor = System::Drawing::Color::DodgerBlue;
                    this->btnAddStd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
                    this->btnAddStd->FlatAppearance->BorderColor = System::Drawing::Color::White;
                    this->btnAddStd->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
                    this->btnAddStd->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->btnAddStd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnAddStd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->btnAddStd->ForeColor = System::Drawing::Color::White;
                    this->btnAddStd->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
                    this->btnAddStd->Location = System::Drawing::Point(202, 531);
                    this->btnAddStd->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
                    this->btnAddStd->Name = L"btnAddStd";
                    this->btnAddStd->Size = System::Drawing::Size(148, 39);
                    this->btnAddStd->TabIndex = 150;
                    this->btnAddStd->Text = L"Add";
                    this->btnAddStd->UseMnemonic = false;
                    this->btnAddStd->UseVisualStyleBackColor = false;
                    this->btnAddStd->Click += gcnew System::EventHandler(this, &functionScreen::btnAddStd_Click);
                    //
                    // btnCancel
                    //
                    this->btnCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->btnCancel->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->btnCancel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
                    this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->btnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->btnCancel->ForeColor = System::Drawing::SystemColors::ButtonFace;
                    this->btnCancel->Location = System::Drawing::Point(369, 531);
                    this->btnCancel->Name = L"btnCancel";
                    this->btnCancel->Size = System::Drawing::Size(148, 39);
                    this->btnCancel->TabIndex = 152;
                    this->btnCancel->Text = L"Cancel";
                    this->btnCancel->UseVisualStyleBackColor = true;
                    this->btnCancel->Click += gcnew System::EventHandler(this, &functionScreen::btnCancel_Click);
                    //
                    // label15
                    //
                    this->label15->AutoSize = true;
                    this->label15->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label15->ForeColor = System::Drawing::Color::White;
                    this->label15->Location = System::Drawing::Point(2, 153);
                    this->label15->Name = L"label15";
                    this->label15->Size = System::Drawing::Size(99, 25);
                    this->label15->TabIndex = 29;
                    this->label15->Text = L"First name";
                    //
                    // fName
                    //
                    this->fName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->fName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->fName->ForeColor = System::Drawing::SystemColors::Control;
                    this->fName->Location = System::Drawing::Point(7, 185);
                    this->fName->Margin = System::Windows::Forms::Padding(5);
                    this->fName->Name = L"fName";
                    this->fName->Size = System::Drawing::Size(144, 31);
                    this->fName->TabIndex = 145;
                    this->fName->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &functionScreen::fName_KeyDown);
                    //
                    // label16
                    //
                    this->label16->AutoSize = true;
                    this->label16->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label16->ForeColor = System::Drawing::Color::White;
                    this->label16->Location = System::Drawing::Point(188, 153);
                    this->label16->Name = L"label16";
                    this->label16->Size = System::Drawing::Size(97, 25);
                    this->label16->TabIndex = 31;
                    this->label16->Text = L"Last name";
                    //
                    // lName
                    //
                    this->lName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->lName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->lName->ForeColor = System::Drawing::SystemColors::Control;
                    this->lName->Location = System::Drawing::Point(193, 185);
                    this->lName->Margin = System::Windows::Forms::Padding(5);
                    this->lName->Name = L"lName";
                    this->lName->Size = System::Drawing::Size(343, 31);
                    this->lName->TabIndex = 146;
                    this->lName->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &functionScreen::lName_KeyDown);
                    //
                    // label18
                    //
                    this->label18->AutoSize = true;
                    this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label18->ForeColor = System::Drawing::Color::White;
                    this->label18->Location = System::Drawing::Point(2, 341);
                    this->label18->Name = L"label18";
                    this->label18->Size = System::Drawing::Size(74, 25);
                    this->label18->TabIndex = 33;
                    this->label18->Text = L"Gender";
                    //
                    // label19
                    //
                    this->label19->AutoSize = true;
                    this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label19->ForeColor = System::Drawing::Color::White;
                    this->label19->Location = System::Drawing::Point(2, 247);
                    this->label19->Name = L"label19";
                    this->label19->Size = System::Drawing::Size(85, 25);
                    this->label19->TabIndex = 35;
                    this->label19->Text = L"Social ID";
                    //
                    // socialID
                    //
                    this->socialID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->socialID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->socialID->ForeColor = System::Drawing::SystemColors::Control;
                    this->socialID->Location = System::Drawing::Point(7, 279);
                    this->socialID->Margin = System::Windows::Forms::Padding(5);
                    this->socialID->Name = L"socialID";
                    this->socialID->Size = System::Drawing::Size(531, 31);
                    this->socialID->TabIndex = 147;
                    this->socialID->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &functionScreen::socialID_KeyDown);
                    //
                    // doB
                    //
                    this->doB->CalendarFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.75F));
                    this->doB->CalendarTitleBackColor = System::Drawing::SystemColors::ControlText;
                    this->doB->CalendarTitleForeColor = System::Drawing::SystemColors::ButtonHighlight;
                    this->doB->CustomFormat = L"dd/MM/yyyy";
                    this->doB->DropDownAlign = System::Windows::Forms::LeftRightAlignment::Right;
                    this->doB->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->doB->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
                    this->doB->Location = System::Drawing::Point(7, 469);
                    this->doB->Name = L"doB";
                    this->doB->Size = System::Drawing::Size(153, 31);
                    this->doB->TabIndex = 149;
                    this->doB->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &functionScreen::doB_KeyDown);
                    //
                    // label22
                    //
                    this->label22->AutoSize = true;
                    this->label22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label22->ForeColor = System::Drawing::Color::White;
                    this->label22->Location = System::Drawing::Point(2, 437);
                    this->label22->Name = L"label22";
                    this->label22->Size = System::Drawing::Size(118, 25);
                    this->label22->TabIndex = 42;
                    this->label22->Text = L"Date of birth";
                    //
                    // newSemesterUI
                    //
                    this->newSemesterUI->Controls->Add(this->semStartDate);
                    this->newSemesterUI->Controls->Add(this->semEndDate);
                    this->newSemesterUI->Controls->Add(this->newSemYear);
                    this->newSemesterUI->Controls->Add(this->inputedCourseList);
                    this->newSemesterUI->Controls->Add(this->label17);
                    this->newSemesterUI->Controls->Add(this->label20);
                    this->newSemesterUI->Controls->Add(this->newSem);
                    this->newSemesterUI->Controls->Add(this->label21);
                    this->newSemesterUI->Controls->Add(this->panel8);
                    this->newSemesterUI->Location = System::Drawing::Point(278, 86);
                    this->newSemesterUI->Name = L"newSemesterUI";
                    this->newSemesterUI->Size = System::Drawing::Size(1130, 643);
                    this->newSemesterUI->TabIndex = 42;
                    this->newSemesterUI->Visible = false;
                    this->newSemesterUI->Click += gcnew System::EventHandler(this, &functionScreen::newSemesterUI_Click);
                    this->newSemesterUI->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::stdViewSBUI_MouseMove);
                    //
                    // semStartDate
                    //
                    this->semStartDate->CalendarFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.75F));
                    this->semStartDate->CalendarTitleBackColor = System::Drawing::SystemColors::ControlText;
                    this->semStartDate->CalendarTitleForeColor = System::Drawing::SystemColors::ButtonHighlight;
                    this->semStartDate->CustomFormat = L"dd/MM/yyyy";
                    this->semStartDate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->semStartDate->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
                    this->semStartDate->Location = System::Drawing::Point(58, 174);
                    this->semStartDate->Name = L"semStartDate";
                    this->semStartDate->Size = System::Drawing::Size(153, 31);
                    this->semStartDate->TabIndex = 122;
                    //
                    // semEndDate
                    //
                    this->semEndDate->CalendarFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.75F));
                    this->semEndDate->CustomFormat = L"dd/MM/yyyy";
                    this->semEndDate->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->semEndDate->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
                    this->semEndDate->Location = System::Drawing::Point(247, 174);
                    this->semEndDate->Name = L"semEndDate";
                    this->semEndDate->Size = System::Drawing::Size(153, 31);
                    this->semEndDate->TabIndex = 123;
                    //
                    // newSemYear
                    //
                    this->newSemYear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->newSemYear->Cursor = System::Windows::Forms::Cursors::Default;
                    this->newSemYear->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
                    this->newSemYear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->newSemYear->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->newSemYear->ForeColor = System::Drawing::Color::White;
                    this->newSemYear->FormattingEnabled = true;
                    this->newSemYear->ImeMode = System::Windows::Forms::ImeMode::NoControl;
                    this->newSemYear->Location = System::Drawing::Point(204, 82);
                    this->newSemYear->Name = L"newSemYear";
                    this->newSemYear->Size = System::Drawing::Size(196, 33);
                    this->newSemYear->TabIndex = 121;
                    //
                    // inputedCourseList
                    //
                    this->inputedCourseList->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->inputedCourseList->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->inputedCourseList->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
                    this->inputedCourseList->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
                    this->inputedCourseList->ItemHeight = 28;
                    this->inputedCourseList->Location = System::Drawing::Point(64, 224);
                    this->inputedCourseList->Name = L"inputedCourseList";
                    this->inputedCourseList->Size = System::Drawing::Size(326, 392);
                    this->inputedCourseList->TabIndex = 71;
                    this->inputedCourseList->SelectedIndexChanged += gcnew System::EventHandler(this, &functionScreen::inputedCourseList_SelectedIndexChanged);
                    //
                    // label17
                    //
                    this->label17->AutoSize = true;
                    this->label17->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label17->ForeColor = System::Drawing::Color::White;
                    this->label17->Location = System::Drawing::Point(240, 139);
                    this->label17->Name = L"label17";
                    this->label17->Size = System::Drawing::Size(86, 25);
                    this->label17->TabIndex = 44;
                    this->label17->Text = L"End date";
                    //
                    // label20
                    //
                    this->label20->AutoSize = true;
                    this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label20->ForeColor = System::Drawing::Color::White;
                    this->label20->Location = System::Drawing::Point(53, 48);
                    this->label20->Name = L"label20";
                    this->label20->Size = System::Drawing::Size(89, 25);
                    this->label20->TabIndex = 37;
                    this->label20->Text = L"Semester";
                    //
                    // newSem
                    //
                    this->newSem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->newSem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
                    this->newSem->ForeColor = System::Drawing::SystemColors::Control;
                    this->newSem->Location = System::Drawing::Point(59, 82);
                    this->newSem->Margin = System::Windows::Forms::Padding(5);
                    this->newSem->Name = L"newSem";
                    this->newSem->Size = System::Drawing::Size(102, 34);
                    this->newSem->TabIndex = 120;
                    //
                    // label21
                    //
                    this->label21->AutoSize = true;
                    this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label21->ForeColor = System::Drawing::Color::White;
                    this->label21->Location = System::Drawing::Point(53, 139);
                    this->label21->Name = L"label21";
                    this->label21->Size = System::Drawing::Size(92, 25);
                    this->label21->TabIndex = 31;
                    this->label21->Text = L"Start date";
                    //
                    // panel8
                    //
                    this->panel8->Controls->Add(this->label23);
                    this->panel8->Controls->Add(this->nsCourseID);
                    this->panel8->Controls->Add(this->nsBtnDone);
                    this->panel8->Controls->Add(this->nsBtnAdd);
                    this->panel8->Controls->Add(this->nsBtnCancel);
                    this->panel8->Controls->Add(this->nsDay2);
                    this->panel8->Controls->Add(this->nsSession2);
                    this->panel8->Controls->Add(this->nsDay1);
                    this->panel8->Controls->Add(this->nsSession1);
                    this->panel8->Controls->Add(this->label29);
                    this->panel8->Controls->Add(this->nsCourseName);
                    this->panel8->Controls->Add(this->label30);
                    this->panel8->Controls->Add(this->nsCredit);
                    this->panel8->Controls->Add(this->label31);
                    this->panel8->Controls->Add(this->label32);
                    this->panel8->Controls->Add(this->nsMaxStd);
                    this->panel8->Controls->Add(this->label33);
                    this->panel8->Controls->Add(this->nsLecturerName);
                    this->panel8->Controls->Add(this->label34);
                    this->panel8->Controls->Add(this->nsRoom);
                    this->panel8->Controls->Add(this->label35);
                    this->panel8->Controls->Add(this->label36);
                    this->panel8->Controls->Add(this->nsRegisStart);
                    this->panel8->Controls->Add(this->label37);
                    this->panel8->Controls->Add(this->label38);
                    this->panel8->Controls->Add(this->label39);
                    this->panel8->Controls->Add(this->nsRegisEnd);
                    this->panel8->Location = System::Drawing::Point(533, 31);
                    this->panel8->Name = L"panel8";
                    this->panel8->Size = System::Drawing::Size(537, 599);
                    this->panel8->TabIndex = 72;
                    this->panel8->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::stdViewSBUI_MouseMove);
                    //
                    // label23
                    //
                    this->label23->AutoSize = true;
                    this->label23->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label23->ForeColor = System::Drawing::Color::White;
                    this->label23->Location = System::Drawing::Point(3, 112);
                    this->label23->Name = L"label23";
                    this->label23->Size = System::Drawing::Size(94, 25);
                    this->label23->TabIndex = 71;
                    this->label23->Text = L"Course ID";
                    //
                    // nsCourseID
                    //
                    this->nsCourseID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->nsCourseID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->nsCourseID->ForeColor = System::Drawing::SystemColors::Control;
                    this->nsCourseID->Location = System::Drawing::Point(6, 149);
                    this->nsCourseID->Margin = System::Windows::Forms::Padding(5);
                    this->nsCourseID->Name = L"nsCourseID";
                    this->nsCourseID->Size = System::Drawing::Size(112, 31);
                    this->nsCourseID->TabIndex = 125;
                    //
                    // nsBtnDone
                    //
                    this->nsBtnDone->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->nsBtnDone->BackColor = System::Drawing::Color::DodgerBlue;
                    this->nsBtnDone->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
                    this->nsBtnDone->FlatAppearance->BorderColor = System::Drawing::Color::White;
                    this->nsBtnDone->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
                    this->nsBtnDone->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->nsBtnDone->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->nsBtnDone->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->nsBtnDone->ForeColor = System::Drawing::Color::White;
                    this->nsBtnDone->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
                    this->nsBtnDone->Location = System::Drawing::Point(28, 534);
                    this->nsBtnDone->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
                    this->nsBtnDone->Name = L"nsBtnDone";
                    this->nsBtnDone->Size = System::Drawing::Size(148, 39);
                    this->nsBtnDone->TabIndex = 137;
                    this->nsBtnDone->Text = L"Done";
                    this->nsBtnDone->UseMnemonic = false;
                    this->nsBtnDone->UseVisualStyleBackColor = false;
                    this->nsBtnDone->Click += gcnew System::EventHandler(this, &functionScreen::nsBtnDone_Click);
                    //
                    // nsBtnAdd
                    //
                    this->nsBtnAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->nsBtnAdd->BackColor = System::Drawing::Color::DodgerBlue;
                    this->nsBtnAdd->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
                    this->nsBtnAdd->FlatAppearance->BorderColor = System::Drawing::Color::White;
                    this->nsBtnAdd->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
                    this->nsBtnAdd->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->nsBtnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->nsBtnAdd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->nsBtnAdd->ForeColor = System::Drawing::Color::White;
                    this->nsBtnAdd->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
                    this->nsBtnAdd->Location = System::Drawing::Point(198, 534);
                    this->nsBtnAdd->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
                    this->nsBtnAdd->Name = L"nsBtnAdd";
                    this->nsBtnAdd->Size = System::Drawing::Size(148, 39);
                    this->nsBtnAdd->TabIndex = 136;
                    this->nsBtnAdd->Text = L"Add";
                    this->nsBtnAdd->UseMnemonic = false;
                    this->nsBtnAdd->UseVisualStyleBackColor = false;
                    this->nsBtnAdd->Click += gcnew System::EventHandler(this, &functionScreen::nsBtnAdd_Click);
                    //
                    // nsBtnCancel
                    //
                    this->nsBtnCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->nsBtnCancel->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->nsBtnCancel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
                    this->nsBtnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->nsBtnCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->nsBtnCancel->ForeColor = System::Drawing::SystemColors::ButtonFace;
                    this->nsBtnCancel->Location = System::Drawing::Point(365, 534);
                    this->nsBtnCancel->Name = L"nsBtnCancel";
                    this->nsBtnCancel->Size = System::Drawing::Size(148, 39);
                    this->nsBtnCancel->TabIndex = 138;
                    this->nsBtnCancel->Text = L"Cancel";
                    this->nsBtnCancel->UseVisualStyleBackColor = true;
                    this->nsBtnCancel->Click += gcnew System::EventHandler(this, &functionScreen::nsBtnCancel_Click);
                    //
                    // nsDay2
                    //
                    this->nsDay2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->nsDay2->Cursor = System::Windows::Forms::Cursors::Default;
                    this->nsDay2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
                    this->nsDay2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->nsDay2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->nsDay2->ForeColor = System::Drawing::Color::White;
                    this->nsDay2->FormattingEnabled = true;
                    this->nsDay2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
                    this->nsDay2->Items->AddRange(gcnew cli::array<System::Object ^>(6) { L"Mon", L"Tue", L"Wed", L"Thu", L"Fri", L"Sat" });
                    this->nsDay2->Location = System::Drawing::Point(148, 468);
                    this->nsDay2->Name = L"nsDay2";
                    this->nsDay2->Size = System::Drawing::Size(137, 33);
                    this->nsDay2->TabIndex = 134;
                    //
                    // nsSession2
                    //
                    this->nsSession2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->nsSession2->Cursor = System::Windows::Forms::Cursors::Default;
                    this->nsSession2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
                    this->nsSession2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->nsSession2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->nsSession2->ForeColor = System::Drawing::Color::White;
                    this->nsSession2->FormattingEnabled = true;
                    this->nsSession2->ImeMode = System::Windows::Forms::ImeMode::NoControl;
                    this->nsSession2->Items->AddRange(gcnew cli::array<System::Object ^>(4) { L"07:30 - 09:10", L"09:30 - 11:30", L"13:30 - 15:30",
                        L"15:30 - 17:10" });
                    this->nsSession2->Location = System::Drawing::Point(315, 468);
                    this->nsSession2->Name = L"nsSession2";
                    this->nsSession2->Size = System::Drawing::Size(179, 33);
                    this->nsSession2->TabIndex = 135;
                    //
                    // nsDay1
                    //
                    this->nsDay1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->nsDay1->Cursor = System::Windows::Forms::Cursors::Default;
                    this->nsDay1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
                    this->nsDay1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->nsDay1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->nsDay1->ForeColor = System::Drawing::Color::White;
                    this->nsDay1->FormattingEnabled = true;
                    this->nsDay1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
                    this->nsDay1->Items->AddRange(gcnew cli::array<System::Object ^>(6) { L"Mon", L"Tue", L"Wed", L"Thu", L"Fri", L"Sat" });
                    this->nsDay1->Location = System::Drawing::Point(148, 425);
                    this->nsDay1->Name = L"nsDay1";
                    this->nsDay1->Size = System::Drawing::Size(137, 33);
                    this->nsDay1->TabIndex = 132;
                    //
                    // nsSession1
                    //
                    this->nsSession1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->nsSession1->Cursor = System::Windows::Forms::Cursors::Default;
                    this->nsSession1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
                    this->nsSession1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->nsSession1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->nsSession1->ForeColor = System::Drawing::Color::White;
                    this->nsSession1->FormattingEnabled = true;
                    this->nsSession1->ImeMode = System::Windows::Forms::ImeMode::NoControl;
                    this->nsSession1->Items->AddRange(gcnew cli::array<System::Object ^>(4) { L"07:30 - 09:10", L"09:30 - 11:30", L"13:30 - 15:30",
                        L"15:30 - 17:10" });
                    this->nsSession1->Location = System::Drawing::Point(315, 425);
                    this->nsSession1->Name = L"nsSession1";
                    this->nsSession1->Size = System::Drawing::Size(179, 33);
                    this->nsSession1->TabIndex = 133;
                    //
                    // label29
                    //
                    this->label29->AutoSize = true;
                    this->label29->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label29->ForeColor = System::Drawing::Color::White;
                    this->label29->Location = System::Drawing::Point(3, 16);
                    this->label29->Name = L"label29";
                    this->label29->Size = System::Drawing::Size(123, 25);
                    this->label29->TabIndex = 21;
                    this->label29->Text = L"Course name";
                    //
                    // nsCourseName
                    //
                    this->nsCourseName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->nsCourseName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->nsCourseName->ForeColor = System::Drawing::SystemColors::Control;
                    this->nsCourseName->Location = System::Drawing::Point(6, 53);
                    this->nsCourseName->Margin = System::Windows::Forms::Padding(5);
                    this->nsCourseName->Name = L"nsCourseName";
                    this->nsCourseName->Size = System::Drawing::Size(525, 31);
                    this->nsCourseName->TabIndex = 124;
                    //
                    // label30
                    //
                    this->label30->AutoSize = true;
                    this->label30->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label30->ForeColor = System::Drawing::Color::White;
                    this->label30->Location = System::Drawing::Point(151, 112);
                    this->label30->Name = L"label30";
                    this->label30->Size = System::Drawing::Size(71, 25);
                    this->label30->TabIndex = 29;
                    this->label30->Text = L"Credits";
                    //
                    // nsCredit
                    //
                    this->nsCredit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->nsCredit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->nsCredit->ForeColor = System::Drawing::SystemColors::Control;
                    this->nsCredit->Location = System::Drawing::Point(160, 149);
                    this->nsCredit->Margin = System::Windows::Forms::Padding(5);
                    this->nsCredit->Name = L"nsCredit";
                    this->nsCredit->Size = System::Drawing::Size(85, 31);
                    this->nsCredit->TabIndex = 126;
                    //
                    // label31
                    //
                    this->label31->AutoSize = true;
                    this->label31->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label31->ForeColor = System::Drawing::Color::White;
                    this->label31->Location = System::Drawing::Point(282, 112);
                    this->label31->Name = L"label31";
                    this->label31->Size = System::Drawing::Size(124, 25);
                    this->label31->TabIndex = 31;
                    this->label31->Text = L"Max students";
                    //
                    // label32
                    //
                    this->label32->AutoSize = true;
                    this->label32->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
                    this->label32->ForeColor = System::Drawing::Color::White;
                    this->label32->Location = System::Drawing::Point(44, 473);
                    this->label32->Name = L"label32";
                    this->label32->Size = System::Drawing::Size(80, 23);
                    this->label32->TabIndex = 57;
                    this->label32->Text = L"Session 2";
                    //
                    // nsMaxStd
                    //
                    this->nsMaxStd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->nsMaxStd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->nsMaxStd->ForeColor = System::Drawing::SystemColors::Control;
                    this->nsMaxStd->Location = System::Drawing::Point(287, 149);
                    this->nsMaxStd->Margin = System::Windows::Forms::Padding(5);
                    this->nsMaxStd->Name = L"nsMaxStd";
                    this->nsMaxStd->Size = System::Drawing::Size(119, 31);
                    this->nsMaxStd->TabIndex = 127;
                    //
                    // label33
                    //
                    this->label33->AutoSize = true;
                    this->label33->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label33->ForeColor = System::Drawing::Color::White;
                    this->label33->Location = System::Drawing::Point(1, 208);
                    this->label33->Name = L"label33";
                    this->label33->Size = System::Drawing::Size(133, 25);
                    this->label33->TabIndex = 33;
                    this->label33->Text = L"Lecturer name";
                    //
                    // nsLecturerName
                    //
                    this->nsLecturerName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->nsLecturerName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->nsLecturerName->ForeColor = System::Drawing::SystemColors::Control;
                    this->nsLecturerName->Location = System::Drawing::Point(6, 245);
                    this->nsLecturerName->Margin = System::Windows::Forms::Padding(5);
                    this->nsLecturerName->Name = L"nsLecturerName";
                    this->nsLecturerName->Size = System::Drawing::Size(526, 31);
                    this->nsLecturerName->TabIndex = 129;
                    //
                    // label34
                    //
                    this->label34->AutoSize = true;
                    this->label34->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label34->ForeColor = System::Drawing::Color::White;
                    this->label34->Location = System::Drawing::Point(443, 112);
                    this->label34->Name = L"label34";
                    this->label34->Size = System::Drawing::Size(60, 25);
                    this->label34->TabIndex = 35;
                    this->label34->Text = L"Room";
                    //
                    // nsRoom
                    //
                    this->nsRoom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->nsRoom->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->nsRoom->ForeColor = System::Drawing::SystemColors::Control;
                    this->nsRoom->Location = System::Drawing::Point(448, 149);
                    this->nsRoom->Margin = System::Windows::Forms::Padding(5);
                    this->nsRoom->Name = L"nsRoom";
                    this->nsRoom->Size = System::Drawing::Size(84, 31);
                    this->nsRoom->TabIndex = 128;
                    //
                    // label35
                    //
                    this->label35->AutoSize = true;
                    this->label35->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label35->ForeColor = System::Drawing::Color::White;
                    this->label35->Location = System::Drawing::Point(3, 392);
                    this->label35->Name = L"label35";
                    this->label35->Size = System::Drawing::Size(89, 25);
                    this->label35->TabIndex = 37;
                    this->label35->Text = L"Schedule";
                    //
                    // label36
                    //
                    this->label36->AutoSize = true;
                    this->label36->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
                    this->label36->ForeColor = System::Drawing::Color::White;
                    this->label36->Location = System::Drawing::Point(44, 430);
                    this->label36->Name = L"label36";
                    this->label36->Size = System::Drawing::Size(80, 23);
                    this->label36->TabIndex = 39;
                    this->label36->Text = L"Session 1";
                    //
                    // nsRegisStart
                    //
                    this->nsRegisStart->CalendarFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.75F));
                    this->nsRegisStart->CalendarTitleBackColor = System::Drawing::SystemColors::ControlText;
                    this->nsRegisStart->CalendarTitleForeColor = System::Drawing::SystemColors::ButtonHighlight;
                    this->nsRegisStart->CustomFormat = L"dd/MM/yyyy";
                    this->nsRegisStart->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->nsRegisStart->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
                    this->nsRegisStart->Location = System::Drawing::Point(113, 337);
                    this->nsRegisStart->Name = L"nsRegisStart";
                    this->nsRegisStart->Size = System::Drawing::Size(153, 31);
                    this->nsRegisStart->TabIndex = 130;
                    //
                    // label37
                    //
                    this->label37->AutoSize = true;
                    this->label37->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label37->ForeColor = System::Drawing::Color::White;
                    this->label37->Location = System::Drawing::Point(3, 304);
                    this->label37->Name = L"label37";
                    this->label37->Size = System::Drawing::Size(154, 25);
                    this->label37->TabIndex = 42;
                    this->label37->Text = L"Registration date";
                    //
                    // label38
                    //
                    this->label38->AutoSize = true;
                    this->label38->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
                    this->label38->ForeColor = System::Drawing::Color::White;
                    this->label38->Location = System::Drawing::Point(44, 341);
                    this->label38->Name = L"label38";
                    this->label38->Size = System::Drawing::Size(53, 23);
                    this->label38->TabIndex = 44;
                    this->label38->Text = L"From:";
                    //
                    // label39
                    //
                    this->label39->AutoSize = true;
                    this->label39->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
                    this->label39->ForeColor = System::Drawing::Color::White;
                    this->label39->Location = System::Drawing::Point(294, 341);
                    this->label39->Name = L"label39";
                    this->label39->Size = System::Drawing::Size(31, 23);
                    this->label39->TabIndex = 45;
                    this->label39->Text = L"To:";
                    //
                    // nsRegisEnd
                    //
                    this->nsRegisEnd->CalendarFont = (gcnew System::Drawing::Font(L"Segoe UI", 8.75F));
                    this->nsRegisEnd->CustomFormat = L"dd/MM/yyyy";
                    this->nsRegisEnd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->nsRegisEnd->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
                    this->nsRegisEnd->Location = System::Drawing::Point(341, 337);
                    this->nsRegisEnd->Name = L"nsRegisEnd";
                    this->nsRegisEnd->Size = System::Drawing::Size(153, 31);
                    this->nsRegisEnd->TabIndex = 131;
                    //
                    // updateStdRes
                    //
                    this->updateStdRes->Controls->Add(this->treeViewsbU);
                    this->updateStdRes->Controls->Add(this->panel6);
                    this->updateStdRes->Controls->Add(this->sbUStdID);
                    this->updateStdRes->Controls->Add(this->label26);
                    this->updateStdRes->Controls->Add(this->sbUSearch);
                    this->updateStdRes->Controls->Add(this->sbUCoursePan);
                    this->updateStdRes->Location = System::Drawing::Point(279, 83);
                    this->updateStdRes->Name = L"updateStdRes";
                    this->updateStdRes->Size = System::Drawing::Size(1130, 643);
                    this->updateStdRes->TabIndex = 155;
                    this->updateStdRes->Visible = false;
                    this->updateStdRes->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::stdViewSBUI_MouseMove);
                    //
                    // treeViewsbU
                    //
                    this->treeViewsbU->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->treeViewsbU->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
                    this->treeViewsbU->ForeColor = System::Drawing::SystemColors::Info;
                    this->treeViewsbU->Location = System::Drawing::Point(59, 134);
                    this->treeViewsbU->Name = L"treeViewsbU";
                    this->treeViewsbU->Size = System::Drawing::Size(334, 489);
                    this->treeViewsbU->TabIndex = 68;
                    this->treeViewsbU->NodeMouseClick += gcnew System::Windows::Forms::TreeNodeMouseClickEventHandler(this, &functionScreen::treeViewsbU_NodeMouseClick);
                    this->treeViewsbU->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::stdViewSBUI_MouseMove);
                    //
                    // panel6
                    //
                    this->panel6->BackColor = System::Drawing::Color::White;
                    this->panel6->ForeColor = System::Drawing::Color::White;
                    this->panel6->Location = System::Drawing::Point(59, 113);
                    this->panel6->Name = L"panel6";
                    this->panel6->Size = System::Drawing::Size(166, 2);
                    this->panel6->TabIndex = 43;
                    //
                    // sbUStdID
                    //
                    this->sbUStdID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->sbUStdID->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->sbUStdID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
                    this->sbUStdID->ForeColor = System::Drawing::SystemColors::Info;
                    this->sbUStdID->HideSelection = false;
                    this->sbUStdID->Location = System::Drawing::Point(59, 88);
                    this->sbUStdID->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->sbUStdID->Name = L"sbUStdID";
                    this->sbUStdID->Size = System::Drawing::Size(166, 27);
                    this->sbUStdID->TabIndex = 140;
                    this->sbUStdID->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &functionScreen::sbUStdID_KeyDown);
                    //
                    // label26
                    //
                    this->label26->AutoSize = true;
                    this->label26->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label26->ForeColor = System::Drawing::Color::White;
                    this->label26->Location = System::Drawing::Point(53, 49);
                    this->label26->Name = L"label26";
                    this->label26->Size = System::Drawing::Size(99, 25);
                    this->label26->TabIndex = 31;
                    this->label26->Text = L"Student ID";
                    //
                    // sbUSearch
                    //
                    this->sbUSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->sbUSearch->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
                    this->sbUSearch->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->sbUSearch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->sbUSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->sbUSearch->ForeColor = System::Drawing::SystemColors::ButtonFace;
                    this->sbUSearch->Location = System::Drawing::Point(253, 81);
                    this->sbUSearch->Name = L"sbUSearch";
                    this->sbUSearch->Size = System::Drawing::Size(140, 34);
                    this->sbUSearch->TabIndex = 143;
                    this->sbUSearch->Text = L"Search";
                    this->sbUSearch->UseVisualStyleBackColor = true;
                    this->sbUSearch->Click += gcnew System::EventHandler(this, &functionScreen::sbUSearch_Click);
                    //
                    // sbUCoursePan
                    //
                    this->sbUCoursePan->Controls->Add(this->label24);
                    this->sbUCoursePan->Controls->Add(this->sbUCourse);
                    this->sbUCoursePan->Controls->Add(this->label27);
                    this->sbUCoursePan->Controls->Add(this->midMark);
                    this->sbUCoursePan->Controls->Add(this->sbUbtnSave);
                    this->sbUCoursePan->Controls->Add(this->label28);
                    this->sbUCoursePan->Controls->Add(this->finMark);
                    this->sbUCoursePan->Controls->Add(this->label40);
                    this->sbUCoursePan->Controls->Add(this->oMark);
                    this->sbUCoursePan->Controls->Add(this->label42);
                    this->sbUCoursePan->Controls->Add(this->totMark);
                    this->sbUCoursePan->Location = System::Drawing::Point(537, 24);
                    this->sbUCoursePan->Name = L"sbUCoursePan";
                    this->sbUCoursePan->Size = System::Drawing::Size(537, 599);
                    this->sbUCoursePan->TabIndex = 67;
                    this->sbUCoursePan->Visible = false;
                    this->sbUCoursePan->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::stdViewSBUI_MouseMove);
                    //
                    // label24
                    //
                    this->label24->AutoSize = true;
                    this->label24->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label24->ForeColor = System::Drawing::Color::White;
                    this->label24->Location = System::Drawing::Point(55, 105);
                    this->label24->Name = L"label24";
                    this->label24->Size = System::Drawing::Size(71, 25);
                    this->label24->TabIndex = 154;
                    this->label24->Text = L"Course";
                    //
                    // sbUCourse
                    //
                    this->sbUCourse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->sbUCourse->Cursor = System::Windows::Forms::Cursors::Default;
                    this->sbUCourse->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
                    this->sbUCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->sbUCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->sbUCourse->ForeColor = System::Drawing::Color::White;
                    this->sbUCourse->FormattingEnabled = true;
                    this->sbUCourse->ImeMode = System::Windows::Forms::ImeMode::NoControl;
                    this->sbUCourse->Items->AddRange(gcnew cli::array<System::Object ^>(3) { L"Female", L"Male", L"Don\'t want to answer" });
                    this->sbUCourse->Location = System::Drawing::Point(60, 136);
                    this->sbUCourse->Name = L"sbUCourse";
                    this->sbUCourse->Size = System::Drawing::Size(227, 33);
                    this->sbUCourse->TabIndex = 153;
                    this->sbUCourse->SelectedIndexChanged += gcnew System::EventHandler(this, &functionScreen::sbUCourse_SelectedIndexChanged);
                    //
                    // label27
                    //
                    this->label27->AutoSize = true;
                    this->label27->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label27->ForeColor = System::Drawing::Color::White;
                    this->label27->Location = System::Drawing::Point(55, 190);
                    this->label27->Name = L"label27";
                    this->label27->Size = System::Drawing::Size(132, 25);
                    this->label27->TabIndex = 21;
                    this->label27->Text = L"Midterm Mark";
                    //
                    // midMark
                    //
                    this->midMark->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->midMark->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->midMark->ForeColor = System::Drawing::SystemColors::Control;
                    this->midMark->Location = System::Drawing::Point(60, 222);
                    this->midMark->Margin = System::Windows::Forms::Padding(5);
                    this->midMark->Name = L"midMark";
                    this->midMark->Size = System::Drawing::Size(127, 31);
                    this->midMark->TabIndex = 144;
                    //
                    // sbUbtnSave
                    //
                    this->sbUbtnSave->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->sbUbtnSave->BackColor = System::Drawing::Color::DodgerBlue;
                    this->sbUbtnSave->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
                    this->sbUbtnSave->FlatAppearance->BorderColor = System::Drawing::Color::White;
                    this->sbUbtnSave->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
                    this->sbUbtnSave->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->sbUbtnSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->sbUbtnSave->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->sbUbtnSave->ForeColor = System::Drawing::Color::White;
                    this->sbUbtnSave->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
                    this->sbUbtnSave->Location = System::Drawing::Point(163, 372);
                    this->sbUbtnSave->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
                    this->sbUbtnSave->Name = L"sbUbtnSave";
                    this->sbUbtnSave->Size = System::Drawing::Size(148, 39);
                    this->sbUbtnSave->TabIndex = 150;
                    this->sbUbtnSave->Text = L"Save";
                    this->sbUbtnSave->UseMnemonic = false;
                    this->sbUbtnSave->UseVisualStyleBackColor = false;
                    this->sbUbtnSave->Click += gcnew System::EventHandler(this, &functionScreen::sbUbtnSave_Click);
                    //
                    // label28
                    //
                    this->label28->AutoSize = true;
                    this->label28->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label28->ForeColor = System::Drawing::Color::White;
                    this->label28->Location = System::Drawing::Point(264, 190);
                    this->label28->Name = L"label28";
                    this->label28->Size = System::Drawing::Size(100, 25);
                    this->label28->TabIndex = 29;
                    this->label28->Text = L"Final Mark";
                    //
                    // finMark
                    //
                    this->finMark->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->finMark->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->finMark->ForeColor = System::Drawing::SystemColors::Control;
                    this->finMark->Location = System::Drawing::Point(269, 222);
                    this->finMark->Margin = System::Windows::Forms::Padding(5);
                    this->finMark->Name = L"finMark";
                    this->finMark->Size = System::Drawing::Size(127, 31);
                    this->finMark->TabIndex = 145;
                    //
                    // label40
                    //
                    this->label40->AutoSize = true;
                    this->label40->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label40->ForeColor = System::Drawing::Color::White;
                    this->label40->Location = System::Drawing::Point(55, 279);
                    this->label40->Name = L"label40";
                    this->label40->Size = System::Drawing::Size(108, 25);
                    this->label40->TabIndex = 31;
                    this->label40->Text = L"Other Mark";
                    //
                    // oMark
                    //
                    this->oMark->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->oMark->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->oMark->ForeColor = System::Drawing::SystemColors::Control;
                    this->oMark->Location = System::Drawing::Point(60, 311);
                    this->oMark->Margin = System::Windows::Forms::Padding(5);
                    this->oMark->Name = L"oMark";
                    this->oMark->Size = System::Drawing::Size(127, 31);
                    this->oMark->TabIndex = 146;
                    //
                    // label42
                    //
                    this->label42->AutoSize = true;
                    this->label42->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label42->ForeColor = System::Drawing::Color::White;
                    this->label42->Location = System::Drawing::Point(264, 279);
                    this->label42->Name = L"label42";
                    this->label42->Size = System::Drawing::Size(100, 25);
                    this->label42->TabIndex = 35;
                    this->label42->Text = L"Total Mark";
                    //
                    // totMark
                    //
                    this->totMark->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->totMark->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->totMark->ForeColor = System::Drawing::SystemColors::Control;
                    this->totMark->Location = System::Drawing::Point(269, 311);
                    this->totMark->Margin = System::Windows::Forms::Padding(5);
                    this->totMark->Name = L"totMark";
                    this->totMark->Size = System::Drawing::Size(127, 31);
                    this->totMark->TabIndex = 147;
                    //
                    // courseExStd
                    //
                    this->courseExStd->Controls->Add(this->label25);
                    this->courseExStd->Controls->Add(this->coExStdInput);
                    this->courseExStd->Controls->Add(this->coExStdBtn);
                    this->courseExStd->Location = System::Drawing::Point(450, 243);
                    this->courseExStd->Name = L"courseExStd";
                    this->courseExStd->Size = System::Drawing::Size(537, 214);
                    this->courseExStd->TabIndex = 157;
                    this->courseExStd->Visible = false;
                    this->courseExStd->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::stdViewSBUI_MouseMove);
                    //
                    // label25
                    //
                    this->label25->Anchor = System::Windows::Forms::AnchorStyles::Left;
                    this->label25->AutoSize = true;
                    this->label25->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label25->ForeColor = System::Drawing::Color::White;
                    this->label25->Location = System::Drawing::Point(51, 89);
                    this->label25->Name = L"label25";
                    this->label25->Size = System::Drawing::Size(71, 25);
                    this->label25->TabIndex = 154;
                    this->label25->Text = L"Course";
                    //
                    // coExStdInput
                    //
                    this->coExStdInput->Anchor = System::Windows::Forms::AnchorStyles::Left;
                    this->coExStdInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->coExStdInput->Cursor = System::Windows::Forms::Cursors::Default;
                    this->coExStdInput->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
                    this->coExStdInput->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->coExStdInput->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->coExStdInput->ForeColor = System::Drawing::Color::White;
                    this->coExStdInput->FormattingEnabled = true;
                    this->coExStdInput->ImeMode = System::Windows::Forms::ImeMode::NoControl;
                    this->coExStdInput->Items->AddRange(gcnew cli::array<System::Object ^>(3) { L"Female", L"Male", L"Don\'t want to answer" });
                    this->coExStdInput->Location = System::Drawing::Point(56, 120);
                    this->coExStdInput->Name = L"coExStdInput";
                    this->coExStdInput->Size = System::Drawing::Size(227, 33);
                    this->coExStdInput->TabIndex = 153;
                    //
                    // coExStdBtn
                    //
                    this->coExStdBtn->Anchor = System::Windows::Forms::AnchorStyles::Right;
                    this->coExStdBtn->BackColor = System::Drawing::Color::DodgerBlue;
                    this->coExStdBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
                    this->coExStdBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
                    this->coExStdBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
                    this->coExStdBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->coExStdBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->coExStdBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->coExStdBtn->ForeColor = System::Drawing::Color::White;
                    this->coExStdBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
                    this->coExStdBtn->Location = System::Drawing::Point(308, 117);
                    this->coExStdBtn->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
                    this->coExStdBtn->Name = L"coExStdBtn";
                    this->coExStdBtn->Size = System::Drawing::Size(148, 39);
                    this->coExStdBtn->TabIndex = 150;
                    this->coExStdBtn->Text = L"Export";
                    this->coExStdBtn->UseMnemonic = false;
                    this->coExStdBtn->UseVisualStyleBackColor = false;
                    this->coExStdBtn->Click += gcnew System::EventHandler(this, &functionScreen::coExStdBtn_Click);
                    //
                    // imSBpanel
                    //
                    this->imSBpanel->Controls->Add(this->panel5);
                    this->imSBpanel->Controls->Add(this->imSBFileInput);
                    this->imSBpanel->Controls->Add(this->imSBbtn);
                    this->imSBpanel->Controls->Add(this->label41);
                    this->imSBpanel->Controls->Add(this->imSBCourse);
                    this->imSBpanel->Controls->Add(this->imSBExBtn);
                    this->imSBpanel->Location = System::Drawing::Point(450, 212);
                    this->imSBpanel->Name = L"imSBpanel";
                    this->imSBpanel->Size = System::Drawing::Size(537, 284);
                    this->imSBpanel->TabIndex = 158;
                    this->imSBpanel->Visible = false;
                    this->imSBpanel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::stdViewSBUI_MouseMove);
                    //
                    // panel5
                    //
                    this->panel5->Anchor = System::Windows::Forms::AnchorStyles::Top;
                    this->panel5->BackColor = System::Drawing::Color::White;
                    this->panel5->ForeColor = System::Drawing::Color::White;
                    this->panel5->Location = System::Drawing::Point(56, 67);
                    this->panel5->Name = L"panel5";
                    this->panel5->Size = System::Drawing::Size(400, 2);
                    this->panel5->TabIndex = 156;
                    //
                    // imSBFileInput
                    //
                    this->imSBFileInput->Anchor = System::Windows::Forms::AnchorStyles::Top;
                    this->imSBFileInput->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->imSBFileInput->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->imSBFileInput->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
                    this->imSBFileInput->ForeColor = System::Drawing::SystemColors::Info;
                    this->imSBFileInput->HideSelection = false;
                    this->imSBFileInput->Location = System::Drawing::Point(56, 42);
                    this->imSBFileInput->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->imSBFileInput->Name = L"imSBFileInput";
                    this->imSBFileInput->Size = System::Drawing::Size(400, 27);
                    this->imSBFileInput->TabIndex = 157;
                    this->imSBFileInput->Click += gcnew System::EventHandler(this, &functionScreen::imSBFileInput_Click);
                    //
                    // imSBbtn
                    //
                    this->imSBbtn->Anchor = System::Windows::Forms::AnchorStyles::Right;
                    this->imSBbtn->BackColor = System::Drawing::Color::DodgerBlue;
                    this->imSBbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
                    this->imSBbtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
                    this->imSBbtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
                    this->imSBbtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->imSBbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->imSBbtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->imSBbtn->ForeColor = System::Drawing::Color::White;
                    this->imSBbtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
                    this->imSBbtn->Location = System::Drawing::Point(308, 89);
                    this->imSBbtn->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
                    this->imSBbtn->Name = L"imSBbtn";
                    this->imSBbtn->Size = System::Drawing::Size(150, 39);
                    this->imSBbtn->TabIndex = 155;
                    this->imSBbtn->Text = L"Open...";
                    this->imSBbtn->UseMnemonic = false;
                    this->imSBbtn->UseVisualStyleBackColor = false;
                    this->imSBbtn->Click += gcnew System::EventHandler(this, &functionScreen::imSBbtn_Click);
                    //
                    // label41
                    //
                    this->label41->Anchor = System::Windows::Forms::AnchorStyles::Left;
                    this->label41->AutoSize = true;
                    this->label41->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label41->ForeColor = System::Drawing::Color::White;
                    this->label41->Location = System::Drawing::Point(51, 124);
                    this->label41->Name = L"label41";
                    this->label41->Size = System::Drawing::Size(71, 25);
                    this->label41->TabIndex = 154;
                    this->label41->Text = L"Course";
                    //
                    // imSBCourse
                    //
                    this->imSBCourse->Anchor = System::Windows::Forms::AnchorStyles::Left;
                    this->imSBCourse->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->imSBCourse->Cursor = System::Windows::Forms::Cursors::Default;
                    this->imSBCourse->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
                    this->imSBCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->imSBCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->imSBCourse->ForeColor = System::Drawing::Color::White;
                    this->imSBCourse->FormattingEnabled = true;
                    this->imSBCourse->ImeMode = System::Windows::Forms::ImeMode::NoControl;
                    this->imSBCourse->Items->AddRange(gcnew cli::array<System::Object ^>(3) { L"Female", L"Male", L"Don\'t want to answer" });
                    this->imSBCourse->Location = System::Drawing::Point(56, 155);
                    this->imSBCourse->Name = L"imSBCourse";
                    this->imSBCourse->Size = System::Drawing::Size(227, 33);
                    this->imSBCourse->TabIndex = 153;
                    //
                    // imSBExBtn
                    //
                    this->imSBExBtn->Anchor = System::Windows::Forms::AnchorStyles::Right;
                    this->imSBExBtn->BackColor = System::Drawing::Color::DodgerBlue;
                    this->imSBExBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
                    this->imSBExBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
                    this->imSBExBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
                    this->imSBExBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->imSBExBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->imSBExBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->imSBExBtn->ForeColor = System::Drawing::Color::White;
                    this->imSBExBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
                    this->imSBExBtn->Location = System::Drawing::Point(308, 152);
                    this->imSBExBtn->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
                    this->imSBExBtn->Name = L"imSBExBtn";
                    this->imSBExBtn->Size = System::Drawing::Size(148, 39);
                    this->imSBExBtn->TabIndex = 150;
                    this->imSBExBtn->Text = L"Import";
                    this->imSBExBtn->UseMnemonic = false;
                    this->imSBExBtn->UseVisualStyleBackColor = false;
                    this->imSBExBtn->Click += gcnew System::EventHandler(this, &functionScreen::imSBExBtn_Click);
                    //
                    // profilePanel
                    //
                    this->profilePanel->Controls->Add(this->profileDob);
                    this->profilePanel->Controls->Add(this->button3);
                    this->profilePanel->Controls->Add(this->profileGender);
                    this->profilePanel->Controls->Add(this->label44);
                    this->profilePanel->Controls->Add(this->label46);
                    this->profilePanel->Controls->Add(this->profileSocialID);
                    this->profilePanel->Controls->Add(this->label43);
                    this->profilePanel->Controls->Add(this->label57);
                    this->profilePanel->Controls->Add(this->profileName);
                    this->profilePanel->Controls->Add(this->label45);
                    this->profilePanel->Location = System::Drawing::Point(279, 83);
                    this->profilePanel->Name = L"profilePanel";
                    this->profilePanel->Size = System::Drawing::Size(1130, 643);
                    this->profilePanel->TabIndex = 159;
                    this->profilePanel->Visible = false;
                    this->profilePanel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::stdViewSBUI_MouseMove);
                    //
                    // profileDob
                    //
                    this->profileDob->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->profileDob->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->profileDob->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
                    this->profileDob->ForeColor = System::Drawing::SystemColors::Info;
                    this->profileDob->HideSelection = false;
                    this->profileDob->Location = System::Drawing::Point(411, 395);
                    this->profileDob->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->profileDob->Name = L"profileDob";
                    this->profileDob->ReadOnly = true;
                    this->profileDob->Size = System::Drawing::Size(227, 32);
                    this->profileDob->TabIndex = 172;
                    //
                    // button3
                    //
                    this->button3->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->button3->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Gray;
                    this->button3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
                    this->button3->Location = System::Drawing::Point(499, 478);
                    this->button3->Name = L"button3";
                    this->button3->Size = System::Drawing::Size(148, 39);
                    this->button3->TabIndex = 171;
                    this->button3->Text = L"Close";
                    this->button3->UseVisualStyleBackColor = true;
                    this->button3->Click += gcnew System::EventHandler(this, &functionScreen::button3_Click);
                    //
                    // profileGender
                    //
                    this->profileGender->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->profileGender->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->profileGender->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
                    this->profileGender->ForeColor = System::Drawing::SystemColors::Info;
                    this->profileGender->HideSelection = false;
                    this->profileGender->Location = System::Drawing::Point(411, 313);
                    this->profileGender->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->profileGender->Name = L"profileGender";
                    this->profileGender->ReadOnly = true;
                    this->profileGender->Size = System::Drawing::Size(143, 32);
                    this->profileGender->TabIndex = 170;
                    //
                    // label44
                    //
                    this->label44->AutoSize = true;
                    this->label44->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label44->ForeColor = System::Drawing::Color::White;
                    this->label44->Location = System::Drawing::Point(240, 320);
                    this->label44->Name = L"label44";
                    this->label44->Size = System::Drawing::Size(74, 25);
                    this->label44->TabIndex = 168;
                    this->label44->Text = L"Gender";
                    //
                    // label46
                    //
                    this->label46->Anchor = System::Windows::Forms::AnchorStyles::Top;
                    this->label46->AutoSize = true;
                    this->label46->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20, System::Drawing::FontStyle::Bold));
                    this->label46->ForeColor = System::Drawing::Color::White;
                    this->label46->Location = System::Drawing::Point(497, 64);
                    this->label46->Name = L"label46";
                    this->label46->Size = System::Drawing::Size(153, 46);
                    this->label46->TabIndex = 167;
                    this->label46->Text = L"PROFILE";
                    //
                    // profileSocialID
                    //
                    this->profileSocialID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->profileSocialID->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->profileSocialID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
                    this->profileSocialID->ForeColor = System::Drawing::SystemColors::Info;
                    this->profileSocialID->HideSelection = false;
                    this->profileSocialID->Location = System::Drawing::Point(411, 231);
                    this->profileSocialID->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->profileSocialID->Name = L"profileSocialID";
                    this->profileSocialID->ReadOnly = true;
                    this->profileSocialID->Size = System::Drawing::Size(180, 32);
                    this->profileSocialID->TabIndex = 143;
                    //
                    // label43
                    //
                    this->label43->AutoSize = true;
                    this->label43->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label43->ForeColor = System::Drawing::Color::White;
                    this->label43->Location = System::Drawing::Point(240, 238);
                    this->label43->Name = L"label43";
                    this->label43->Size = System::Drawing::Size(85, 25);
                    this->label43->TabIndex = 141;
                    this->label43->Text = L"Social ID";
                    //
                    // label57
                    //
                    this->label57->AutoSize = true;
                    this->label57->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label57->ForeColor = System::Drawing::Color::White;
                    this->label57->Location = System::Drawing::Point(240, 402);
                    this->label57->Name = L"label57";
                    this->label57->Size = System::Drawing::Size(118, 25);
                    this->label57->TabIndex = 160;
                    this->label57->Text = L"Date of birth";
                    //
                    // profileName
                    //
                    this->profileName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->profileName->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->profileName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
                    this->profileName->ForeColor = System::Drawing::SystemColors::Info;
                    this->profileName->HideSelection = false;
                    this->profileName->Location = System::Drawing::Point(411, 149);
                    this->profileName->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->profileName->Name = L"profileName";
                    this->profileName->ReadOnly = true;
                    this->profileName->Size = System::Drawing::Size(393, 32);
                    this->profileName->TabIndex = 140;
                    //
                    // label45
                    //
                    this->label45->AutoSize = true;
                    this->label45->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label45->ForeColor = System::Drawing::Color::White;
                    this->label45->Location = System::Drawing::Point(240, 156);
                    this->label45->Name = L"label45";
                    this->label45->Size = System::Drawing::Size(94, 25);
                    this->label45->TabIndex = 31;
                    this->label45->Text = L"Full name";
                    //
                    // changePassPanel
                    //
                    this->changePassPanel->Controls->Add(this->changePassBtn);
                    this->changePassPanel->Controls->Add(this->changePassCancel);
                    this->changePassPanel->Controls->Add(this->panel10);
                    this->changePassPanel->Controls->Add(this->newPass2);
                    this->changePassPanel->Controls->Add(this->label49);
                    this->changePassPanel->Controls->Add(this->panel7);
                    this->changePassPanel->Controls->Add(this->panel9);
                    this->changePassPanel->Controls->Add(this->newPass1);
                    this->changePassPanel->Controls->Add(this->label47);
                    this->changePassPanel->Controls->Add(this->oldPass);
                    this->changePassPanel->Controls->Add(this->label48);
                    this->changePassPanel->Location = System::Drawing::Point(515, 166);
                    this->changePassPanel->Name = L"changePassPanel";
                    this->changePassPanel->Size = System::Drawing::Size(702, 447);
                    this->changePassPanel->TabIndex = 161;
                    this->changePassPanel->Visible = false;
                    this->changePassPanel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::stdViewSBUI_MouseMove);
                    //
                    // changePassBtn
                    //
                    this->changePassBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->changePassBtn->BackColor = System::Drawing::Color::DodgerBlue;
                    this->changePassBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
                    this->changePassBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
                    this->changePassBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
                    this->changePassBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->changePassBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->changePassBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->changePassBtn->ForeColor = System::Drawing::Color::White;
                    this->changePassBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
                    this->changePassBtn->Location = System::Drawing::Point(189, 344);
                    this->changePassBtn->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
                    this->changePassBtn->Name = L"changePassBtn";
                    this->changePassBtn->Size = System::Drawing::Size(148, 39);
                    this->changePassBtn->TabIndex = 153;
                    this->changePassBtn->Text = L"Change";
                    this->changePassBtn->UseMnemonic = false;
                    this->changePassBtn->UseVisualStyleBackColor = false;
                    this->changePassBtn->Click += gcnew System::EventHandler(this, &functionScreen::changePassBtn_Click);
                    //
                    // changePassCancel
                    //
                    this->changePassCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->changePassCancel->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->changePassCancel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
                    this->changePassCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->changePassCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->changePassCancel->ForeColor = System::Drawing::SystemColors::ButtonFace;
                    this->changePassCancel->Location = System::Drawing::Point(356, 344);
                    this->changePassCancel->Name = L"changePassCancel";
                    this->changePassCancel->Size = System::Drawing::Size(148, 39);
                    this->changePassCancel->TabIndex = 154;
                    this->changePassCancel->Text = L"Cancel";
                    this->changePassCancel->UseVisualStyleBackColor = true;
                    this->changePassCancel->Click += gcnew System::EventHandler(this, &functionScreen::changePassCancel_Click);
                    //
                    // panel10
                    //
                    this->panel10->BackColor = System::Drawing::Color::White;
                    this->panel10->ForeColor = System::Drawing::Color::White;
                    this->panel10->Location = System::Drawing::Point(197, 305);
                    this->panel10->Name = L"panel10";
                    this->panel10->Size = System::Drawing::Size(296, 2);
                    this->panel10->TabIndex = 149;
                    //
                    // newPass2
                    //
                    this->newPass2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->newPass2->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->newPass2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
                    this->newPass2->ForeColor = System::Drawing::SystemColors::Info;
                    this->newPass2->HideSelection = false;
                    this->newPass2->Location = System::Drawing::Point(197, 280);
                    this->newPass2->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->newPass2->Name = L"newPass2";
                    this->newPass2->PasswordChar = '*';
                    this->newPass2->Size = System::Drawing::Size(296, 27);
                    this->newPass2->TabIndex = 150;
                    this->newPass2->UseSystemPasswordChar = true;
                    this->newPass2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &functionScreen::newPass2_KeyDown);
                    //
                    // label49
                    //
                    this->label49->AutoSize = true;
                    this->label49->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label49->ForeColor = System::Drawing::Color::White;
                    this->label49->Location = System::Drawing::Point(191, 246);
                    this->label49->Name = L"label49";
                    this->label49->Size = System::Drawing::Size(205, 25);
                    this->label49->TabIndex = 148;
                    this->label49->Text = L"Confirm new password";
                    //
                    // panel7
                    //
                    this->panel7->BackColor = System::Drawing::Color::White;
                    this->panel7->ForeColor = System::Drawing::Color::White;
                    this->panel7->Location = System::Drawing::Point(197, 211);
                    this->panel7->Name = L"panel7";
                    this->panel7->Size = System::Drawing::Size(296, 2);
                    this->panel7->TabIndex = 145;
                    //
                    // panel9
                    //
                    this->panel9->BackColor = System::Drawing::Color::White;
                    this->panel9->ForeColor = System::Drawing::Color::White;
                    this->panel9->Location = System::Drawing::Point(197, 123);
                    this->panel9->Name = L"panel9";
                    this->panel9->Size = System::Drawing::Size(296, 2);
                    this->panel9->TabIndex = 143;
                    //
                    // newPass1
                    //
                    this->newPass1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->newPass1->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->newPass1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
                    this->newPass1->ForeColor = System::Drawing::SystemColors::Info;
                    this->newPass1->HideSelection = false;
                    this->newPass1->Location = System::Drawing::Point(197, 186);
                    this->newPass1->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->newPass1->Name = L"newPass1";
                    this->newPass1->PasswordChar = '*';
                    this->newPass1->Size = System::Drawing::Size(296, 27);
                    this->newPass1->TabIndex = 147;
                    this->newPass1->UseSystemPasswordChar = true;
                    //
                    // label47
                    //
                    this->label47->AutoSize = true;
                    this->label47->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label47->ForeColor = System::Drawing::Color::White;
                    this->label47->Location = System::Drawing::Point(191, 152);
                    this->label47->Name = L"label47";
                    this->label47->Size = System::Drawing::Size(135, 25);
                    this->label47->TabIndex = 144;
                    this->label47->Text = L"New password";
                    //
                    // oldPass
                    //
                    this->oldPass->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->oldPass->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->oldPass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
                    this->oldPass->ForeColor = System::Drawing::SystemColors::Info;
                    this->oldPass->HideSelection = false;
                    this->oldPass->Location = System::Drawing::Point(197, 98);
                    this->oldPass->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->oldPass->Name = L"oldPass";
                    this->oldPass->PasswordChar = '*';
                    this->oldPass->Size = System::Drawing::Size(296, 27);
                    this->oldPass->TabIndex = 146;
                    this->oldPass->UseSystemPasswordChar = true;
                    //
                    // label48
                    //
                    this->label48->AutoSize = true;
                    this->label48->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label48->ForeColor = System::Drawing::Color::White;
                    this->label48->Location = System::Drawing::Point(191, 64);
                    this->label48->Name = L"label48";
                    this->label48->Size = System::Drawing::Size(127, 25);
                    this->label48->TabIndex = 142;
                    this->label48->Text = L"Old password";
                    //
                    // stdViewCourseUI
                    //
                    this->stdViewCourseUI->Alignment = System::Windows::Forms::ListViewAlignment::Default;
                    this->stdViewCourseUI->AllowColumnReorder = true;
                    this->stdViewCourseUI->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->stdViewCourseUI->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->stdViewCourseUI->Columns->AddRange(gcnew cli::array<System::Windows::Forms::ColumnHeader ^>(9) { this->columnHeader1,
                        this->columnHeader2, this->columnHeader3, this->columnHeader4, this->columnHeader5, this->columnHeader6, this->columnHeader7,
                        this->columnHeader8, this->columnHeader9 });
                    this->stdViewCourseUI->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
                    this->stdViewCourseUI->ForeColor = System::Drawing::Color::White;
                    listViewGroup6->Header = L"aaaa";
                    listViewGroup6->HeaderAlignment = System::Windows::Forms::HorizontalAlignment::Right;
                    listViewGroup6->Name = L"aaaaa";
                    this->stdViewCourseUI->Groups->AddRange(gcnew cli::array<System::Windows::Forms::ListViewGroup ^>(1) { listViewGroup6 });
                    this->stdViewCourseUI->HideSelection = false;
                    this->stdViewCourseUI->Location = System::Drawing::Point(280, 107);
                    this->stdViewCourseUI->Name = L"stdViewCourseUI";
                    this->stdViewCourseUI->ShowGroups = false;
                    this->stdViewCourseUI->Size = System::Drawing::Size(1129, 623);
                    this->stdViewCourseUI->TabIndex = 163;
                    this->stdViewCourseUI->UseCompatibleStateImageBehavior = false;
                    this->stdViewCourseUI->View = System::Windows::Forms::View::Details;
                    this->stdViewCourseUI->Visible = false;
                    this->stdViewCourseUI->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::stdViewSBUI_MouseMove);
                    //
                    // columnHeader1
                    //
                    this->columnHeader1->Text = L"No.";
                    this->columnHeader1->Width = 40;
                    //
                    // columnHeader2
                    //
                    this->columnHeader2->Text = L"Course ID";
                    this->columnHeader2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->columnHeader2->Width = 91;
                    //
                    // columnHeader3
                    //
                    this->columnHeader3->Text = L"Course Name";
                    this->columnHeader3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->columnHeader3->Width = 284;
                    //
                    // columnHeader4
                    //
                    this->columnHeader4->Text = L"Credits";
                    this->columnHeader4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->columnHeader4->Width = 68;
                    //
                    // columnHeader5
                    //
                    this->columnHeader5->Text = L"Students";
                    this->columnHeader5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->columnHeader5->Width = 84;
                    //
                    // columnHeader6
                    //
                    this->columnHeader6->Text = L"Day 1";
                    this->columnHeader6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->columnHeader6->Width = 135;
                    //
                    // columnHeader7
                    //
                    this->columnHeader7->Text = L"Day 2";
                    this->columnHeader7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->columnHeader7->Width = 135;
                    //
                    // columnHeader8
                    //
                    this->columnHeader8->Text = L"Room";
                    this->columnHeader8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->columnHeader8->Width = 71;
                    //
                    // columnHeader9
                    //
                    this->columnHeader9->Text = L"Lecturer";
                    this->columnHeader9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->columnHeader9->Width = 220;
                    //
                    // stdViewSBUI
                    //
                    this->stdViewSBUI->Alignment = System::Windows::Forms::ListViewAlignment::Default;
                    this->stdViewSBUI->AllowColumnReorder = true;
                    this->stdViewSBUI->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->stdViewSBUI->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->stdViewSBUI->Columns->AddRange(gcnew cli::array<System::Windows::Forms::ColumnHeader ^>(7) { this->columnHeader10,
                        this->columnHeader11, this->columnHeader12, this->columnHeader16, this->columnHeader15, this->columnHeader14, this->columnHeader17 });
                    this->stdViewSBUI->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
                    this->stdViewSBUI->ForeColor = System::Drawing::Color::White;
                    listViewGroup7->Header = L"aaaa";
                    listViewGroup7->HeaderAlignment = System::Windows::Forms::HorizontalAlignment::Right;
                    listViewGroup7->Name = L"aaaaa";
                    this->stdViewSBUI->Groups->AddRange(gcnew cli::array<System::Windows::Forms::ListViewGroup ^>(1) { listViewGroup7 });
                    this->stdViewSBUI->HideSelection = false;
                    this->stdViewSBUI->Location = System::Drawing::Point(280, 107);
                    this->stdViewSBUI->Name = L"stdViewSBUI";
                    this->stdViewSBUI->ShowGroups = false;
                    this->stdViewSBUI->Size = System::Drawing::Size(1129, 623);
                    this->stdViewSBUI->TabIndex = 164;
                    this->stdViewSBUI->UseCompatibleStateImageBehavior = false;
                    this->stdViewSBUI->View = System::Windows::Forms::View::Details;
                    this->stdViewSBUI->Visible = false;
                    this->stdViewSBUI->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::stdViewSBUI_MouseMove);
                    //
                    // columnHeader10
                    //
                    this->columnHeader10->Text = L"No.";
                    this->columnHeader10->Width = 40;
                    //
                    // columnHeader11
                    //
                    this->columnHeader11->Text = L"Course ID";
                    this->columnHeader11->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->columnHeader11->Width = 192;
                    //
                    // columnHeader12
                    //
                    this->columnHeader12->Text = L"Course Name";
                    this->columnHeader12->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->columnHeader12->Width = 374;
                    //
                    // columnHeader16
                    //
                    this->columnHeader16->Text = L"Midterm Mark";
                    this->columnHeader16->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->columnHeader16->Width = 130;
                    //
                    // columnHeader15
                    //
                    this->columnHeader15->Text = L"Final Mark";
                    this->columnHeader15->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->columnHeader15->Width = 130;
                    //
                    // columnHeader14
                    //
                    this->columnHeader14->Text = L"Total Mark";
                    this->columnHeader14->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->columnHeader14->Width = 130;
                    //
                    // columnHeader17
                    //
                    this->columnHeader17->Text = L"Other Mark";
                    this->columnHeader17->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
                    this->columnHeader17->Width = 130;
                    //
                    // courseRegisPanel
                    //
                    this->courseRegisPanel->Controls->Add(this->listCourseRegis);
                    this->courseRegisPanel->Controls->Add(this->courseRegisInfo);
                    this->courseRegisPanel->Location = System::Drawing::Point(278, 86);
                    this->courseRegisPanel->Name = L"courseRegisPanel";
                    this->courseRegisPanel->Size = System::Drawing::Size(1130, 643);
                    this->courseRegisPanel->TabIndex = 165;
                    this->courseRegisPanel->Visible = false;
                    this->courseRegisPanel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::stdViewSBUI_MouseMove);
                    //
                    // listCourseRegis
                    //
                    this->listCourseRegis->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->listCourseRegis->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->listCourseRegis->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
                    this->listCourseRegis->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
                    this->listCourseRegis->ItemHeight = 28;
                    this->listCourseRegis->Location = System::Drawing::Point(64, 28);
                    this->listCourseRegis->Name = L"listCourseRegis";
                    this->listCourseRegis->Size = System::Drawing::Size(326, 588);
                    this->listCourseRegis->TabIndex = 71;
                    this->listCourseRegis->SelectedIndexChanged += gcnew System::EventHandler(this, &functionScreen::listCourseRegis_SelectedIndexChanged);
                    //
                    // courseRegisInfo
                    //
                    this->courseRegisInfo->Controls->Add(this->courseUnRegisPanelBtn);
                    this->courseRegisInfo->Controls->Add(this->label50);
                    this->courseRegisInfo->Controls->Add(this->courseRegisID);
                    this->courseRegisInfo->Controls->Add(this->courseRegisPanelBtn);
                    this->courseRegisInfo->Controls->Add(this->courseRegisCancel);
                    this->courseRegisInfo->Controls->Add(this->label51);
                    this->courseRegisInfo->Controls->Add(this->courseRegisName);
                    this->courseRegisInfo->Controls->Add(this->label52);
                    this->courseRegisInfo->Controls->Add(this->courseRegisCre);
                    this->courseRegisInfo->Controls->Add(this->label53);
                    this->courseRegisInfo->Controls->Add(this->label54);
                    this->courseRegisInfo->Controls->Add(this->courseRegisStd);
                    this->courseRegisInfo->Controls->Add(this->label55);
                    this->courseRegisInfo->Controls->Add(this->courseRegisLecturer);
                    this->courseRegisInfo->Controls->Add(this->label56);
                    this->courseRegisInfo->Controls->Add(this->courseRegisRoom);
                    this->courseRegisInfo->Controls->Add(this->label58);
                    this->courseRegisInfo->Controls->Add(this->label59);
                    this->courseRegisInfo->Controls->Add(this->label60);
                    this->courseRegisInfo->Controls->Add(this->label61);
                    this->courseRegisInfo->Controls->Add(this->label62);
                    this->courseRegisInfo->Controls->Add(this->courseRegisStart);
                    this->courseRegisInfo->Controls->Add(this->courseRegisS1);
                    this->courseRegisInfo->Controls->Add(this->courseRegisEnd);
                    this->courseRegisInfo->Controls->Add(this->courseRegisD1);
                    this->courseRegisInfo->Controls->Add(this->courseRegisS2);
                    this->courseRegisInfo->Controls->Add(this->courseRegisD2);
                    this->courseRegisInfo->Location = System::Drawing::Point(533, 31);
                    this->courseRegisInfo->Name = L"courseRegisInfo";
                    this->courseRegisInfo->Size = System::Drawing::Size(537, 599);
                    this->courseRegisInfo->TabIndex = 72;
                    this->courseRegisInfo->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::stdViewSBUI_MouseMove);
                    //
                    // courseUnRegisPanelBtn
                    //
                    this->courseUnRegisPanelBtn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->courseUnRegisPanelBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
                    this->courseUnRegisPanelBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
                    this->courseUnRegisPanelBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->courseUnRegisPanelBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->courseUnRegisPanelBtn->ForeColor = System::Drawing::Color::Red;
                    this->courseUnRegisPanelBtn->Location = System::Drawing::Point(198, 534);
                    this->courseUnRegisPanelBtn->Name = L"courseUnRegisPanelBtn";
                    this->courseUnRegisPanelBtn->Size = System::Drawing::Size(148, 39);
                    this->courseUnRegisPanelBtn->TabIndex = 145;
                    this->courseUnRegisPanelBtn->Text = L"Unregister";
                    this->courseUnRegisPanelBtn->UseVisualStyleBackColor = true;
                    this->courseUnRegisPanelBtn->Click += gcnew System::EventHandler(this, &functionScreen::courseUnRegisPanelBtn_Click);
                    //
                    // label50
                    //
                    this->label50->AutoSize = true;
                    this->label50->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label50->ForeColor = System::Drawing::Color::White;
                    this->label50->Location = System::Drawing::Point(3, 112);
                    this->label50->Name = L"label50";
                    this->label50->Size = System::Drawing::Size(94, 25);
                    this->label50->TabIndex = 71;
                    this->label50->Text = L"Course ID";
                    //
                    // courseRegisID
                    //
                    this->courseRegisID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->courseRegisID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->courseRegisID->ForeColor = System::Drawing::SystemColors::Control;
                    this->courseRegisID->Location = System::Drawing::Point(6, 149);
                    this->courseRegisID->Margin = System::Windows::Forms::Padding(5);
                    this->courseRegisID->Name = L"courseRegisID";
                    this->courseRegisID->ReadOnly = true;
                    this->courseRegisID->Size = System::Drawing::Size(112, 31);
                    this->courseRegisID->TabIndex = 125;
                    //
                    // courseRegisPanelBtn
                    //
                    this->courseRegisPanelBtn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->courseRegisPanelBtn->BackColor = System::Drawing::Color::DodgerBlue;
                    this->courseRegisPanelBtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
                    this->courseRegisPanelBtn->FlatAppearance->BorderColor = System::Drawing::Color::White;
                    this->courseRegisPanelBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
                    this->courseRegisPanelBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
                    this->courseRegisPanelBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->courseRegisPanelBtn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->courseRegisPanelBtn->ForeColor = System::Drawing::Color::White;
                    this->courseRegisPanelBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
                    this->courseRegisPanelBtn->Location = System::Drawing::Point(198, 534);
                    this->courseRegisPanelBtn->Margin = System::Windows::Forms::Padding(3, 10, 10, 3);
                    this->courseRegisPanelBtn->Name = L"courseRegisPanelBtn";
                    this->courseRegisPanelBtn->Size = System::Drawing::Size(148, 39);
                    this->courseRegisPanelBtn->TabIndex = 136;
                    this->courseRegisPanelBtn->Text = L"Register";
                    this->courseRegisPanelBtn->UseMnemonic = false;
                    this->courseRegisPanelBtn->UseVisualStyleBackColor = false;
                    this->courseRegisPanelBtn->Click += gcnew System::EventHandler(this, &functionScreen::courseRegisPanelBtn_Click);
                    //
                    // courseRegisCancel
                    //
                    this->courseRegisCancel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
                    this->courseRegisCancel->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
                        static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
                    this->courseRegisCancel->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Gray;
                    this->courseRegisCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->courseRegisCancel->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Bold));
                    this->courseRegisCancel->ForeColor = System::Drawing::SystemColors::ButtonFace;
                    this->courseRegisCancel->Location = System::Drawing::Point(365, 534);
                    this->courseRegisCancel->Name = L"courseRegisCancel";
                    this->courseRegisCancel->Size = System::Drawing::Size(148, 39);
                    this->courseRegisCancel->TabIndex = 138;
                    this->courseRegisCancel->Text = L"Cancel";
                    this->courseRegisCancel->UseVisualStyleBackColor = true;
                    this->courseRegisCancel->Click += gcnew System::EventHandler(this, &functionScreen::courseRegisCancel_Click);
                    //
                    // label51
                    //
                    this->label51->AutoSize = true;
                    this->label51->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label51->ForeColor = System::Drawing::Color::White;
                    this->label51->Location = System::Drawing::Point(3, 16);
                    this->label51->Name = L"label51";
                    this->label51->Size = System::Drawing::Size(123, 25);
                    this->label51->TabIndex = 21;
                    this->label51->Text = L"Course name";
                    //
                    // courseRegisName
                    //
                    this->courseRegisName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->courseRegisName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->courseRegisName->ForeColor = System::Drawing::SystemColors::Control;
                    this->courseRegisName->Location = System::Drawing::Point(6, 53);
                    this->courseRegisName->Margin = System::Windows::Forms::Padding(5);
                    this->courseRegisName->Name = L"courseRegisName";
                    this->courseRegisName->ReadOnly = true;
                    this->courseRegisName->Size = System::Drawing::Size(525, 31);
                    this->courseRegisName->TabIndex = 124;
                    //
                    // label52
                    //
                    this->label52->AutoSize = true;
                    this->label52->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label52->ForeColor = System::Drawing::Color::White;
                    this->label52->Location = System::Drawing::Point(143, 112);
                    this->label52->Name = L"label52";
                    this->label52->Size = System::Drawing::Size(71, 25);
                    this->label52->TabIndex = 29;
                    this->label52->Text = L"Credits";
                    //
                    // courseRegisCre
                    //
                    this->courseRegisCre->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->courseRegisCre->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->courseRegisCre->ForeColor = System::Drawing::SystemColors::Control;
                    this->courseRegisCre->Location = System::Drawing::Point(152, 149);
                    this->courseRegisCre->Margin = System::Windows::Forms::Padding(5);
                    this->courseRegisCre->Name = L"courseRegisCre";
                    this->courseRegisCre->ReadOnly = true;
                    this->courseRegisCre->Size = System::Drawing::Size(85, 31);
                    this->courseRegisCre->TabIndex = 126;
                    //
                    // label53
                    //
                    this->label53->AutoSize = true;
                    this->label53->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label53->ForeColor = System::Drawing::Color::White;
                    this->label53->Location = System::Drawing::Point(266, 112);
                    this->label53->Name = L"label53";
                    this->label53->Size = System::Drawing::Size(152, 25);
                    this->label53->TabIndex = 31;
                    this->label53->Text = L"Current students";
                    //
                    // label54
                    //
                    this->label54->AutoSize = true;
                    this->label54->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
                    this->label54->ForeColor = System::Drawing::Color::White;
                    this->label54->Location = System::Drawing::Point(44, 473);
                    this->label54->Name = L"label54";
                    this->label54->Size = System::Drawing::Size(80, 23);
                    this->label54->TabIndex = 57;
                    this->label54->Text = L"Session 2";
                    //
                    // courseRegisStd
                    //
                    this->courseRegisStd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->courseRegisStd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->courseRegisStd->ForeColor = System::Drawing::SystemColors::Control;
                    this->courseRegisStd->Location = System::Drawing::Point(271, 149);
                    this->courseRegisStd->Margin = System::Windows::Forms::Padding(5);
                    this->courseRegisStd->Name = L"courseRegisStd";
                    this->courseRegisStd->ReadOnly = true;
                    this->courseRegisStd->Size = System::Drawing::Size(142, 31);
                    this->courseRegisStd->TabIndex = 127;
                    //
                    // label55
                    //
                    this->label55->AutoSize = true;
                    this->label55->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label55->ForeColor = System::Drawing::Color::White;
                    this->label55->Location = System::Drawing::Point(1, 208);
                    this->label55->Name = L"label55";
                    this->label55->Size = System::Drawing::Size(133, 25);
                    this->label55->TabIndex = 33;
                    this->label55->Text = L"Lecturer name";
                    //
                    // courseRegisLecturer
                    //
                    this->courseRegisLecturer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->courseRegisLecturer->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->courseRegisLecturer->ForeColor = System::Drawing::SystemColors::Control;
                    this->courseRegisLecturer->Location = System::Drawing::Point(6, 245);
                    this->courseRegisLecturer->Margin = System::Windows::Forms::Padding(5);
                    this->courseRegisLecturer->Name = L"courseRegisLecturer";
                    this->courseRegisLecturer->ReadOnly = true;
                    this->courseRegisLecturer->Size = System::Drawing::Size(526, 31);
                    this->courseRegisLecturer->TabIndex = 129;
                    //
                    // label56
                    //
                    this->label56->AutoSize = true;
                    this->label56->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label56->ForeColor = System::Drawing::Color::White;
                    this->label56->Location = System::Drawing::Point(443, 112);
                    this->label56->Name = L"label56";
                    this->label56->Size = System::Drawing::Size(60, 25);
                    this->label56->TabIndex = 35;
                    this->label56->Text = L"Room";
                    //
                    // courseRegisRoom
                    //
                    this->courseRegisRoom->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->courseRegisRoom->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->courseRegisRoom->ForeColor = System::Drawing::SystemColors::Control;
                    this->courseRegisRoom->Location = System::Drawing::Point(447, 149);
                    this->courseRegisRoom->Margin = System::Windows::Forms::Padding(5);
                    this->courseRegisRoom->Name = L"courseRegisRoom";
                    this->courseRegisRoom->ReadOnly = true;
                    this->courseRegisRoom->Size = System::Drawing::Size(84, 31);
                    this->courseRegisRoom->TabIndex = 128;
                    //
                    // label58
                    //
                    this->label58->AutoSize = true;
                    this->label58->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label58->ForeColor = System::Drawing::Color::White;
                    this->label58->Location = System::Drawing::Point(3, 392);
                    this->label58->Name = L"label58";
                    this->label58->Size = System::Drawing::Size(89, 25);
                    this->label58->TabIndex = 37;
                    this->label58->Text = L"Schedule";
                    //
                    // label59
                    //
                    this->label59->AutoSize = true;
                    this->label59->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
                    this->label59->ForeColor = System::Drawing::Color::White;
                    this->label59->Location = System::Drawing::Point(44, 430);
                    this->label59->Name = L"label59";
                    this->label59->Size = System::Drawing::Size(80, 23);
                    this->label59->TabIndex = 39;
                    this->label59->Text = L"Session 1";
                    //
                    // label60
                    //
                    this->label60->AutoSize = true;
                    this->label60->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
                    this->label60->ForeColor = System::Drawing::Color::White;
                    this->label60->Location = System::Drawing::Point(3, 304);
                    this->label60->Name = L"label60";
                    this->label60->Size = System::Drawing::Size(154, 25);
                    this->label60->TabIndex = 42;
                    this->label60->Text = L"Registration date";
                    //
                    // label61
                    //
                    this->label61->AutoSize = true;
                    this->label61->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
                    this->label61->ForeColor = System::Drawing::Color::White;
                    this->label61->Location = System::Drawing::Point(44, 341);
                    this->label61->Name = L"label61";
                    this->label61->Size = System::Drawing::Size(53, 23);
                    this->label61->TabIndex = 44;
                    this->label61->Text = L"From:";
                    //
                    // label62
                    //
                    this->label62->AutoSize = true;
                    this->label62->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
                    this->label62->ForeColor = System::Drawing::Color::White;
                    this->label62->Location = System::Drawing::Point(294, 341);
                    this->label62->Name = L"label62";
                    this->label62->Size = System::Drawing::Size(31, 23);
                    this->label62->TabIndex = 45;
                    this->label62->Text = L"To:";
                    //
                    // courseRegisStart
                    //
                    this->courseRegisStart->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->courseRegisStart->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->courseRegisStart->ForeColor = System::Drawing::SystemColors::Control;
                    this->courseRegisStart->Location = System::Drawing::Point(113, 337);
                    this->courseRegisStart->Margin = System::Windows::Forms::Padding(5);
                    this->courseRegisStart->Name = L"courseRegisStart";
                    this->courseRegisStart->ReadOnly = true;
                    this->courseRegisStart->Size = System::Drawing::Size(153, 31);
                    this->courseRegisStart->TabIndex = 139;
                    //
                    // courseRegisS1
                    //
                    this->courseRegisS1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->courseRegisS1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->courseRegisS1->ForeColor = System::Drawing::SystemColors::Control;
                    this->courseRegisS1->Location = System::Drawing::Point(315, 426);
                    this->courseRegisS1->Margin = System::Windows::Forms::Padding(5);
                    this->courseRegisS1->Name = L"courseRegisS1";
                    this->courseRegisS1->ReadOnly = true;
                    this->courseRegisS1->Size = System::Drawing::Size(179, 31);
                    this->courseRegisS1->TabIndex = 142;
                    //
                    // courseRegisEnd
                    //
                    this->courseRegisEnd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->courseRegisEnd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->courseRegisEnd->ForeColor = System::Drawing::SystemColors::Control;
                    this->courseRegisEnd->Location = System::Drawing::Point(341, 337);
                    this->courseRegisEnd->Margin = System::Windows::Forms::Padding(5);
                    this->courseRegisEnd->Name = L"courseRegisEnd";
                    this->courseRegisEnd->ReadOnly = true;
                    this->courseRegisEnd->Size = System::Drawing::Size(153, 31);
                    this->courseRegisEnd->TabIndex = 140;
                    //
                    // courseRegisD1
                    //
                    this->courseRegisD1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->courseRegisD1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->courseRegisD1->ForeColor = System::Drawing::SystemColors::Control;
                    this->courseRegisD1->Location = System::Drawing::Point(148, 426);
                    this->courseRegisD1->Margin = System::Windows::Forms::Padding(5);
                    this->courseRegisD1->Name = L"courseRegisD1";
                    this->courseRegisD1->ReadOnly = true;
                    this->courseRegisD1->Size = System::Drawing::Size(137, 31);
                    this->courseRegisD1->TabIndex = 141;
                    //
                    // courseRegisS2
                    //
                    this->courseRegisS2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->courseRegisS2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->courseRegisS2->ForeColor = System::Drawing::SystemColors::Control;
                    this->courseRegisS2->Location = System::Drawing::Point(315, 469);
                    this->courseRegisS2->Margin = System::Windows::Forms::Padding(5);
                    this->courseRegisS2->Name = L"courseRegisS2";
                    this->courseRegisS2->ReadOnly = true;
                    this->courseRegisS2->Size = System::Drawing::Size(179, 31);
                    this->courseRegisS2->TabIndex = 144;
                    //
                    // courseRegisD2
                    //
                    this->courseRegisD2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(26)),
                        static_cast<System::Int32>(static_cast<System::Byte>(26)));
                    this->courseRegisD2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->courseRegisD2->ForeColor = System::Drawing::SystemColors::Control;
                    this->courseRegisD2->Location = System::Drawing::Point(148, 469);
                    this->courseRegisD2->Margin = System::Windows::Forms::Padding(5);
                    this->courseRegisD2->Name = L"courseRegisD2";
                    this->courseRegisD2->ReadOnly = true;
                    this->courseRegisD2->Size = System::Drawing::Size(137, 31);
                    this->courseRegisD2->TabIndex = 143;
                    //
                    // functionScreen
                    //
                    this->AutoScaleDimensions = System::Drawing::SizeF(15, 37);
                    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
                    this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->ClientSize = System::Drawing::Size(1436, 771);
                    this->Controls->Add(this->greetText);
                    this->Controls->Add(this->allRolePanel);
                    this->Controls->Add(this->date);
                    this->Controls->Add(this->time);
                    this->Controls->Add(this->staffFunctionPanel);
                    this->Controls->Add(this->btMinimise);
                    this->Controls->Add(this->btCloseApp);
                    this->Controls->Add(this->btMinimiseBG);
                    this->Controls->Add(this->btCloseBG);
                    this->Controls->Add(this->panelSchoolYear);
                    this->Controls->Add(this->courseUpdateUI);
                    this->Controls->Add(this->stdViewCourseUI);
                    this->Controls->Add(this->viewClSBUI);
                    this->Controls->Add(this->viewCourseUI);
                    this->Controls->Add(this->viewCoSBUI);
                    this->Controls->Add(this->viewStudentUI);
                    this->Controls->Add(this->viewClassUI);
                    this->Controls->Add(this->imSBpanel);
                    this->Controls->Add(this->courseExStd);
                    this->Controls->Add(this->changePassPanel);
                    this->Controls->Add(this->stdViewSBUI);
                    this->Controls->Add(this->courseRegisPanel);
                    this->Controls->Add(this->newSemesterUI);
                    this->Controls->Add(this->updateStdRes);
                    this->Controls->Add(this->profilePanel);
                    this->Controls->Add(this->studentFunctionPanel);
                    this->DoubleBuffered = true;
                    this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F));
                    this->ForeColor = System::Drawing::Color::Black;
                    this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
                    this->Icon = (cli::safe_cast<System::Drawing::Icon ^>(resources->GetObject(L"$this.Icon")));
                    this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->Name = L"functionScreen";
                    this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
                    this->Text = L"Moodle";
                    this->Load += gcnew System::EventHandler(this, &functionScreen::MyForm1_Load);
                    this->MouseEnter += gcnew System::EventHandler(this, &functionScreen::MyForm1_MouseEnter);
                    this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &functionScreen::MyForm1_MouseMove);
                    this->allRolePanel->ResumeLayout(false);
                    this->staffFunctionPanel->ResumeLayout(false);
                    this->studentFunctionPanel->ResumeLayout(false);
                    this->courseUpdateUI->ResumeLayout(false);
                    this->panel1->ResumeLayout(false);
                    this->updateCoursePanel->ResumeLayout(false);
                    this->updateCoursePanel->PerformLayout();
                    this->panelSchoolYear->ResumeLayout(false);
                    this->panelSchoolYear->PerformLayout();
                    this->panelAddStudent->ResumeLayout(false);
                    this->panelAddStudent->PerformLayout();
                    this->newSemesterUI->ResumeLayout(false);
                    this->newSemesterUI->PerformLayout();
                    this->panel8->ResumeLayout(false);
                    this->panel8->PerformLayout();
                    this->updateStdRes->ResumeLayout(false);
                    this->updateStdRes->PerformLayout();
                    this->sbUCoursePan->ResumeLayout(false);
                    this->sbUCoursePan->PerformLayout();
                    this->courseExStd->ResumeLayout(false);
                    this->courseExStd->PerformLayout();
                    this->imSBpanel->ResumeLayout(false);
                    this->imSBpanel->PerformLayout();
                    this->profilePanel->ResumeLayout(false);
                    this->profilePanel->PerformLayout();
                    this->changePassPanel->ResumeLayout(false);
                    this->changePassPanel->PerformLayout();
                    this->courseRegisPanel->ResumeLayout(false);
                    this->courseRegisInfo->ResumeLayout(false);
                    this->courseRegisInfo->PerformLayout();
                    this->ResumeLayout(false);
                }
#pragma endregion
            private:
                System::String ^ convertString(string st) {
                    return gcnew System::String(st.c_str());
                } 
            private : string convertToString(System::String ^ st)
                {
                    return msclr::interop::marshal_as<std::string>(st);
                }
            private:
                System::Void MyForm1_Load(System::Object ^ sender, System::EventArgs ^ e)
                {
                    timeController->Start();
                    viewCourseUI->Hide();
                    if (studentFunctionPanel->Visible) {
                        Students* student = studentList2;

                        while (student && student->account->uName != curAccount->uName) {
                            student = student->next;
                        }
                        currentStudent = student;
                    }
                }

            private:
                System::Void btCloseApp_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    Exit1 = true;
                    Close();
                }

            private:
                System::Void btMinimise_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    this->WindowState = FormWindowState::Minimized;
                }

            private:
                System::Void btMinimiseBG_MouseHover(System::Object ^ sender, System::EventArgs ^ e)
                {
                    btMinimiseBG->FlatAppearance->BorderSize = 1;
                }

            private:
                System::Void btMinimiseBG_MouseLeave(System::Object ^ sender, System::EventArgs ^ e)
                {
                    btMinimiseBG->FlatAppearance->BorderSize = 0;
                }

            private:
                System::Void btCloseBG_MouseHover(System::Object ^ sender, System::EventArgs ^ e)
                {
                    btCloseBG->FlatAppearance->BorderSize = 1;
                }

            private:
                System::Void btCloseBG_MouseLeave(System::Object ^ sender, System::EventArgs ^ e)
                {
                    btCloseBG->FlatAppearance->BorderSize = 0;
                }

            int count = 0;
            private:
                System::Void greetText_MouseEnter(System::Object ^ sender, System::EventArgs ^ e)
                {
                    allRolePanel->Show();
                    count = 0;
                }

            private:
                System::Void allRolePanel_MouseEnter(System::Object ^ sender, System::EventArgs ^ e)
                {
                    count = 0;
                }

            private:
                System::Void timer1_Tick(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (count < 5)
                        count++;
                }

            private:
                System::Void MyForm1_MouseMove(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e)
                {
                    if (allRolePanel->Visible) {
                        timer1->Start();
                        if (count >= 5) {
                            allRolePanel->Hide();
                            count = 0;
                        }
                    }
                }

            private:
                void hide(int n) {
                    if (n != 1)
                        allRolePanel->Hide();
                }

            private:
                System::Void MyForm1_MouseEnter(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (allRolePanel->Visible) {
                        timer1->Start();
                        if (count >= 5) {
                            allRolePanel->Hide();
                            count = 0;
                        }
                    }
                }

            public:
                string getMonthLetter(int n) {
                    switch (n) {
                        case 1:
                            return "JAN";
                        case 2:
                            return "FEB";
                        case 3:
                            return "MAR";
                        case 4:
                            return "APR";
                        case 5:
                            return "MAY";
                        case 6:
                            return "JUN";
                        case 7:
                            return "JUL";
                        case 8:
                            return "AUG";
                        case 9:
                            return "SEP";
                        case 10:
                            return "OCT";
                        case 11:
                            return "NOV";
                        case 12:
                            return "DEC";
                    }
                }

            private:
                System::Void timeController_Tick(System::Object ^ sender, System::EventArgs ^ e)
                {
                    time_t now = std::time(0);
                    tm* ltm = localtime(&now);
                    string tmp = asctime(ltm);
                    System::String ^ datetime = gcnew System::String(tmp.c_str());
                    time->Text = datetime->Remove(0, 11)->Remove(5, 9);
                    //date->Text = getMonthLetter(1 + ltm->tm_mon) + " " + System::Convert::ToString(DateTime::Now)->Remove(0, 2)->Remove(2, 16);

                    date->Text = datetime->Remove(0, 4)->Remove(6) + datetime->Remove(0, 19);
                    string name = curAccount->lastname + " " + curAccount->firstname;
                    System::String ^ nameText = gcnew System::String(name.c_str());
                    if (ltm->tm_hour >= 5 && ltm->tm_hour < 12)
                        greetText->Text = "Good morning, " + nameText;
                    if (ltm->tm_hour >= 12 && ltm->tm_hour < 17)
                        greetText->Text = "Good afternoon, " + nameText;
                    if ((ltm->tm_hour >= 17 && ltm->tm_hour <= 24) || (ltm->tm_hour >=0 && ltm->tm_hour < 5))
                        greetText->Text = "Good evening, " + nameText;
                    //datetime.substr(4, 5);
                }

            private:
                System::Void newbtn_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (!newSchoolYear->Visible) {
                        newSchoolYear->Show();
                        newSemester->Show();
                    } else {
                        newSchoolYear->Hide();
                        newSemester->Hide();
                    }
                }

            private:
                System::Void viewbtn_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (!viewCourses->Visible) {
                        viewCourses->Show();
                        viewScoreboard->Show();
                        viewStudentList->Show();
                        viewClasses->Show();
                    } else {
                        viewCourses->Hide();
                        viewScoreboard->Hide();
                        viewStudentList->Hide();
                        viewClasses->Hide();
                    }
                }

            private:
                System::Void studentView_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (!studentViewCourse->Visible) {
                        studentViewCourse->Show();
                        studentViewScoreboard->Show();
                    } else {
                        studentViewCourse->Hide();
                        studentViewScoreboard->Hide();
                    }                    
                }

            private:
                System::Void logoutBTN_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    Close();
                }

            private:

            private:
                string getSession(string s) {
                    if (s == "1")
                        return "07:30-09:10";
                    if (s == "2")
                        return "09:30-11:30";
                    if (s == "3")
                        return "13:30-15:30";
                    if (s == "4")
                        return "15:30-17:10";
                }
            private:
                System::Void viewCourses_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    viewCourseUI->Items->Clear();
                    if (viewCourseUI->Visible) {
                        viewCourseUI->Hide();
                    } else {
                        if (!hideAllStaff())
                            return;
                        viewCourseUI->Show();
                        viewCourseUI->SendToBack();
                        AcademicYears* curYear = yearList2;
                        int i = 0;
                        while (curYear) {
                            Semesters* curSem = curYear->semesters;
                            while (curSem) {
                                Courses* curCourse = curSem->courses;
                                while (curCourse) {
                                    i++;
                                    string st = to_string(i);
                                    ListViewItem ^ lv = gcnew ListViewItem(convertString(st), 0);
                                    lv->SubItems->Add(convertString(curCourse->courseID));
                                    lv->SubItems->Add(convertString(curCourse->courseName));
                                    lv->SubItems->Add(convertString(to_string(curCourse->credits)));
                                    lv->SubItems->Add(convertString(to_string(curCourse->numStudents) + "/" + to_string(curCourse->maxStudents)));
                                    lv->SubItems->Add(convertString(curCourse->day1 + " | " + getSession(curCourse->session1)));
                                    lv->SubItems->Add(convertString(curCourse->day2 + " | " + getSession(curCourse->session2)));
                                    lv->SubItems->Add(convertString(curCourse->room));
                                    lv->SubItems->Add(convertString(curCourse->lecturerName));
                                    viewCourseUI->Items->Add(lv);
                                    curCourse = curCourse->next;
                                }
                                curSem = curSem->next;
                            }
                            curYear = curYear->next;
                        }
                    }
                }

            private:
                System::Void viewCourseUI_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e)
                {
                }

            private:
                System::Void viewCourseUI_MouseMove(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e)
                {
                    if (allRolePanel->Visible) {
                        timer1->Start();
                        if (count >= 5) {
                            allRolePanel->Hide();
                            count = 0;
                        }
                    }
                }

            private:
                System::Void viewStudentList_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (viewStudentUI->Visible) {
                        viewStudentUI->Hide();
                    } else {
                        if (!hideAllStaff())
                            return;
                        inputClassCourse ^ icc = gcnew inputClassCourse;
                        icc->ShowDialog();
                        String ^ Class, ^Course;
                        icc->GetData(Class, Course);

                        if (Class == L"" && Course == L"")
                            return;

                        viewStudentUI->Items->Clear();

                        viewStudentUI->Show();
                        viewStudentUI->SendToBack();
                        if (Class != L"") {
                            Students* student = studentList2;
                            int i = 0;
                            while (student) {
                                if (student->classID == convertToString(Class)) {
                                    i++;
                                    string st = to_string(i);
                                    ListViewItem ^ lv = gcnew ListViewItem(convertString(st), 0);
                                    lv->SubItems->Add(convertString(student->studentID));
                                    lv->SubItems->Add(convertString(student->account->lastname));
                                    lv->SubItems->Add(convertString(student->account->firstname));
                                    lv->SubItems->Add(convertString(student->account->socialID));
                                    if (toupper(student->account->gender) == 'F')
                                        lv->SubItems->Add(L"Female");
                                    else {
                                        if (toupper(student->account->gender) == 'M')
                                            lv->SubItems->Add(L"Male");
                                        else
                                            lv->SubItems->Add(L"<N/A>");
                                    }
                                    lv->SubItems->Add(convertString(student->account->doB.day + "/" + student->account->doB.month + "/" + student->account->doB.year));
                                    lv->SubItems->Add(convertString(student->classID));
                                    viewStudentUI->Items->Add(lv);
                                }
                                student = student->next;
                            }
                        } else {
                            AcademicYears* curYear = yearList2;
                            int i = 0;
                            while (curYear) {
                                Semesters* curSemester = curYear->semesters;
                                while (curSemester) {
                                    Courses* curCourse = curSemester->courses;
                                    while (curCourse) {
                                        if (curCourse->courseID == convertToString(Course)) {
                                            Students* student = curCourse->studentList;
                                            while (student) {
                                                i++;
                                                string st = to_string(i);
                                                ListViewItem ^ lv = gcnew ListViewItem(convertString(st), 0);
                                                lv->SubItems->Add(convertString(student->studentID));
                                                lv->SubItems->Add(convertString(student->account->lastname));
                                                lv->SubItems->Add(convertString(student->account->firstname));
                                                lv->SubItems->Add(convertString(student->account->socialID));
                                                if (toupper(student->account->gender) == 'F')
                                                    lv->SubItems->Add(L"Female");
                                                else {
                                                    if (toupper(student->account->gender) == 'M')
                                                        lv->SubItems->Add(L"Male");
                                                    else
                                                        lv->SubItems->Add(L"<N/A>");
                                                }
                                                lv->SubItems->Add(convertString(student->account->doB.day + "/" + student->account->doB.month + "/" + student->account->doB.year));
                                                lv->SubItems->Add(convertString(student->classID));
                                                viewStudentUI->Items->Add(lv);
                                                student = student->next;
                                            }
                                            return;
                                        }
                                        curCourse = curCourse->next;
                                    }
                                    curSemester = curSemester->next;
                                }
                                curYear = curYear->next;
                            }
                        }
                    }
                }

            private:
                System::Void viewScoreboard_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (viewCoSBUI->Visible || viewClSBUI->Visible) {
                        viewCoSBUI->Hide();
                        viewClSBUI->Hide();
                    } else {
                        if (!hideAllStaff())
                            return;
                        inputClassCourse ^ icc = gcnew inputClassCourse;
                        icc->ShowDialog();
                        String ^ Class, ^Course;
                        icc->GetData(Class, Course);
                        if (Class == L"" && Course == L"")
                            return;
                        if (Class != L"") {

                            Classes* classes = yearList2->classes;
                            while (classes && classes->classID != convertToString(Class))
                                classes = classes->next;

                            int i = 0;

                            viewClSBUI->Items->Clear();

                            viewClSBUI->Show();
                            viewClSBUI->SendToBack();

                            if (!classes)
                                return;

                            Students* student = classes->students;
                            while (student) {

                                double sum = 0, count = 0, allsum = 0, allcount = 0;
                                Scoreboards* scoreBoards = studentList2->findStudentByID(student->studentID)->scoreBoards;
                                while (scoreBoards) {
                                    //check if in the semester
                                    if (yearList2->semesters->courses->findCourseByID(scoreBoards->courseID)) {
                                        count++;
                                        sum += scoreBoards->totalScore;
                                    }
                                    allcount++;
                                    allsum += scoreBoards->totalScore;
                                    scoreBoards = scoreBoards->next;
                                }

                                scoreBoards = studentList2->findStudentByID(student->studentID)->scoreBoards;
                                int j = 0;
                                while (scoreBoards) {
                                    //check if in the semester
                                    ListViewItem ^ lv;
                                    //if (studentList2->findStudentByID(student->studentID)->enrolledCourse->findCourseByID(scoreBoards->courseID)) {
                                        if (j == (int)(allcount / 2)) {
                                            i++;
                                            string st = to_string(i);
                                            lv = gcnew ListViewItem(convertString(st), 0);
                                            lv->SubItems->Add(convertString(student->studentID));
                                            lv->SubItems->Add(convertString(student->account->lastname + " " + student->account->firstname));
                                        } else {
                                            lv = gcnew ListViewItem(L"", 0);
                                            lv->SubItems->Add(L"");
                                            lv->SubItems->Add(L"");
                                        }

                                        if (j == (int)(allcount / 2))
                                            lv->SubItems->Add(convertString(scoreBoards->courseID));
                                        else
                                            lv->SubItems->Add(L"");
                                        lv->SubItems->Add(convertString(formatDouble(scoreBoards->totalScore)));
                                        if (j == (int)(allcount / 2)) {
                                            if (count != 0)
                                                lv->SubItems->Add(convertString(formatDouble((double)(sum / count))));
                                            else
                                                lv->SubItems->Add(L"N/A");
                                            if (allcount != 0)
                                                lv->SubItems->Add(convertString(formatDouble((double)(allsum / allcount))));
                                            else
                                                lv->SubItems->Add(L"N/A");
                                        }
                                        viewClSBUI->Items->Add(lv);
                                        j++;
                                    //}
                                    scoreBoards = scoreBoards->next;
                                }
                                student = student->next;
                            }                            
                        } else {

                            viewCoSBUI->Items->Clear();

                            viewCoSBUI->Show();
                            viewCoSBUI->SendToBack();

                            AcademicYears* curYear = yearList2;
                            int i = 0;
                            while (curYear) {
                                Semesters* curSemester = curYear->semesters;
                                while (curSemester) {
                                    Courses* curCourse = curSemester->courses;
                                    while (curCourse) {
                                        if (curCourse->courseID == convertToString(Course)) {
                                            Students* student = curCourse->studentList;
                                            while (student) {
                                                i++;
                                                string st = to_string(i);
                                                ListViewItem ^ lv = gcnew ListViewItem(convertString(st), 0);
                                                lv->SubItems->Add(convertString(student->studentID));
                                                lv->SubItems->Add(convertString(student->account->lastname + " " + student->account->firstname));
                                                lv->SubItems->Add(convertString(student->classID));
                                                Scoreboards* SBstudent = student->scoreBoards;
                                                while (SBstudent && SBstudent->courseID != convertToString(Course)) {
                                                    SBstudent = SBstudent->next;
                                                }
                                                if (SBstudent) {
                                                    lv->SubItems->Add(convertString(formatDouble(SBstudent->totalScore)));
                                                    lv->SubItems->Add(convertString(formatDouble(SBstudent->finalScore)));
                                                    lv->SubItems->Add(convertString(formatDouble(SBstudent->midtermScore)));
                                                    lv->SubItems->Add(convertString(formatDouble(SBstudent->otherScore)));
                                                } else {
                                                    lv->SubItems->Add(L"<N/A>");
                                                    lv->SubItems->Add(L"<N/A>");
                                                    lv->SubItems->Add(L"<N/A>");
                                                    lv->SubItems->Add(L"<N/A>");                                              
                                                }
                                                viewCoSBUI->Items->Add(lv);
                                                student = student->next;
                                            }
                                            return;
                                        }
                                        curCourse = curCourse->next;
                                    }
                                    curSemester = curSemester->next;
                                }
                                curYear = curYear->next;
                            }
                        }
                    }
                }

            private:
                System::Void viewClSBUI_MouseMove(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e)
                {
                    if (allRolePanel->Visible) {
                        timer1->Start();
                        if (count >= 5) {
                            allRolePanel->Hide();
                            count = 0;
                        }
                    }
                }

            private:
                System::Void viewCoSBUI_MouseMove(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e)
                {
                    if (allRolePanel->Visible) {
                        timer1->Start();
                        if (count >= 5) {
                            allRolePanel->Hide();
                            count = 0;
                        }
                    }
                }

            private:
                System::Void viewStudentUI_MouseMove(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e)
                {
                    if (allRolePanel->Visible) {
                        timer1->Start();
                        if (count >= 5) {
                            allRolePanel->Hide();
                            count = 0;
                        }
                    }
                }

            private:
                System::Void viewClassUI_MouseMove(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e)
                {
                    if (allRolePanel->Visible) {
                        timer1->Start();
                        if (count >= 5) {
                            allRolePanel->Hide();
                            count = 0;
                        }
                    }
                }

            private:
                System::Void viewClasses_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    viewClassUI->Items->Clear();
                    if (viewClassUI->Visible) {
                        viewClassUI->Hide();
                    } else {
                        if (!hideAllStaff())
                            return;
                        viewClassUI->Show();
                        viewClassUI->SendToBack();
                        AcademicYears* curYear = yearList2;
                        int i = 0, cnt = 0;
                        while (curYear) {
                            cnt = 0;
                            i++;
                            string st = to_string(i);
                            Classes* curClass = curYear->classes;
                            while (curClass) {
                                cnt++;
                                curClass = curClass->next;
                            }

                            curClass = curYear->classes;
                            cnt /= 2;
                            while (curClass) {
                                ListViewItem ^ lv;
                                if (cnt == 0) {
                                    lv = gcnew ListViewItem(convertString(st), 0);
                                    lv->SubItems->Add(convertString(curYear->getFullYear()));
                                } else {
                                    lv = gcnew ListViewItem(L"", 0);
                                    lv->SubItems->Add(L"");
                                }
                                lv->SubItems->Add(convertString(curClass->classID));
                                viewClassUI->Items->Add(lv);
                                cnt--;
                                curClass = curClass->next;
                            }

                            curYear = curYear->next;
                        }
                    }
                }


            private:
                System::Void updateCoursebtn_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (courseUpdateUI->Visible) {
                        if (curCourseUpdate)
                            if ((updateCourseName->Text != convertString(curCourseUpdate->courseName)) || (updateCourseCre->Text != convertString(to_string(curCourseUpdate->credits))) || (updateCourseMaxSt->Text != convertString(to_string(curCourseUpdate->maxStudents))) || (updateCourseRoom->Text != convertString(curCourseUpdate->room)) || (updateCourseRegisStart->Value != DateTime(stoi(curCourseUpdate->startDate.year), stoi(curCourseUpdate->startDate.month), stoi(curCourseUpdate->startDate.day))) || (updateCourseRegisEnd->Value != DateTime(stoi(curCourseUpdate->endDate.year), stoi(curCourseUpdate->endDate.month), stoi(curCourseUpdate->endDate.day)) ||

                                    updateCourseD1->SelectedIndex != getWeekdayIndex(curCourseUpdate->day1))
                                || (updateCourseD2->SelectedIndex != getWeekdayIndex(curCourseUpdate->day2)) || (updateCourseS1->SelectedIndex != curCourseUpdate->session1[0] - '1') || (updateCourseS2->SelectedIndex != curCourseUpdate->session2[0] - '1')) {

                                System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Are you sure you want to discard the changes you made?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
                                if (dialogResult == System::Windows::Forms::DialogResult::No) {
                                    return;
                                }
                            }
                        btDelCourse->Hide();
                        updateCoursePanel->Hide();
                        courseUpdateUI->Hide();
                        classIDIndex = -1;
                        studentIndex = -1;
                    } else {
                        if (!hideAllStaff())
                            return;
                        courseUpdateUI->Show();
                        courseUpdateUI->SendToBack();
                        listCourses->Items->Clear();
                        if (coursesToUpdate) coursesToUpdate->Clear();
                        coursesToUpdate = gcnew List<String ^>();
                        AcademicYears* curYear = yearList2;
                        if (curYear) {
                            Semesters* sem = curYear->semesters;
                            if (sem) {
                                Courses* curCourse = sem->courses;
                                //cout << sem->semesterNo << endl;
                                while (curCourse) {
                                    coursesToUpdate->Add(convertString(curCourse->courseID));
                                    listCourses->Items->Add(convertString(curCourse->courseID));
                                    curCourse = curCourse->next;
                                }
                            }
                        }
                    }
                    //ListBox
                }

                private:
                    int getWeekdayIndex(string weekday) {
                        for (auto& c : weekday)
                            c = (char)toupper(c);
                        if (weekday == "MON")
                            return 0;
                        if (weekday == "TUE")
                            return 1;
                        if (weekday == "WED")
                            return 2;
                        if (weekday == "THU")
                            return 3;
                        if (weekday == "FRI")
                            return 4;
                        if (weekday == "SAT")
                            return 5;
                }

                private:
                    string indexToWeekday(int index)
                    {
                        switch (index) {
                        case 0:
                            return "MON";
                        case 1:
                            return "TUE";
                        case 2:
                            return "WED";
                        case 3:
                            return "THU";
                        case 4:
                            return "FRI";
                        case 5:
                            return "SAT";
                        }
                    }
            private:
                void writeDataToCourseUpdateUI(Courses* course) {
                    updateCourseName->Text = convertString(course->courseName);
                    updateCourseCre->Text = convertString(to_string(course->credits));
                    updateCourseMaxSt->Text = convertString(to_string(course->maxStudents));
                    updateCourseRoom->Text = convertString(course->room);
                    updateCourseRegisStart->Value = DateTime(stoi(course->startDate.year), stoi(course->startDate.month), stoi(course->startDate.day));
                    updateCourseRegisEnd->Value = DateTime(stoi(course->endDate.year), stoi(course->endDate.month), stoi(course->endDate.day));

                    updateCourseLecturer->Text = convertString(course->lecturerName);
                    updateCourseD1->Text = convertString(course->day1);
                    updateCourseD2->Text = convertString(course->day2);
                    updateCourseS1->Text = convertString(getSession(course->session1));
                    updateCourseS2->Text = convertString(getSession(course->session2));
                    updateCourseD1->SelectedIndex = getWeekdayIndex(course->day1);
                    updateCourseD2->SelectedIndex = getWeekdayIndex(course->day2);
                    updateCourseS1->SelectedIndex = course->session1[0] - '1';
                    updateCourseS2->SelectedIndex = course->session2[0] - '1';
                    
                    updateCourseName->Font = gcnew System::Drawing::Font(updateCourseName->Font, FontStyle::Regular);
                    updateCourseCre->Font = gcnew System::Drawing::Font(updateCourseCre->Font, FontStyle::Regular);
                    updateCourseMaxSt->Font = gcnew System::Drawing::Font(updateCourseMaxSt->Font, FontStyle::Regular);
                    updateCourseRoom->Font = gcnew System::Drawing::Font(updateCourseRoom->Font, FontStyle::Regular);
                    updateCourseRegisStart->Font = gcnew System::Drawing::Font(updateCourseRegisStart->Font, FontStyle::Regular);
                    updateCourseRegisEnd->Font = gcnew System::Drawing::Font(updateCourseRegisEnd->Font, FontStyle::Regular);
                    updateCourseLecturer->Font = gcnew System::Drawing::Font(updateCourseLecturer->Font, FontStyle::Regular);
                    updateCourseD1->Font = gcnew System::Drawing::Font(updateCourseD1->Font, FontStyle::Regular);
                    updateCourseD2->Font = gcnew System::Drawing::Font(updateCourseD2->Font, FontStyle::Regular);
                    updateCourseS1->Font = gcnew System::Drawing::Font(updateCourseS1->Font, FontStyle::Regular);
                    updateCourseS2->Font = gcnew System::Drawing::Font(updateCourseS2->Font, FontStyle::Regular);
                }

            private:
                System::Void listCourses_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (listCourses->SelectedItems->Count > 0) {
                        selectedIndex = listCourses->SelectedIndex;
                        curCourseUpdate = yearList2->semesters->courses->findCourseByID(convertToString(coursesToUpdate[selectedIndex]));
                        if (!curCourseUpdate) {
                            MessageBox::Show("Can't find course with ID: " + coursesToUpdate[selectedIndex], "Course Update Session", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);  
                            return;
                        }

                        writeDataToCourseUpdateUI(curCourseUpdate);
                        updateCoursePanel->Show();
                        btDelCourse->Show();
                    } else {
                        selectedIndex = -1;
                        btDelCourse->Hide();
                        updateCoursePanel->Hide();
                    }
                }

            private:
                System::Void updateCourseName_KeyUp(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (updateCourseName->Text != convertString(curCourseUpdate->courseName)) {
                        updateCourseName->Font = gcnew System::Drawing::Font(updateCourseName->Font, FontStyle::Bold);
                    } else {
                        updateCourseName->Font = gcnew System::Drawing::Font(updateCourseName->Font, FontStyle::Regular);
                    }
                }

            private:
                System::Void updateCourseCre_KeyUp(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (updateCourseCre->Text != convertString(to_string(curCourseUpdate->credits))) {
                        updateCourseCre->Font = gcnew System::Drawing::Font(updateCourseCre->Font, FontStyle::Bold);
                    } else {
                        updateCourseCre->Font = gcnew System::Drawing::Font(updateCourseCre->Font, FontStyle::Regular);
                    }
                }

            private:
                System::Void updateCourseMaxSt_KeyUp(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (updateCourseMaxSt->Text != convertString(to_string(curCourseUpdate->maxStudents))) {
                        updateCourseMaxSt->Font = gcnew System::Drawing::Font(updateCourseMaxSt->Font, FontStyle::Bold);
                    } else {
                        updateCourseMaxSt->Font = gcnew System::Drawing::Font(updateCourseMaxSt->Font, FontStyle::Regular);
                    }
                }

            private:
                System::Void updateCourseRoom_KeyUp(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (updateCourseRoom->Text != convertString(curCourseUpdate->room)) {
                        updateCourseRoom->Font = gcnew System::Drawing::Font(updateCourseRoom->Font, FontStyle::Bold);
                    } else {
                        updateCourseRoom->Font = gcnew System::Drawing::Font(updateCourseRoom->Font, FontStyle::Regular);
                    }
                }

            private:
                System::Void updateCourseLecturer_KeyUp(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (updateCourseLecturer->Text != convertString(curCourseUpdate->lecturerName)) {
                        updateCourseLecturer->Font = gcnew System::Drawing::Font(updateCourseLecturer->Font, FontStyle::Bold);
                    } else {
                        updateCourseLecturer->Font = gcnew System::Drawing::Font(updateCourseLecturer->Font, FontStyle::Regular);
                    }
                }

            private:
                System::Void updateCourseD1_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (updateCourseD1->SelectedIndex != getWeekdayIndex(curCourseUpdate->day1)) {
                        updateCourseD1->Font = gcnew System::Drawing::Font(updateCourseD1->Font, FontStyle::Bold);
                    } else {
                        updateCourseD1->Font = gcnew System::Drawing::Font(updateCourseD1->Font, FontStyle::Regular);
                    }
                }

            private:
                System::Void updateCourseS1_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (updateCourseS1->SelectedIndex != curCourseUpdate->session1[0] - '1') {
                        updateCourseS1->Font = gcnew System::Drawing::Font(updateCourseS1->Font, FontStyle::Bold);
                    } else {
                        updateCourseS1->Font = gcnew System::Drawing::Font(updateCourseS1->Font, FontStyle::Regular);
                    }
                }

            private:
                System::Void updateCourseD2_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (updateCourseD2->SelectedIndex != getWeekdayIndex(curCourseUpdate->day2)) {
                        updateCourseD2->Font = gcnew System::Drawing::Font(updateCourseD2->Font, FontStyle::Bold);
                    } else {
                        updateCourseD2->Font = gcnew System::Drawing::Font(updateCourseD2->Font, FontStyle::Regular);
                    }
                }

            private:
                System::Void updateCourseS2_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (updateCourseS2->SelectedIndex != curCourseUpdate->session2[0] - '1') {
                        updateCourseS2->Font = gcnew System::Drawing::Font(updateCourseS2->Font, FontStyle::Bold);
                    } else {
                        updateCourseS2->Font = gcnew System::Drawing::Font(updateCourseS2->Font, FontStyle::Regular);
                    }
                }

            private:
                System::Void updateCourseRegisEnd_CloseUp(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (updateCourseRegisEnd->Value != DateTime(stoi(curCourseUpdate->endDate.year), stoi(curCourseUpdate->endDate.month), stoi(curCourseUpdate->endDate.day))) {
                        updateCourseRegisEnd->Font = gcnew System::Drawing::Font(updateCourseRegisEnd->Font, FontStyle::Bold);
                    } else {
                        updateCourseRegisEnd->Font = gcnew System::Drawing::Font(updateCourseRegisEnd->Font, FontStyle::Regular);
                    }
                }

            private:
                System::Void updateCourseRegisStart_CloseUp(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (updateCourseRegisStart->Value != DateTime(stoi(curCourseUpdate->startDate.year), stoi(curCourseUpdate->startDate.month), stoi(curCourseUpdate->startDate.day))) {
                        updateCourseRegisStart->Font = gcnew System::Drawing::Font(updateCourseRegisStart->Font, FontStyle::Bold);
                    } else {
                        updateCourseRegisStart->Font = gcnew System::Drawing::Font(updateCourseRegisStart->Font, FontStyle::Regular);
                    }
                }

            private:
                System::Void btRevertChanges_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if ((updateCourseName->Text != convertString(curCourseUpdate->courseName)) || (updateCourseCre->Text != convertString(to_string(curCourseUpdate->credits))) || (updateCourseMaxSt->Text != convertString(to_string(curCourseUpdate->maxStudents))) || (updateCourseRoom->Text != convertString(curCourseUpdate->room)) || (updateCourseRegisStart->Value != DateTime(stoi(curCourseUpdate->startDate.year), stoi(curCourseUpdate->startDate.month), stoi(curCourseUpdate->startDate.day))) || (updateCourseRegisEnd->Value != DateTime(stoi(curCourseUpdate->endDate.year), stoi(curCourseUpdate->endDate.month), stoi(curCourseUpdate->endDate.day)) ||

                        updateCourseD1->SelectedIndex != getWeekdayIndex(curCourseUpdate->day1)) || (updateCourseD2->SelectedIndex != getWeekdayIndex(curCourseUpdate->day2)) || (updateCourseS1->SelectedIndex != curCourseUpdate->session1[0] - '1') || (updateCourseS2->SelectedIndex != curCourseUpdate->session2[0] - '1')) {

                        System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Are you sure you want to discard the changes you made?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
                        if (dialogResult == System::Windows::Forms::DialogResult::Yes) {
                            writeDataToCourseUpdateUI(curCourseUpdate);
                        }
                    } else {
                        MessageBox::Show("No changes made!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
                    }
                }

            private:
                System::Void btnSave_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if ((updateCourseName->Text != convertString(curCourseUpdate->courseName)) || (updateCourseCre->Text != convertString(to_string(curCourseUpdate->credits))) || (updateCourseMaxSt->Text != convertString(to_string(curCourseUpdate->maxStudents))) || (updateCourseRoom->Text != convertString(curCourseUpdate->room)) || (updateCourseRegisStart->Value != DateTime(stoi(curCourseUpdate->startDate.year), stoi(curCourseUpdate->startDate.month), stoi(curCourseUpdate->startDate.day))) || (updateCourseRegisEnd->Value != DateTime(stoi(curCourseUpdate->endDate.year), stoi(curCourseUpdate->endDate.month), stoi(curCourseUpdate->endDate.day)) ||

                            updateCourseD1->SelectedIndex != getWeekdayIndex(curCourseUpdate->day1))
                        || (updateCourseD2->SelectedIndex != getWeekdayIndex(curCourseUpdate->day2)) || (updateCourseS1->SelectedIndex != curCourseUpdate->session1[0] - '1') || (updateCourseS2->SelectedIndex != curCourseUpdate->session2[0] - '1')) {

                        curCourseUpdate->courseName = convertToString(updateCourseName->Text);
                        curCourseUpdate->credits = stoi(convertToString(updateCourseCre->Text));
                        curCourseUpdate->maxStudents = stoi(convertToString(updateCourseMaxSt->Text));
                        curCourseUpdate->room = convertToString(updateCourseRoom->Text);

                        curCourseUpdate->startDate.year = to_string(updateCourseRegisStart->Value.Year);
                        curCourseUpdate->startDate.month = to_string(updateCourseRegisStart->Value.Month);
                        curCourseUpdate->startDate.day = to_string(updateCourseRegisStart->Value.Day);
                        curCourseUpdate->endDate.year = to_string(updateCourseRegisEnd->Value.Year);
                        curCourseUpdate->endDate.month = to_string(updateCourseRegisEnd->Value.Month);
                        curCourseUpdate->endDate.day = to_string(updateCourseRegisEnd->Value.Day);

                        curCourseUpdate->lecturerName = convertToString(updateCourseLecturer->Text);
                        curCourseUpdate->day1 = indexToWeekday(updateCourseD1->SelectedIndex);
                        curCourseUpdate->day2 = indexToWeekday(updateCourseD2->SelectedIndex);
                        curCourseUpdate->session1 = updateCourseS1->SelectedIndex + '1';
                        curCourseUpdate->session2 = updateCourseS2->SelectedIndex + '1';

                        MessageBox::Show("Course Updated Successfully!", "Status", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);

                        writeDataToCourseUpdateUI(curCourseUpdate);
                    } else {
                        MessageBox::Show("No changes made!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
                    }
                }

            private:
                System::Void btDelCourse_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    string courseID = yearList2->semesters->courses->findCourseByID(convertToString(coursesToUpdate[selectedIndex]))->courseID;
                    System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Are you sure you want to delete course " + convertString(courseID) +  "?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
                    if (dialogResult == System::Windows::Forms::DialogResult::Yes) {
                        deleteCourseByID(yearList2->semesters->courses, courseID, studentList2);
                        MessageBox::Show("Course Deleted Successfully!", "Status", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
                        curCourseUpdate = nullptr;
                        courseUpdateUI->Hide();
                        updateCoursePanel->Hide();
                        updateCoursebtn->PerformClick();
                    }
                    
                }

            private:
                System::Void btnAddClass_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (classInput->Text != "") {
                        if (btnAddClass->Text == L"Add class") {
                            treeViewClass->Nodes->Add(gcnew TreeNode(classInput->Text));
                            classIDList->Add(gcnew String(classInput->Text));
                            stdClassList->Add(gcnew List<studentClass ^>);
                            classInput->Clear();
                            classInput->Focus();
                        } else {
                            classIDList[classIDIndex] = classInput->Text;
                            treeViewClass->Nodes[classIDIndex]->Text = classInput->Text;
                            classInput->Clear();
                            btnAddClass->Text = L"Add class";
                        }
                    }
                    panelAddStudent->Hide();
                }

            private:
                System::Void newSchoolYear_Click(System::Object ^ sender, System::EventArgs ^ e)
                {

                    if (panelSchoolYear->Visible) {
                        panelSchoolYear->Hide();

                        classIDIndex = -1;
                        studentIndex = -1;
                        return;
                    } 
                    
                    if (!hideAllStaff())
                        return;
                    if (classIDList)
                        classIDList->Clear();
                    classIDList = gcnew List<String ^>();
                    if (stdClassList)
                        stdClassList->Clear();
                    stdClassList = gcnew List<List<studentClass^>^>();
                    panelSchoolYear->Show();
                    panelSchoolYear->SendToBack();
                }

            private:
                System::Void treeViewClass_NodeMouseClick(System::Object ^ sender, System::Windows::Forms::TreeNodeMouseClickEventArgs ^ e)
                {
                    if (e->Node->Parent == nullptr) {
                        classIDIndex = e->Node->Index;
                        classInput->Text = classIDList[e->Node->Index];
                        btnAddClass->Text = L"Change";

                        studentID->Text = "";
                        fName->Text = "";
                        lName->Text = "";
                        socialID->Text = "";
                        gender->SelectedIndex = 0;
                        doB->Value = DateTime::Now;
                        btnAddStd->Text = L"Add";
                    } else {
                        studentIndex = e->Node->Index;
                        classIDIndex = e->Node->Parent->Index;

                        List<studentClass ^> ^ std = stdClassList[classIDIndex];
                        studentID->Text = std[studentIndex]->studentID;
                        fName->Text = std[e->Node->Index]->fName;
                        lName->Text = std[e->Node->Index]->lName;
                        socialID->Text = std[e->Node->Index]->socialID;
                        gender->SelectedIndex = std[e->Node->Index]->gender;
                        doB->Value = std[e->Node->Index]->date;

                        btnAddStd->Text = L"Save";
                    }
                    panelAddStudent->Show();
                    studentID->Focus();
                }

            private:
                System::Void btnAddStd_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (btnAddStd->Text == L"Add") {
                        studentClass ^ std = gcnew studentClass();
                        std->studentID = studentID->Text;
                        std->fName = fName->Text;
                        std->lName = lName->Text;
                        std->socialID = socialID->Text;
                        std->gender = gender->SelectedIndex;
                        std->date = doB->Value;
                        stdClassList[classIDIndex]->Add(std);
                        treeViewClass->Nodes[classIDIndex]->Nodes->Add(gcnew TreeNode(studentID->Text));

                        studentID->Text = "";
                        fName->Text = "";
                        lName->Text = "";
                        socialID->Text = "";
                        gender->SelectedIndex = 0;
                        doB->Value = DateTime::Now;

                        studentID->Focus();
                    } else {
                        List<studentClass ^> ^ std = stdClassList[classIDIndex];
                        std[studentIndex]->studentID = studentID->Text;
                        std[studentIndex]->fName = fName->Text;
                        std[studentIndex]->lName = lName->Text;
                        std[studentIndex]->socialID = socialID->Text;
                        std[studentIndex]->gender = gender->SelectedIndex;
                        std[studentIndex]->date = doB->Value;

                        treeViewClass->Nodes[classIDIndex]->Nodes[studentIndex]->Text = studentID->Text;

                        studentID->Text = "";
                        fName->Text = "";
                        lName->Text = "";
                        socialID->Text = "";
                        gender->SelectedIndex = 0;
                        doB->Value = DateTime::Now;
                        btnAddStd->Text = L"Add";

                        studentID->Focus();                    
                    }
                    btnAddClass->Text = L"Add class";
                }

            private:
                System::Void classInput_KeyDown(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (e->KeyValue == (int)Keys::Enter) {
                        btnAddClass->PerformClick();
                    }
                }

            private:
                System::Void doB_KeyDown(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (e->KeyValue == (int)Keys::Enter) {
                        btnAddStd->PerformClick();
                    }
                }

            private:
                System::Void studentID_KeyDown(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (e->KeyValue == (int)Keys::Enter) {
                        btnAddStd->PerformClick();
                    }
                }

            private:
                System::Void fName_KeyDown(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (e->KeyValue == (int)Keys::Enter) {
                        btnAddStd->PerformClick();
                    }
                }

            private:
                System::Void lName_KeyDown(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (e->KeyValue == (int)Keys::Enter) {
                        btnAddStd->PerformClick();
                    }
                }

            private:
                System::Void socialID_KeyDown(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (e->KeyValue == (int)Keys::Enter) {
                        btnAddStd->PerformClick();
                    }
                }

            private:
                System::Void gender_KeyDown(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (e->KeyValue == (int)Keys::Enter) {
                        btnAddStd->PerformClick();
                    }
                }

            private:
                System::Void panelSchoolYear_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (btnAddClass->Text == L"Change") {
                        classInput->Clear();
                        btnAddClass->Text = L"Add class";
                        panelAddStudent->Hide();
                    }
                }

            private:
                System::Void btnFinish_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (startYear->Text == L"" || endYear->Text == L"") {
                        MessageBox::Show("Start Year and End Year required!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);  
                        return;
                    }

                    AcademicYears* newyear = new AcademicYears;
                    string s1 = convertToString(startYear->Text), s2 = convertToString(endYear->Text);
                    newyear->year = s1.substr(2, 2) + s2.substr(2, 2);
                    //cout << newyear->year << endl;

                    Students* newstd;
                    int i = 0, cntstd = 0;
                    for each (List<studentClass ^> ^ stdList in stdClassList) {
                        Classes* newClass = new Classes;
                        newClass->classID = convertToString(classIDList[i]);

                        for each (studentClass ^ std in stdList) {
                            cntstd++;
                            //cout << endl << cntstd;
                            newstd = new Students;

                            newstd->studentID = convertToString(std->studentID);
                            newstd->account = new Accounts;
                            newstd->account->firstname = convertToString(std->fName);
                            newstd->account->lastname = convertToString(std->lName);
                            newstd->account->socialID = convertToString(std->socialID);
                            //cout << newstd->studentID << " ";
                            switch (std->gender) {
                                case 0: {
                                    newstd->account->gender = 'F';
                                    break;
                                }
                                case 1: {
                                    newstd->account->gender = 'M';
                                    break;
                                }
                                case 2:{
                                    newstd->account->gender = 'O';
                                    break;
                                }
                            }
                                //cout << "a";
                            newstd->account->doB.day = to_string(std->date.Day);
                            newstd->account->doB.month = to_string(std->date.Month);
                            newstd->account->doB.year = to_string(std->date.Year);
                            newstd->account->uName = newstd->studentID;
                            newstd->account->pwd = "123456";
                            newstd->classID = newClass->classID;
                            //cout << endl
                                 //<< newstd->account->doB.day << " " << newstd->account->doB.month << " " << newstd->account->doB.year;
                            //
                            Students* s = new Students;
                            s->studentID = newstd->studentID;
                            s->account = newstd->account;
                            s->classID = newstd->classID;
                            s->next = newClass->students;
                            newClass->students = s;
                            //
                            //cout << "D";
                            newstd->next = studentList2;
                            studentList2 = newstd;
                        }
                        newClass->next = newyear->classes;
                        newyear->classes = newClass;

                        i++;
                    }
                    newyear->next = yearList2;
                    yearList2 = newyear;

                    MessageBox::Show("Succesfully imported " + cntstd + " student(s) and " + i + " class(es).", "Status", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);      
                    
                    studentID->Text = "";
                    fName->Text = "";
                    lName->Text = "";
                    socialID->Text = "";
                    gender->SelectedIndex = 0;
                    doB->Value = DateTime::Now;

                    btnAddStd->Text = L"Add";
                    classInput->Clear();
                    btnAddClass->Text = L"Add class";

                    if (classIDList)
                        classIDList->Clear();
                    if (stdClassList)
                        stdClassList->Clear();
                    treeViewClass->Nodes->Clear();
                    panelAddStudent->Hide();
                    panelSchoolYear->Hide();
                }

            private:
                System::Void btnFromFile_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    System::IO::Stream ^ myStream;
                    OpenFileDialog ^ openFileDialog1 = gcnew OpenFileDialog;
                    openFileDialog1->Filter = "CSV files (*.csv)|*.csv";
                    int cntStd = 0;

                    if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                        if ((myStream = openFileDialog1->OpenFile()) != nullptr) {
                            String ^ strfileName = openFileDialog1->InitialDirectory + openFileDialog1->FileName;

                            ifstream f;
                            f.open(convertToString(strfileName));
                            string trash = "231", studentID;
                            getline(f, trash);
                            string no = "";
                            while (getline(f, no, ',')) {
                                cntStd++;
                                string studentid = "", fname = "", lname = "", socialid = "";
                                int day = 0, month = 0, year = 0;
                                string gender = "";
                                
                                getline(f, studentid, ',');
                                getline(f, fname, ',');
                                getline(f, lname, ',');
                                getline(f, socialid, ',');
                                getline(f, gender, ',');
                                f >> day;
                                f.get();
                                f >> month;
                                f.get();
                                f >> year;
                                f.get();

                                studentClass ^ std = gcnew studentClass();
                                std->studentID = convertString(studentid);
                                std->fName = convertString(fname);
                                std->lName = convertString(lname);
                                if (gender == "F")
                                    std->gender = 0;
                                else {
                                    if (gender == "M")
                                        std->gender = 1;
                                    else
                                        std->gender = 2;
                                }
                                std->socialID = convertString(socialid);
                                //cout << no << " " << studentid << " " << day << " " << month << " " << year << endl;
                                std->date = DateTime(year, month, day);
                                
                                stdClassList[classIDIndex]->Add(std);

                                treeViewClass->Nodes[classIDIndex]->Nodes->Add(gcnew TreeNode(std->studentID));
                            }
                            f.close();

                            MessageBox::Show("Succesfully imported " + cntStd + " students to Class " + classInput->Text, "Status", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
                            myStream->Close();
                        }
                    }
                }

            private:
                System::Void btnCancel_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (studentID->Text == "") {
                    } else {
                        System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("You have unsaved changes! Are you sure you want to delete them all? ", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
                        if (dialogResult == System::Windows::Forms::DialogResult::No) {
                            return;
                        }
                    }
                    
                    studentID->Text = "";
                    fName->Text = "";
                    lName->Text = "";
                    socialID->Text = "";
                    gender->SelectedIndex = 0;
                    doB->Value = DateTime::Now;

                    btnAddStd->Text = L"Add";
                    classInput->Clear();
                    btnAddClass->Text = L"Add class";
                    panelAddStudent->Hide();
                }

            private:
                System::Void btnCancelAll_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (treeViewClass->GetNodeCount(true) != 0) {
                        System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("You have unsaved changes! Are you sure you want to delete them all? ", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
                        if (dialogResult == System::Windows::Forms::DialogResult::No) {
                            return;
                        }
                    }

                    studentID->Text = "";
                    fName->Text = "";
                    lName->Text = "";
                    socialID->Text = "";
                    gender->SelectedIndex = 0;
                    doB->Value = DateTime::Now;

                    btnAddStd->Text = L"Add";
                    classInput->Clear();
                    btnAddClass->Text = L"Add class";

                    if (classIDList)
                        classIDList->Clear();
                    if (stdClassList)
                        stdClassList->Clear();
                    treeViewClass->Nodes->Clear();
                    panelAddStudent->Hide();
                    panelSchoolYear->Hide();
                }

            private:
                System::Void newSemester_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (newSemesterUI->Visible) {
                        if (inputedCourseList->HasChildren || nsCourseID->Text != "" || nsCourseName->Text != "" || nsCredit->Text != "" || nsMaxStd->Text != "" || nsRoom->Text != "" || nsLecturerName->Text != "" || newSem->Text != "") {
                            System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("You have unsaved changes! Discard them all?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
                            if (dialogResult == System::Windows::Forms::DialogResult::No) {
                                return;
                            }
                        }
                        newSemYear->Items->Clear();
                        nsCourseID->Text = "";
                        nsCourseName->Text = "";
                        nsCredit->Text = "";
                        nsMaxStd->Text = "";
                        nsRoom->Text = "";
                        nsLecturerName->Text = "";
                        nsDay1->SelectedIndex = 0;
                        nsSession1->SelectedIndex = 0;
                        nsDay2->SelectedIndex = 0;
                        nsSession2->SelectedIndex = 0;
                        nsRegisEnd->Value = DateTime::Now;
                        nsRegisStart->Value = DateTime::Now;
                        nsBtnAdd->Text = L"Add";
                        newSemesterUI->Hide();
                    } else {
                        if (!hideAllStaff())
                            return;
                        newSemesterUI->Show();
                        if (inputedCourse)
                            inputedCourse->Clear();
                        inputedCourse = gcnew List<courseClass ^>();
                        AcademicYears* curYear = yearList2;
                        while (curYear) {
                            newSemYear->Items->Add(gcnew String(convertString(curYear->getFullYear())));
                            curYear = curYear->next;
                        }
                        newSem->Focus();
                    }
                }

            private:
                System::Void nsBtnAdd_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (nsBtnAdd->Text == L"Add") {
                        courseClass ^ course = gcnew courseClass();

                        course->courseID = nsCourseID->Text;
                        course->courseName = nsCourseName->Text;
                        course->credits = nsCredit->Text;
                        course->maxStd = nsMaxStd->Text;
                        course->room = nsRoom->Text;
                        course->lecturer = nsLecturerName->Text;
                        course->d1 = nsDay1->SelectedIndex;
                        course->s1 = nsSession1->SelectedIndex;
                        course->d2 = nsDay2->SelectedIndex;
                        course->s2 = nsSession2->SelectedIndex;
                        course->regisS = nsRegisStart->Value;
                        course->regisE = nsRegisEnd->Value;

                        inputedCourse->Add(course);
                        inputedCourseList->Items->Add(course->courseID);

                        nsCourseID->Text = "";
                        nsCourseName->Text = "";
                        nsCredit->Text = "";
                        nsMaxStd->Text = "";
                        nsRoom->Text = "";
                        nsLecturerName->Text = "";
                        nsDay1->SelectedIndex = 0;
                        nsSession1->SelectedIndex = 0;
                        nsDay2->SelectedIndex = 0;
                        nsSession2->SelectedIndex = 0;
                        nsRegisEnd->Value = DateTime::Now;
                        nsRegisStart->Value = DateTime::Now;

                        nsCourseName->Focus();
                    } else {
                        inputedCourse[selectedIndex]->courseID = nsCourseID->Text;
                        inputedCourse[selectedIndex]->courseName = nsCourseName->Text;
                        inputedCourse[selectedIndex]->credits = nsCredit->Text;
                        inputedCourse[selectedIndex]->maxStd = nsMaxStd->Text;
                        inputedCourse[selectedIndex]->room = nsRoom->Text;
                        inputedCourse[selectedIndex]->lecturer = nsLecturerName->Text;
                        inputedCourse[selectedIndex]->d1 = nsDay1->SelectedIndex;
                        inputedCourse[selectedIndex]->s1 = nsSession1->SelectedIndex;
                        inputedCourse[selectedIndex]->d2 = nsDay2->SelectedIndex;
                        inputedCourse[selectedIndex]->s2 = nsSession2->SelectedIndex;
                        inputedCourse[selectedIndex]->regisS = nsRegisStart->Value;
                        inputedCourse[selectedIndex]->regisE = nsRegisEnd->Value;

                        inputedCourseList->Items[selectedIndex] = inputedCourse[selectedIndex]->courseID;

                        nsCourseID->Text = "";
                        nsCourseName->Text = "";
                        nsCredit->Text = "";
                        nsMaxStd->Text = "";
                        nsRoom->Text = "";
                        nsLecturerName->Text = "";
                        nsDay1->SelectedIndex = 0;
                        nsSession1->SelectedIndex = 0;
                        nsDay2->SelectedIndex = 0;
                        nsSession2->SelectedIndex = 0;
                        nsRegisEnd->Value = DateTime::Now;
                        nsRegisStart->Value = DateTime::Now;
                        nsBtnAdd->Text = L"Add";

                        nsCourseName->Focus();
                    }
                }

            private:
                void writeDataToCourseInputUI(courseClass^ course) {
                    nsCourseID->Text = course->courseID;
                    nsCourseName->Text = course->courseName;
                    nsCredit->Text = course->credits;
                    nsMaxStd->Text = course->maxStd;
                    nsRoom->Text = course->room;
                    nsLecturerName->Text = course->lecturer;
                    nsDay1->SelectedIndex = course->d1;
                    nsSession1->SelectedIndex = course->s1;
                    nsDay2->SelectedIndex = course->d2;
                    nsSession2->SelectedIndex = course->s2;
                    nsRegisEnd->Value = course->regisE;
                    nsRegisStart->Value = course->regisS;
                }

            private:
                System::Void inputedCourseList_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (inputedCourseList->SelectedItems->Count > 0) {
                        selectedIndex = inputedCourseList->SelectedIndex;

                        writeDataToCourseInputUI(inputedCourse[selectedIndex]);

                        nsBtnAdd->Text = L"Change";
                        nsCourseID->Focus();
                    } else {
                        selectedIndex = -1;

                        nsBtnAdd->Text = L"Add";
                    }
                }

            private:
                System::Void nsBtnDone_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (newSem->Text == "") {
                        System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Enter the semester first!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        return;
                    }
                    if (newSemYear->Text == "") {
                        System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Missing academic year that the semester belong to!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        return;
                    }
                    AcademicYears* curYear = yearList2;
                    string inputedYear = convertToString(newSemYear->Text);
                    while (curYear && curYear->getFullYear() != inputedYear) {
                        curYear = curYear->next;
                    }
                    if (curYear) {
                        Semesters* sem = new Semesters;
                        sem->semesterNo = stoi(convertToString(newSem->Text));
                        sem->startDate.day = to_string(nsRegisStart->Value.Day);
                        sem->startDate.month = to_string(nsRegisStart->Value.Month);
                        sem->startDate.year = to_string(nsRegisStart->Value.Year);
                        sem->endDate.day = to_string(nsRegisEnd->Value.Day);
                        sem->endDate.month = to_string(nsRegisEnd->Value.Month);
                        sem->endDate.year = to_string(nsRegisEnd->Value.Year);
                        
                        for each (courseClass^ course in inputedCourse) {
                            Courses* nc = new Courses;
                            nc->courseID = convertToString(course->courseID);
                            nc->courseName = convertToString(course->courseName);
                            nc->credits = stoi(convertToString(course->credits));
                            nc->maxStudents = stoi(convertToString(course->maxStd));
                            nc->room = convertToString(course->room);

                            nc->startDate.year = to_string(course->regisS.Year);
                            nc->startDate.month = to_string(course->regisS.Month);
                            nc->startDate.day = to_string(course->regisS.Day);
                            nc->endDate.year = to_string(course->regisE.Year);
                            nc->endDate.month = to_string(course->regisE.Month);
                            nc->endDate.day = to_string(course->regisE.Day);

                            nc->lecturerName = convertToString(course->lecturer);
                            nc->day1 = indexToWeekday(course->d1);
                            nc->day2 = indexToWeekday(course->d2);
                            nc->session1 = course->s1 + '1';
                            nc->session2 = course->s2 + '1';

                            nc->next = sem->courses;
                            sem->courses = nc;
                        }
                        sem->next = curYear->semesters;
                        curYear->semesters = sem;
                        MessageBox::Show("Semester Added Successfully!", "Status", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
                        newSemYear->Items->Clear();
                        nsCourseID->Text = "";
                        nsCourseName->Text = "";
                        nsCredit->Text = "";
                        nsMaxStd->Text = "";
                        nsRoom->Text = "";
                        nsLecturerName->Text = "";
                        nsDay1->SelectedIndex = 0;
                        nsSession1->SelectedIndex = 0;
                        nsDay2->SelectedIndex = 0;
                        nsSession2->SelectedIndex = 0;
                        nsRegisEnd->Value = DateTime::Now;
                        nsRegisStart->Value = DateTime::Now;
                        nsBtnAdd->Text = L"Add";
                        newSemesterUI->Hide();
                    }
                }

            private:
                System::Void newSemesterUI_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (nsBtnAdd->Text == L"Change") {
                        if (inputedCourseList->HasChildren || nsCourseID->Text != "" || nsCourseName->Text != "" || nsCredit->Text != "" || nsMaxStd->Text != "" || nsRoom->Text != "" || nsLecturerName->Text != "" || newSem->Text != "") {
                            System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("You have unsaved changes! Discard them all?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
                            if (dialogResult == System::Windows::Forms::DialogResult::No) {
                                return;
                            }
                        }

                        nsCourseID->Text = "";
                        nsCourseName->Text = "";
                        nsCredit->Text = "";
                        nsMaxStd->Text = "";
                        nsRoom->Text = "";
                        nsLecturerName->Text = "";
                        nsDay1->SelectedIndex = 0;
                        nsSession1->SelectedIndex = 0;
                        nsDay2->SelectedIndex = 0;
                        nsSession2->SelectedIndex = 0;
                        nsRegisEnd->Value = DateTime::Now;
                        nsRegisStart->Value = DateTime::Now;
                        nsBtnAdd->Text = L"Add";

                        nsCourseID->Focus();
                    }
                }

            private:
                System::Void nsBtnCancel_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    newSemester->PerformClick();
                }

            private:
                System::Void btnUpdateRes_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (updateStdRes->Visible) {
                        if (classIDIndex == -1 || studentIndex == -1) {
                        } else {

                            List<scoreBoardU ^> ^ cl = scoreBoardUList[classIDIndex];
                            scoreBoardU ^ std = cl[studentIndex];
                            if (sbUCourse->Items->Count > 0)
                            if (midMark->Text == convertString(formatDouble(std->course[sbUCourse->SelectedIndex]->mark->midtermScore)) && finMark->Text == convertString(formatDouble(std->course[sbUCourse->SelectedIndex]->mark->finalScore)) && totMark->Text == convertString(formatDouble(std->course[sbUCourse->SelectedIndex]->mark->totalScore)) && oMark->Text == convertString(formatDouble(std->course[sbUCourse->SelectedIndex]->mark->otherScore))) {
                            } else {
                                System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Are you sure you want to discard the changes you made?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
                                if (dialogResult == System::Windows::Forms::DialogResult::No) {
                                    return;
                                }
                            }
                        }
                            sbUCoursePan->Hide();
                            updateStdRes->Hide();

                            classIDIndex = -1;
                            studentIndex = -1;
                            return;
                    }
                    if (!hideAllStaff())
                        return;
                    if (scoreBoardUList)
                        scoreBoardUList->Clear();

                    treeViewsbU->Nodes->Clear();
                    scoreBoardUList = gcnew List<List<scoreBoardU ^> ^>();
                    List<scoreBoardU ^> ^ sbList = nullptr;

                    AcademicYears* curYear = yearList2;
                    int classIndex = -1;
                    while (curYear) {
                        Classes* curClass = curYear->classes;
                        while (curClass) {
                            Students* std = curClass->students;
                            sbList = gcnew List<scoreBoardU ^>();
                            treeViewsbU->Nodes->Add(gcnew TreeNode(convertString(curClass->classID)));
                            classIndex++;

                            while (std) {
                                scoreBoardU ^ sbU = gcnew scoreBoardU;
                                sbU->classID = convertString(curClass->classID);
                                sbU->stdID = convertString(std->studentID);

                                treeViewsbU->Nodes[classIndex]->Nodes->Add(gcnew TreeNode(sbU->stdID));

                                Scoreboards* sb = std->scoreBoards;
                                sbU->course = gcnew List<courseMark ^>();
                                while (sb) {
                                    courseMark ^ mark = gcnew courseMark();
                                    mark->mark = sb;

                                    sbU->course->Add(mark);
                                    sb = sb->next;
                                }
                                sbList->Add(sbU);

                                std = std->next;
                            }
                            curClass = curClass->next;
                            scoreBoardUList->Add(sbList);
                        }
                        curYear = curYear->next;
                    }


                    updateStdRes->Show();
                    updateStdRes->SendToBack();
                }

            private:
                System::Void sbUSearch_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    studentIndex = 0;
                    classIDIndex = 0;
                    for each (List<scoreBoardU^> ^ cl in scoreBoardUList) {
                        for each (scoreBoardU ^ std in cl) {
                            if (std->stdID == sbUStdID->Text) {
                                sbUCourse->Items->Clear();

                                for each (courseMark ^ m in std->course)
                                    sbUCourse->Items->Add(convertString(m->mark->courseID));

                                if (sbUCourse->Items->Count > 0) {
                                    sbUCourse->SelectedIndex = 0;
                                    midMark->Text = convertString(formatDouble(std->course[sbUCourse->SelectedIndex]->mark->midtermScore));
                                    finMark->Text = convertString(formatDouble(std->course[sbUCourse->SelectedIndex]->mark->finalScore));
                                    totMark->Text = convertString(formatDouble(std->course[sbUCourse->SelectedIndex]->mark->totalScore));
                                    oMark->Text = convertString(formatDouble(std->course[sbUCourse->SelectedIndex]->mark->otherScore));
                                } else {
                                    midMark->Text = "";
                                    finMark->Text = "";
                                    totMark->Text = "";
                                    oMark->Text = "";
                                }
                                sbUCoursePan->Show();
                                sbUCourse->Focus();
                                return;
                            }
                            studentIndex++;
                        }
                        classIDIndex++;
                    }

                    MessageBox::Show("Can't find student with ID " + sbUStdID->Text, "Warning", MessageBoxButtons::OK, MessageBoxIcon::Error);
                    sbUStdID->Focus();
                }

            private:
                System::Void treeViewsbU_NodeMouseClick(System::Object ^ sender, System::Windows::Forms::TreeNodeMouseClickEventArgs ^ e)
                {
                    if (e->Node->Parent != nullptr) {
                        studentIndex = e->Node->Index;
                        classIDIndex = e->Node->Parent->Index;

                        List<scoreBoardU ^> ^ cla = scoreBoardUList[classIDIndex];

                        scoreBoardU ^ std = cla[studentIndex];
                        sbUCourse->Items->Clear();

                        for each (courseMark ^ m in std->course)
                            sbUCourse->Items->Add(convertString(m->mark->courseID));

                        if (sbUCourse->Items->Count > 0) {
                            sbUCourse->SelectedIndex = 0;
                            midMark->Text = convertString(formatDouble(std->course[sbUCourse->SelectedIndex]->mark->midtermScore));
                            finMark->Text = convertString(formatDouble(std->course[sbUCourse->SelectedIndex]->mark->finalScore));
                            totMark->Text = convertString(formatDouble(std->course[sbUCourse->SelectedIndex]->mark->totalScore));
                            oMark->Text = convertString(formatDouble(std->course[sbUCourse->SelectedIndex]->mark->otherScore));
                        } else {
                            midMark->Text = "";
                            finMark->Text = "";
                            totMark->Text = "";
                            oMark->Text = "";
                        }
                        sbUCoursePan->Show();
                        sbUCourse->Focus();
                    }
                }

            private:
                System::Void sbUCourse_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e)
                {
                    List<scoreBoardU ^> ^ cl = scoreBoardUList[classIDIndex];
                    scoreBoardU ^ std = cl[studentIndex];
                    midMark->Text = convertString(formatDouble(std->course[sbUCourse->SelectedIndex]->mark->midtermScore));
                    finMark->Text = convertString(formatDouble(std->course[sbUCourse->SelectedIndex]->mark->finalScore));
                    totMark->Text = convertString(formatDouble(std->course[sbUCourse->SelectedIndex]->mark->totalScore));
                    oMark->Text = convertString(formatDouble(std->course[sbUCourse->SelectedIndex]->mark->otherScore));
                }

            private:
                System::Void sbUbtnSave_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    List<scoreBoardU ^> ^ cl = scoreBoardUList[classIDIndex];
                    scoreBoardU ^ std = cl[studentIndex];

                    if (midMark->Text == convertString(formatDouble(std->course[sbUCourse->SelectedIndex]->mark->midtermScore)) &&
                        finMark->Text == convertString(formatDouble(std->course[sbUCourse->SelectedIndex]->mark->finalScore)) &&
                        totMark->Text == convertString(formatDouble(std->course[sbUCourse->SelectedIndex]->mark->totalScore)) && oMark->Text == convertString(formatDouble(std->course[sbUCourse->SelectedIndex]->mark->otherScore))) {

                        MessageBox::Show("No changes made!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
                        return;
                    }

                    std->course[sbUCourse->SelectedIndex]->mark->midtermScore = stoi(convertToString(midMark->Text));
                    std->course[sbUCourse->SelectedIndex]->mark->finalScore = stoi(convertToString(finMark->Text));
                    std->course[sbUCourse->SelectedIndex]->mark->totalScore = stoi(convertToString(totMark->Text));
                    std->course[sbUCourse->SelectedIndex]->mark->otherScore = stoi(convertToString(oMark->Text));
                    MessageBox::Show("Scoreboard Updated Successfully!", "Status", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);

                    sbUCoursePan->Hide();
                }

            private:
                System::Void sbUStdID_KeyDown(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (e->KeyValue == (int)Keys::Enter) {
                        sbUSearch->PerformClick();
                    }
                }

            private:
                System::Void btncourseExStd_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (courseExStd->Visible) {
                        courseExStd->Hide();
                        return;
                    } else {
                        if (!hideAllStaff())
                            return;
                        courseExStd->Show();
                        coExStdInput->Items->Clear();
                        AcademicYears* curYear = yearList2;
                        while (curYear) {
                            Semesters* curSem = curYear->semesters;
                            while (curSem) {
                                Courses* curCourse = curSem->courses;
                                while (curCourse) {
                                    coExStdInput->Items->Add(convertString(curCourse->courseID));
                                    curCourse = curCourse->next;
                                }
                                curSem = curSem->next;
                            }
                            curYear = curYear->next;
                        }
                    }
                }

            private:
                System::Void coExStdBtn_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (coExStdInput->SelectedIndex >= 0) {
                    } else
                        return;

                    Courses* course = nullptr;
                    AcademicYears* curYear = yearList2;
                    while (curYear && !course) {
                        Semesters* curSem = curYear->semesters;
                        while (curSem && !course) {
                            Courses* curCourse = curSem->courses;
                            while (curCourse && !course) {
                                if (convertString(curCourse->courseID) == coExStdInput->Text)
                                    course = curCourse;
                                curCourse = curCourse->next;
                            }
                            curSem = curSem->next;
                        }
                        curYear = curYear->next;
                    }
                    if (!course)
                        cout << "nah nah\n";
                    System::IO::Stream ^ myStream;
                    SaveFileDialog ^ saveFileDialog1 = gcnew SaveFileDialog;
                    saveFileDialog1->FileName = convertString(course->courseID + "_Students");
                    saveFileDialog1->Filter = "csv files (*.csv)|*.csv";
                    saveFileDialog1->FilterIndex = 0;

                    if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                        if ((myStream = saveFileDialog1->OpenFile()) != nullptr) {
                            String ^ strfileName = saveFileDialog1->InitialDirectory + saveFileDialog1->FileName;

                            myStream->Close();
                            courseToCSV(course, convertToString(strfileName));

                            MessageBox::Show("Succesfully exported course's students list!", "Status", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
                        }
                    }
                }

            private:
                System::Void imSBExBtn_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (imSBFileInput->Text != "") {
                        Courses* course = nullptr;
                        AcademicYears* curYear = yearList2;
                        while (curYear && !course) {
                            Semesters* curSem = curYear->semesters;
                            while (curSem && !course) {
                                Courses* curCourse = curSem->courses;
                                while (curCourse && !course) {
                                    if (convertString(curCourse->courseID) == imSBCourse->Text)
                                        course = curCourse;
                                    curCourse = curCourse->next;
                                }
                                curSem = curSem->next;
                            }
                            curYear = curYear->next;
                        }

                        CSVToScoreboard(course, studentList2, convertToString(imSBFileInput->Text));

                        MessageBox::Show("Succesfully imported scoreboard students to course " + convertString(course->courseID), "Status", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
                            
                    }
                }

            private:
                System::Void importSB_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (imSBpanel->Visible) {
                        imSBpanel->Hide();
                        return;
                    } else {
                        if (!hideAllStaff())
                            return;
                        imSBpanel->Show();
                        imSBCourse->Items->Clear();
                        AcademicYears* curYear = yearList2;
                        while (curYear) {
                            Semesters* curSem = curYear->semesters;
                            while (curSem) {
                                Courses* curCourse = curSem->courses;
                                while (curCourse) {
                                    imSBCourse->Items->Add(convertString(curCourse->courseID));
                                    curCourse = curCourse->next;
                                }
                                curSem = curSem->next;
                            }
                            curYear = curYear->next;
                        }
                    }
                }

            private:
                System::Void imSBbtn_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    System::IO::Stream ^ myStream;
                    OpenFileDialog ^ openFileDialog1 = gcnew OpenFileDialog;
                    openFileDialog1->Filter = "CSV files (*.csv)|*.csv";

                    if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
                        if ((myStream = openFileDialog1->OpenFile()) != nullptr) {
                            String ^ strfileName = openFileDialog1->InitialDirectory + openFileDialog1->FileName;
                            //cout << convertToString(strfileName) << endl;
                            imSBFileInput->Text = strfileName;
                            myStream->Close();
                        }
                    }
                }

            private:
                System::Void imSBFileInput_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    imSBbtn->PerformClick();
                }

            private:
                bool hideAllStaff() {
                    if (panelSchoolYear->Visible) {
                        panelSchoolYear->Hide();
                    } 
                    if (newSemesterUI->Visible) {
                        if (inputedCourseList->HasChildren || nsCourseID->Text != "" || nsCourseName->Text != "" || nsCredit->Text != "" || nsMaxStd->Text != "" || nsRoom->Text != "" || nsLecturerName->Text != "" || newSem->Text != "") {
                            System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("You have unsaved changes! Discard them all?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
                            if (dialogResult == System::Windows::Forms::DialogResult::No) {
                                return false;
                            }
                        }
                        newSemYear->Items->Clear();
                        nsCourseID->Text = "";
                        nsCourseName->Text = "";
                        nsCredit->Text = "";
                        nsMaxStd->Text = "";
                        nsRoom->Text = "";
                        nsLecturerName->Text = "";
                        nsDay1->SelectedIndex = 0;
                        nsSession1->SelectedIndex = 0;
                        nsDay2->SelectedIndex = 0;
                        nsSession2->SelectedIndex = 0;
                        nsRegisEnd->Value = DateTime::Now;
                        nsRegisStart->Value = DateTime::Now;
                        nsBtnAdd->Text = L"Add";
                        newSemesterUI->Hide();
                    }

                    if (viewCourseUI->Visible) {
                        viewCourseUI->Hide();
                    }
                    if (viewStudentUI->Visible) {
                        viewStudentUI->Hide();
                    }
                    if (viewCoSBUI->Visible || viewClSBUI->Visible) {
                        viewCoSBUI->Hide();
                        viewClSBUI->Hide();
                    }
                    if (viewClassUI->Visible) {
                        viewClassUI->Hide();
                    }

                    if (courseUpdateUI->Visible) {
                        if (curCourseUpdate)
                            if ((updateCourseName->Text != convertString(curCourseUpdate->courseName)) || (updateCourseCre->Text != convertString(to_string(curCourseUpdate->credits))) || (updateCourseMaxSt->Text != convertString(to_string(curCourseUpdate->maxStudents))) || (updateCourseRoom->Text != convertString(curCourseUpdate->room)) || (updateCourseRegisStart->Value != DateTime(stoi(curCourseUpdate->startDate.year), stoi(curCourseUpdate->startDate.month), stoi(curCourseUpdate->startDate.day))) || (updateCourseRegisEnd->Value != DateTime(stoi(curCourseUpdate->endDate.year), stoi(curCourseUpdate->endDate.month), stoi(curCourseUpdate->endDate.day)) ||

                                    updateCourseD1->SelectedIndex != getWeekdayIndex(curCourseUpdate->day1))
                                || (updateCourseD2->SelectedIndex != getWeekdayIndex(curCourseUpdate->day2)) || (updateCourseS1->SelectedIndex != curCourseUpdate->session1[0] - '1') || (updateCourseS2->SelectedIndex != curCourseUpdate->session2[0] - '1')) {

                                System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Are you sure you want to discard the changes you made?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
                                if (dialogResult == System::Windows::Forms::DialogResult::No) {
                                    return false;
                                }
                            }
                        btDelCourse->Hide();
                        updateCoursePanel->Hide();
                        courseUpdateUI->Hide();
                    }

                    if (courseExStd->Visible) {
                        courseExStd->Hide();
                    }
                    if (imSBpanel->Visible) {
                        imSBpanel->Hide();
                    }

                    if (updateStdRes->Visible) {
                        if (classIDIndex == -1 || studentIndex == -1) {
                        } else {
                            List<scoreBoardU ^> ^ cl = scoreBoardUList[classIDIndex];
                            scoreBoardU ^ std = cl[studentIndex];
                            if (sbUCourse->Items->Count > 0)
                            if (midMark->Text == convertString(formatDouble(std->course[sbUCourse->SelectedIndex]->mark->midtermScore)) && finMark->Text == convertString(formatDouble(std->course[sbUCourse->SelectedIndex]->mark->finalScore)) && totMark->Text == convertString(formatDouble(std->course[sbUCourse->SelectedIndex]->mark->totalScore)) && oMark->Text == convertString(formatDouble(std->course[sbUCourse->SelectedIndex]->mark->otherScore))) {
                            } else {
                                System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("Are you sure you want to discard the changes you made?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Exclamation);
                                if (dialogResult == System::Windows::Forms::DialogResult::No) {
                                    return false;
                                }
                            }
                        }
                        updateStdRes->Hide();
                    }

                    if (profilePanel->Visible) {
                        profilePanel->Hide();
                    }

                    if (changePassPanel->Visible) {
                        changePassPanel->Hide();
                    }
                    classIDIndex = -1;
                    studentIndex == -1;
                    return true;
                }

            private:
                System::Void panel9_Paint(System::Object ^ sender, System::Windows::Forms::PaintEventArgs ^ e)
                {
                }

            private:
                System::Void showProfile_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (profilePanel->Visible) {
                        profilePanel->Hide();
                        return;
                    }
                    if (!hideAllStaff())
                        return;
                    profilePanel->Show();
                    profileName->Text = convertString(curAccount->lastname + " " + curAccount->firstname);
                    profileSocialID->Text = convertString(curAccount->socialID);
                    if (curAccount->gender == 'F')
                        profileGender->Text = L"Female";
                    if (curAccount->gender == 'M')
                        profileGender->Text = L"Male";
                    if (curAccount->gender == 'O')
                        profileGender->Text = L"Don't want to answer";
                    profileDob->Text = convertString(curAccount->doB.day + "/" + curAccount->doB.month + "/" + curAccount->doB.year);
                }

            private:
                System::Void button3_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    profilePanel->Hide();
                }

            private:
                System::Void changePassword_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (changePassPanel->Visible) {
                        changePassPanel->Hide();
                        return;
                    }
                    if (!hideAllStaff() || !hideAllStudent())
                        return;
                    changePassPanel->Show();
                    changePassPanel->SendToBack();
                }

            private:
                System::Void changePassBtn_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (oldPass->Text != convertString(curAccount->pwd)) {
                        MessageBox::Show("Wrong password.", "Status", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        oldPass->Focus();
                        return;
                         
                    }
                    if (newPass1->Text != newPass2->Text) {
                        MessageBox::Show("Passwords don't match.", "Status", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        newPass2->Focus();
                        return;
                    }

                    MessageBox::Show("Password changed. Log in again to continue!", "Status", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
                    curAccount->pwd = convertToString(newPass1->Text);
                    changePassPanel->Hide();
                    Close();
                }

            private:
                System::Void changePassCancel_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    changePassPanel->Hide();
                }

            private:
                System::Void newPass2_KeyDown(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (e->KeyValue == (int)Keys::Enter) {
                        changePassBtn->PerformClick();
                    }
                }

            private:
                bool hideAllStudent() {
                    if (stdViewSBUI->Visible) {
                        stdViewSBUI->Hide();
                    }
                    if (stdViewCourseUI->Visible) {
                        stdViewCourseUI->Hide();
                    }

                    if (courseRegisPanel->Visible) {
                        courseRegisInfo->Hide();
                        courseRegisPanel->Hide();
                    }
                    return true;
                }

            private:
                System::Void courseRegistrationbtn_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (courseRegisPanel->Visible) {
                        courseRegisInfo->Hide();
                        courseRegisPanel->Hide();
                        return;
                    }
                    if (!hideAllStudent())
                        return;
                    Date curDate;
                    curDate.getCurrentDate();

                    
                    int n = 0;
                    Courses *courseEnrolled = currentStudent->enrolledCourse, *choosenCourse, *curCourse;
                    while (courseEnrolled) {
                        n++;
                        courseEnrolled = courseEnrolled->next;
                    }
                    courseRegisCount = n;
                    if (n >= 5) {
                        MessageBox::Show("You have reached course registration limit (5/5).", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        return;
                    }

                    n = 0;
                    if (!yearList2->semesters)
                        return;

                    courseRegisPanel->Show();
                    courseRegisInfo->Hide();
                    courseRegisPanel->SendToBack();

                    listCourseRegis->Items->Clear();
                    if (coursesToUpdate)
                        coursesToUpdate->Clear();
                    coursesToUpdate = gcnew List<String ^>();

                    curCourse = yearList2->semesters->courses;
                    while (curCourse) {
                        if (cmpDate(curCourse->startDate, curCourse->endDate, curDate)) {
                            listCourseRegis->Items->Add(convertString(curCourse->courseID));
                            coursesToUpdate->Add(convertString(curCourse->courseID));

                            n++;
                        }
                        curCourse = curCourse->next;
                    }
                    if (n == 0) {
                        MessageBox::Show("There are no registration sessions of any course at the moment. Please come back later!", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Information);

                        courseRegisInfo->Hide();
                        courseRegisPanel->Hide();
                        return;
                    }
                }

            private:
                string getFullDayFormat(string day) {
                    if (day == "MON")
                        return "Monday";
                    if (day == "TUE")
                        return "Tuesday";
                    if (day == "WED")
                        return "Wednesday";
                    if (day == "THU")
                        return "Thursday";
                    if (day == "FRI")
                        return "Friday";
                    if (day == "SAT")
                        return "Saturday";
                    if (day == "SUN")
                        return "Sunday";
                }

            private:
                void writeDataToCourseRegistration(Courses* course)
                {
                    courseRegisID->Text = convertString(course->courseID);
                    courseRegisName->Text = convertString(course->courseName);
                    courseRegisCre->Text = convertString(to_string(course->credits));
                    courseRegisStd->Text = convertString(to_string(course->maxStudents));
                    courseRegisRoom->Text = convertString(course->room);
                    courseRegisStart->Text = convertString(course->startDate.day + "/" + course->startDate.month + "/" + course->startDate.year);
                    courseRegisEnd->Text = convertString(course->endDate.day + "/" + course->endDate.month + "/" + course->endDate.year);

                    courseRegisLecturer->Text = convertString(course->lecturerName);
                    courseRegisD1->Text = convertString(getFullDayFormat(course->day1));
                    courseRegisD2->Text = convertString(getFullDayFormat(course->day2));
                    courseRegisS1->Text = convertString(getSession(course->session1));
                    courseRegisS2->Text = convertString(getSession(course->session2));
                }

            private:
                System::Void listCourseRegis_SelectedIndexChanged(System::Object ^ sender, System::EventArgs ^ e)
                {
                    selectedIndex = listCourseRegis->SelectedIndex;
                    curCourseUpdate = yearList2->semesters->courses->findCourseByID(convertToString(coursesToUpdate[selectedIndex]));
                    if (!curCourseUpdate) {
                        MessageBox::Show("Can't find course with ID: " + coursesToUpdate[selectedIndex], "Course Registration Session", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
                        return;
                    }

                    writeDataToCourseRegistration(curCourseUpdate);
                    if (currentStudent->enrolledCourse->findCourseByID(curCourseUpdate->courseID)) {
                        courseRegisPanelBtn->Hide();
                        courseUnRegisPanelBtn->Show();
                    } else {
                        courseUnRegisPanelBtn->Hide();
                        courseRegisPanelBtn->Show();
                    }

                    courseRegisInfo->Show();
                }

            private:
                System::Void courseRegisPanelBtn_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (curCourseUpdate && courseRegisCount < 5 && currentStudent->enrolledCourse->checkCourseConflict(curCourseUpdate) && curCourseUpdate->numStudents + 1 <= curCourseUpdate->maxStudents) {
                        Students* tmp = curCourseUpdate->studentList;
                        curCourseUpdate->studentList = new Students;
                        curCourseUpdate->studentList->studentID = currentStudent->studentID;
                        curCourseUpdate->studentList->account = currentStudent->account;
                        curCourseUpdate->studentList->classID = currentStudent->classID;
                        curCourseUpdate->studentList->scoreBoards = currentStudent->scoreBoards;
                        curCourseUpdate->studentList->next = tmp;
                        curCourseUpdate->numStudents++;

                        Courses* course = new Courses;
                        course->courseName = curCourseUpdate->courseName;
                        course->courseID = curCourseUpdate->courseID;
                        course->credits = curCourseUpdate->credits;
                        course->maxStudents = curCourseUpdate->maxStudents;
                        course->room = curCourseUpdate->room;

                        course->startDate = curCourseUpdate->startDate;
                        course->endDate = curCourseUpdate->endDate;

                        course->lecturerName = curCourseUpdate->lecturerName;
                        course->day1 = curCourseUpdate->day1;
                        course->day2 = curCourseUpdate->day2;
                        course->session1 = curCourseUpdate->session1;
                        course->session2 = curCourseUpdate->session2;
                        course->next = currentStudent->enrolledCourse;

                        currentStudent->enrolledCourse = course;
                        courseRegisCount++;
                        MessageBox::Show("Succesfully enroll in " + convertString(course->courseID), "Course Registration Session", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
                        courseRegisPanelBtn->Hide();
                        courseUnRegisPanelBtn->Show();
                        return;
                    }

                    if (!curCourseUpdate) {
                        MessageBox::Show("Can't find course with ID: " + coursesToUpdate[selectedIndex], "Course Registration Session", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
                        return;
                    }
                    if (curCourseUpdate->numStudents + 1 > curCourseUpdate->maxStudents) {
                        MessageBox::Show("Maximum students reached. You can't enroll in this course.", "Course Registration Session", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
                        return;
                    }

                    if (courseRegisCount >= 5) {
                        MessageBox::Show("You have reached course registration limit (5/5).", "Warning", MessageBoxButtons::OK, MessageBoxIcon::Error);
                        return;
                    }
                    MessageBox::Show("Schedule conflicted with some enrolled courses!", "Course Registration Session", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
                    return;
                }

            private:
                System::Void courseUnRegisPanelBtn_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    Students* tmp = curCourseUpdate->studentList->next;
                    delete curCourseUpdate->studentList;

                    curCourseUpdate->studentList = tmp;
                    curCourseUpdate->numStudents--;

                    Courses* course = currentStudent->enrolledCourse->next;
                    delete currentStudent->enrolledCourse;

                    currentStudent->enrolledCourse = course;
                    courseRegisCount--;
                    MessageBox::Show("Succesfully unregister " + convertString(course->courseID), "Course Registration Session", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
                
                    courseUnRegisPanelBtn->Hide();
                    courseRegisPanelBtn->Show();                
                }

            private:
                System::Void courseRegisCancel_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    courseRegisInfo->Hide();
                    courseRegisPanel->Hide();
                }

            private:
                System::Void studentViewCourse_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    stdViewCourseUI->Items->Clear();
                    if (stdViewCourseUI->Visible) {
                        stdViewCourseUI->Hide();
                    } else {
                        if (!hideAllStudent())
                            return;
                        stdViewCourseUI->Show();
                        stdViewCourseUI->SendToBack();
                        Courses* curCourse = currentStudent->enrolledCourse;
                        int i = 0;
                        while (curCourse) {
                            i++;
                            string st = to_string(i);
                            ListViewItem ^ lv = gcnew ListViewItem(convertString(st), 0);
                            lv->SubItems->Add(convertString(curCourse->courseID));
                            lv->SubItems->Add(convertString(curCourse->courseName));
                            lv->SubItems->Add(convertString(to_string(curCourse->credits)));
                            lv->SubItems->Add(convertString(to_string(curCourse->numStudents) + "/" + to_string(curCourse->maxStudents)));
                            lv->SubItems->Add(convertString(curCourse->day1 + " | " + getSession(curCourse->session1)));
                            lv->SubItems->Add(convertString(curCourse->day2 + " | " + getSession(curCourse->session2)));
                            lv->SubItems->Add(convertString(curCourse->room));
                            lv->SubItems->Add(convertString(curCourse->lecturerName));
                            stdViewCourseUI->Items->Add(lv);
                            curCourse = curCourse->next;
                        }
                    }
                }

            private:
                System::Void studentViewScoreboard_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (stdViewSBUI->Visible) {
                        stdViewSBUI->Hide();
                    } else {

                        if (!hideAllStudent())
                            return;
                        Scoreboards* sb = currentStudent->scoreBoards;
                        int i = 0;
                        stdViewSBUI->Items->Clear();
                        while (sb) {
                            i++;
                            string st = to_string(i);
                            ListViewItem ^ lv = gcnew ListViewItem(convertString(st), 0);
                            lv->SubItems->Add(convertString(sb->courseID));
                            lv->SubItems->Add(convertString(sb->courseName));
                            lv->SubItems->Add(convertString(formatDouble(sb->midtermScore)));
                            lv->SubItems->Add(convertString(formatDouble(sb->finalScore)));
                            lv->SubItems->Add(convertString(formatDouble(sb->totalScore)));
                            lv->SubItems->Add(convertString(formatDouble(sb->otherScore)));
                            stdViewSBUI->Items->Add(lv);
                            sb = sb->next;
                        }
                        stdViewSBUI->Show();
                        stdViewSBUI->SendToBack();
                    }
                }

            private:
                System::Void studentFunctionPanel_MouseMove(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e)
                {
                    if (allRolePanel->Visible) {
                        timer1->Start();
                        if (count >= 5) {
                            allRolePanel->Hide();
                            count = 0;
                        }
                    }
                }

            private:
                System::Void stdViewSBUI_MouseMove(System::Object ^ sender, System::Windows::Forms::MouseEventArgs ^ e)
                {
                    if (allRolePanel->Visible) {
                        timer1->Start();
                        if (count >= 5) {
                            allRolePanel->Hide();
                            count = 0;
                        }
                    }
                }
            };
            }
