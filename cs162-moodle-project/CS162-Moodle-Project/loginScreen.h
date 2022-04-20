#pragma once
#include "functionScreen.h"
#include "main.h"
#include "allRole.h"
#include "finalization.h"
#include "initialization.h"
#include "staff.h"
#include "student.h"

namespace CS162MoodleProject {

	//using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace std;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class loginScreen : public System::Windows::Forms::Form {
    public:
        bool Exit = false;
        int Role;
        AcademicYears* yearList1 = nullptr;
        Students* studentList1 = nullptr;
        Staffs* staffList1 = nullptr;
        Accounts* accountList1 = nullptr;

    private:
        System::Windows::Forms::PictureBox ^ pictureBox1;

    public:
        Accounts* cur_account;
    public:
		loginScreen(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
        void getData(AcademicYears* year, Students* student, Staffs* staff, Accounts* account) {
            yearList1 = year;
            studentList1 = student;
            staffList1 = staff;
            accountList1 = account;
                }
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~loginScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;

        private:
            System::Windows::Forms::TextBox ^ usernameInput;

        private:
            System::Windows::Forms::Label ^ label1;

        private:
            System::Windows::Forms::Label ^ label2;

        private:
            System::Windows::Forms::Label ^ label3;

        private:
            System::Windows::Forms::Panel ^ panel1;

        private:
            System::Windows::Forms::Panel ^ panel2;

        private:
            System::Windows::Forms::TextBox ^ passwordInput;

        private:
            System::Windows::Forms::Button ^ loginExit;


        protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
                    System::ComponentModel::ComponentResourceManager ^ resources = (gcnew System::ComponentModel::ComponentResourceManager(loginScreen::typeid));
                    this->button1 = (gcnew System::Windows::Forms::Button());
                    this->usernameInput = (gcnew System::Windows::Forms::TextBox());
                    this->label1 = (gcnew System::Windows::Forms::Label());
                    this->label2 = (gcnew System::Windows::Forms::Label());
                    this->label3 = (gcnew System::Windows::Forms::Label());
                    this->panel1 = (gcnew System::Windows::Forms::Panel());
                    this->panel2 = (gcnew System::Windows::Forms::Panel());
                    this->passwordInput = (gcnew System::Windows::Forms::TextBox());
                    this->loginExit = (gcnew System::Windows::Forms::Button());
                    this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
                    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox1))->BeginInit();
                    this->SuspendLayout();
                    //
                    // button1
                    //
                    this->button1->FlatAppearance->BorderSize = 0;
                    this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->button1->Location = System::Drawing::Point(81, 341);
                    this->button1->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->button1->Name = L"button1";
                    this->button1->Size = System::Drawing::Size(128, 43);
                    this->button1->TabIndex = 11;
                    this->button1->Text = L"Sign in";
                    this->button1->UseVisualStyleBackColor = true;
                    this->button1->Click += gcnew System::EventHandler(this, &loginScreen::button1_Click);
                    //
                    // usernameInput
                    //
                    this->usernameInput->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->usernameInput->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->usernameInput->HideSelection = false;
                    this->usernameInput->Location = System::Drawing::Point(81, 197);
                    this->usernameInput->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->usernameInput->Name = L"usernameInput";
                    this->usernameInput->Size = System::Drawing::Size(268, 24);
                    this->usernameInput->TabIndex = 2;
                    this->usernameInput->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &loginScreen::usernameInput_KeyDown);
                    //
                    // label1
                    //
                    this->label1->AutoSize = true;
                    this->label1->BackColor = System::Drawing::Color::White;
                    this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.75F));
                    this->label1->ForeColor = System::Drawing::Color::Black;
                    this->label1->Location = System::Drawing::Point(77, 170);
                    this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
                    this->label1->Name = L"label1";
                    this->label1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
                    this->label1->Size = System::Drawing::Size(75, 20);
                    this->label1->TabIndex = 4;
                    this->label1->Text = L"Username";
                    //
                    // label2
                    //
                    this->label2->AutoSize = true;
                    this->label2->BackColor = System::Drawing::Color::White;
                    this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8.75F));
                    this->label2->Location = System::Drawing::Point(77, 249);
                    this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
                    this->label2->Name = L"label2";
                    this->label2->Size = System::Drawing::Size(70, 20);
                    this->label2->TabIndex = 5;
                    this->label2->Text = L"Password";
                    //
                    // label3
                    //
                    this->label3->AutoSize = true;
                    this->label3->BackColor = System::Drawing::Color::White;
                    this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 28.75F));
                    this->label3->ForeColor = System::Drawing::Color::Black;
                    this->label3->Location = System::Drawing::Point(69, 76);
                    this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
                    this->label3->Name = L"label3";
                    this->label3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
                    this->label3->Size = System::Drawing::Size(173, 65);
                    this->label3->TabIndex = 8;
                    this->label3->Text = L"Sign in";
                    //
                    // panel1
                    //
                    this->panel1->Location = System::Drawing::Point(81, 219);
                    this->panel1->Name = L"panel1";
                    this->panel1->Size = System::Drawing::Size(268, 2);
                    this->panel1->TabIndex = 9;
                    //
                    // panel2
                    //
                    this->panel2->Location = System::Drawing::Point(81, 298);
                    this->panel2->Name = L"panel2";
                    this->panel2->Size = System::Drawing::Size(268, 2);
                    this->panel2->TabIndex = 11;
                    //
                    // passwordInput
                    //
                    this->passwordInput->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->passwordInput->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->passwordInput->HideSelection = false;
                    this->passwordInput->Location = System::Drawing::Point(81, 276);
                    this->passwordInput->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->passwordInput->Name = L"passwordInput";
                    this->passwordInput->PasswordChar = '*';
                    this->passwordInput->Size = System::Drawing::Size(268, 24);
                    this->passwordInput->TabIndex = 10;
                    this->passwordInput->UseSystemPasswordChar = true;
                    this->passwordInput->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &loginScreen::passwordInput_KeyDown);
                    //
                    // loginExit
                    //
                    this->loginExit->BackColor = System::Drawing::Color::White;
                    this->loginExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->loginExit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->loginExit->ForeColor = System::Drawing::SystemColors::ActiveBorder;
                    this->loginExit->Location = System::Drawing::Point(221, 341);
                    this->loginExit->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->loginExit->Name = L"loginExit";
                    this->loginExit->Size = System::Drawing::Size(128, 43);
                    this->loginExit->TabIndex = 12;
                    this->loginExit->Text = L"Exit";
                    this->loginExit->UseVisualStyleBackColor = false;
                    this->loginExit->Click += gcnew System::EventHandler(this, &loginScreen::loginExit_Click);
                    //
                    // pictureBox1
                    //
                    this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
                    this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
                    this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
                    this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"pictureBox1.Image")));
                    this->pictureBox1->Location = System::Drawing::Point(428, 108);
                    this->pictureBox1->Name = L"pictureBox1";
                    this->pictureBox1->Size = System::Drawing::Size(250, 250);
                    this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
                    this->pictureBox1->TabIndex = 13;
                    this->pictureBox1->TabStop = false;
                    //
                    // loginScreen
                    //
                    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
                    this->BackgroundImage = (cli::safe_cast<System::Drawing::Image ^>(resources->GetObject(L"$this.BackgroundImage")));
                    this->ClientSize = System::Drawing::Size(725, 469);
                    this->Controls->Add(this->pictureBox1);
                    this->Controls->Add(this->loginExit);
                    this->Controls->Add(this->panel2);
                    this->Controls->Add(this->passwordInput);
                    this->Controls->Add(this->panel1);
                    this->Controls->Add(this->label3);
                    this->Controls->Add(this->label2);
                    this->Controls->Add(this->label1);
                    this->Controls->Add(this->usernameInput);
                    this->Controls->Add(this->button1);
                    this->Cursor = System::Windows::Forms::Cursors::Arrow;
                    this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
                    this->Icon = (cli::safe_cast<System::Drawing::Icon ^>(resources->GetObject(L"$this.Icon")));
                    this->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->Name = L"loginScreen";
                    this->RightToLeft = System::Windows::Forms::RightToLeft::No;
                    this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
                    this->Text = L"Moodle";
                    this->Load += gcnew System::EventHandler(this, &loginScreen::MyForm_Load);
                    (cli::safe_cast<System::ComponentModel::ISupportInitialize ^>(this->pictureBox1))->EndInit();
                    this->ResumeLayout(false);
                    this->PerformLayout();
                }
#pragma endregion
            private:
                System::String ^ convertString(string st) {
                    return gcnew System::String(st.c_str());
                } 
            private: 
                string convertToString(System::String ^ st)
                {
                    return msclr::interop::marshal_as<std::string>(st);
                }
            private:
                System::Void button1_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    cur_account = find_Accounts(accountList1, convertToString(usernameInput->Text), convertToString(passwordInput->Text));
                    if (cur_account) { // dang nhap thanh cong
                        MessageBox::Show("Log in succesfully!", "Moodle", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
                        Role = cur_account->role;
                        Close();
                    } else {
                        MessageBox::Show("Invalid login, please try again!", "Moodle", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
                        // dang nhap lai
                    }
                }   
            private:
                System::Void MyForm_Load(System::Object ^ sender, System::EventArgs ^ e)
                {
                    usernameInput->Focus();
                }

            private:
                System::Void usernameInput_KeyDown(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (e->KeyValue == (int)Keys::Enter || e->KeyValue == (int)Keys::Tab) {
                        passwordInput->Focus();
                    }
                }

            private:
                System::Void passwordInput_KeyDown(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (e->KeyValue == (int)Keys::Enter) {
                        button1->PerformClick();
                    }
                }

            private:
                System::Void loginExit_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    Exit = true;
                    Close();
                }
            };
            }
