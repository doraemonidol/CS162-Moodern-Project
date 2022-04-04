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


            private:


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


            private:


            private:


            private:


            private:


            private:


            private:


            private:


            private:


            private:


            private:


            private:


            public: 

            private:


            public:
            private:


            private:


            private:


            private:


            private:


            private:


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
                System::Windows::Forms::Button ^ button1;

            private:
                System::Windows::Forms::Button ^ button4;

            private:
                System::Windows::Forms::Button ^ button5;

            private:
                System::Windows::Forms::Button ^ button6;

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


            private:


            private:


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
                    this->button1 = (gcnew System::Windows::Forms::Button());
                    this->button4 = (gcnew System::Windows::Forms::Button());
                    this->button5 = (gcnew System::Windows::Forms::Button());
                    this->button6 = (gcnew System::Windows::Forms::Button());
                    this->time = (gcnew System::Windows::Forms::Label());
                    this->date = (gcnew System::Windows::Forms::Label());
                    this->timeController = (gcnew System::Windows::Forms::Timer(this->components));
                    this->studentFunctionPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
                    this->courseRegistrationbtn = (gcnew System::Windows::Forms::Button());
                    this->studentView = (gcnew System::Windows::Forms::Button());
                    this->studentViewCourse = (gcnew System::Windows::Forms::Button());
                    this->studentViewScoreboard = (gcnew System::Windows::Forms::Button());
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
                    this->allRolePanel->SuspendLayout();
                    this->staffFunctionPanel->SuspendLayout();
                    this->studentFunctionPanel->SuspendLayout();
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
                    this->staffFunctionPanel->Controls->Add(this->button1);
                    this->staffFunctionPanel->Controls->Add(this->button4);
                    this->staffFunctionPanel->Controls->Add(this->button5);
                    this->staffFunctionPanel->Controls->Add(this->button6);
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
                    this->newbtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                        static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
                    this->newbtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                        static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
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
                    //
                    // viewbtn
                    //
                    this->viewbtn->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->viewbtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                        static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
                    this->viewbtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                        static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
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
                    //
                    // button1
                    //
                    this->button1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                        static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
                    this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                        static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
                    this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->button1->ForeColor = System::Drawing::Color::White;
                    this->button1->Location = System::Drawing::Point(3, 381);
                    this->button1->Name = L"button1";
                    this->button1->Size = System::Drawing::Size(226, 45);
                    this->button1->TabIndex = 4;
                    this->button1->Text = L"Update Course Info";
                    this->button1->UseVisualStyleBackColor = true;
                    //
                    // button4
                    //
                    this->button4->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                        static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
                    this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                        static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
                    this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->button4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->button4->ForeColor = System::Drawing::Color::White;
                    this->button4->Location = System::Drawing::Point(3, 432);
                    this->button4->Name = L"button4";
                    this->button4->Size = System::Drawing::Size(226, 45);
                    this->button4->TabIndex = 5;
                    this->button4->Text = L"Delete Course";
                    this->button4->UseVisualStyleBackColor = true;
                    //
                    // button5
                    //
                    this->button5->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                        static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
                    this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                        static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
                    this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->button5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->button5->ForeColor = System::Drawing::Color::White;
                    this->button5->Location = System::Drawing::Point(3, 483);
                    this->button5->Name = L"button5";
                    this->button5->Size = System::Drawing::Size(226, 45);
                    this->button5->TabIndex = 6;
                    this->button5->Text = L"Import Scoreboard";
                    this->button5->UseVisualStyleBackColor = true;
                    //
                    // button6
                    //
                    this->button6->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
                    this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)),
                        static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)));
                    this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)),
                        static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)));
                    this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->button6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->button6->ForeColor = System::Drawing::Color::White;
                    this->button6->Location = System::Drawing::Point(3, 534);
                    this->button6->Name = L"button6";
                    this->button6->Size = System::Drawing::Size(226, 45);
                    this->button6->TabIndex = 7;
                    this->button6->Text = L"Update Student Result";
                    this->button6->UseVisualStyleBackColor = true;
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
                    this->studentFunctionPanel->Controls->Add(this->courseRegistrationbtn);
                    this->studentFunctionPanel->Controls->Add(this->studentView);
                    this->studentFunctionPanel->Controls->Add(this->studentViewCourse);
                    this->studentFunctionPanel->Controls->Add(this->studentViewScoreboard);
                    this->studentFunctionPanel->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
                    this->studentFunctionPanel->ForeColor = System::Drawing::Color::Transparent;
                    this->studentFunctionPanel->Location = System::Drawing::Point(285, 669);
                    this->studentFunctionPanel->Name = L"studentFunctionPanel";
                    this->studentFunctionPanel->Size = System::Drawing::Size(232, 696);
                    this->studentFunctionPanel->TabIndex = 33;
                    this->studentFunctionPanel->Visible = false;
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
                    this->courseRegistrationbtn->Location = System::Drawing::Point(3, 3);
                    this->courseRegistrationbtn->Name = L"courseRegistrationbtn";
                    this->courseRegistrationbtn->Size = System::Drawing::Size(226, 45);
                    this->courseRegistrationbtn->TabIndex = 3;
                    this->courseRegistrationbtn->Text = L"Course Registration";
                    this->courseRegistrationbtn->UseVisualStyleBackColor = true;
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
                    this->studentView->Location = System::Drawing::Point(3, 54);
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
                    this->studentViewCourse->Location = System::Drawing::Point(22, 105);
                    this->studentViewCourse->Name = L"studentViewCourse";
                    this->studentViewCourse->Size = System::Drawing::Size(188, 40);
                    this->studentViewCourse->TabIndex = 12;
                    this->studentViewCourse->Text = L"Enrolled Courses";
                    this->studentViewCourse->UseVisualStyleBackColor = true;
                    this->studentViewCourse->Visible = false;
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
                    this->studentViewScoreboard->Location = System::Drawing::Point(22, 151);
                    this->studentViewScoreboard->Name = L"studentViewScoreboard";
                    this->studentViewScoreboard->Size = System::Drawing::Size(188, 40);
                    this->studentViewScoreboard->TabIndex = 10;
                    this->studentViewScoreboard->Text = L"Scoreboard";
                    this->studentViewScoreboard->UseVisualStyleBackColor = true;
                    this->studentViewScoreboard->Visible = false;
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
                    this->viewCourseUI->SelectedIndexChanged += gcnew System::EventHandler(this, &functionScreen::viewCourseUI_SelectedIndexChanged);
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
                    // functionScreen
                    //
                    this->AutoScaleDimensions = System::Drawing::SizeF(15, 37);
                    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
                    this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(5)), static_cast<System::Int32>(static_cast<System::Byte>(5)),
                        static_cast<System::Int32>(static_cast<System::Byte>(5)));
                    this->ClientSize = System::Drawing::Size(1436, 771);
                    this->Controls->Add(this->greetText);
                    this->Controls->Add(this->allRolePanel);
                    this->Controls->Add(this->studentFunctionPanel);
                    this->Controls->Add(this->date);
                    this->Controls->Add(this->time);
                    this->Controls->Add(this->staffFunctionPanel);
                    this->Controls->Add(this->btMinimise);
                    this->Controls->Add(this->btCloseApp);
                    this->Controls->Add(this->btMinimiseBG);
                    this->Controls->Add(this->btCloseBG);
                    this->Controls->Add(this->viewCoSBUI);
                    this->Controls->Add(this->viewStudentUI);
                    this->Controls->Add(this->viewCourseUI);
                    this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F));
                    this->ForeColor = System::Drawing::Color::Black;
                    this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
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
                System::Void viewStudentList_Click(System::Object ^ sender, System::EventArgs ^ e) {
                    if (viewStudentUI->Visible) {
                        viewStudentUI->Hide();
                    } else {
                        inputClassCourse ^ icc = gcnew inputClassCourse;
                        icc->ShowDialog();
                        String ^ Class, ^Course;
                        icc->GetData(Class, Course);

                        viewStudentUI->Items->Clear();

                        viewStudentUI->Show();
                        viewStudentUI->SendToBack();
                        if (Class != L"") {
                            Students* student = studentList2;
                            int i = 0;
                            while (student) {
                                cout << student->classID << " " << convertToString(Class)
                                     << "\n";
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
                    if (viewCoSBUI->Visible) {
                        viewCoSBUI->Hide();
                    } else {
                        inputClassCourse ^ icc = gcnew inputClassCourse;
                        icc->ShowDialog();
                        String ^ Class, ^Course;
                        icc->GetData(Class, Course);

                        viewCoSBUI->Items->Clear();

                        viewCoSBUI->Show();
                        viewCoSBUI->SendToBack();
                        if (Class != L"") {
                            Students* student = studentList2;
                            int i = 0;
                            while (student) {
                                cout << student->classID << " " << convertToString(Class)
                                     << "\n";
                                if (student->classID == convertToString(Class)) {
                                    i++;
                                    string st = to_string(i);
                                    ListViewItem ^ lv = gcnew ListViewItem(convertString(st), 0);
                                    lv->SubItems->Add(convertString(student->studentID));
                                    lv->SubItems->Add(convertString(student->account->lastname));
                                    lv->SubItems->Add(convertString(student->account->firstname));
                                    lv->SubItems->Add(convertString(student->classID));
                                    viewCoSBUI->Items->Add(lv);
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
                                                lv->SubItems->Add(convertString(student->account->lastname + " " + student->account->firstname));
                                                lv->SubItems->Add(convertString(student->classID));
                                                Scoreboards* SBstudent = student->scoreBoards;
                                                while (SBstudent && SBstudent->courseID != convertToString(Course)) {
                                                    SBstudent = SBstudent->next;
                                                }
                                                if (SBstudent) {
                                                    lv->SubItems->Add(convertString(to_string(SBstudent->totalScore)));
                                                    lv->SubItems->Add(convertString(to_string(SBstudent->finalScore)));
                                                    lv->SubItems->Add(convertString(to_string(SBstudent->midtermScore)));
                                                    lv->SubItems->Add(convertString(to_string(SBstudent->otherScore)));
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
            };
            }
