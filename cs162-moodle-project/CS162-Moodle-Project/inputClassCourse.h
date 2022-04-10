#pragma once

namespace CS162MoodleProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for inputClassCourse
	/// </summary>
	public ref class inputClassCourse : public System::Windows::Forms::Form
	{
	public:
		inputClassCourse(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~inputClassCourse()
		{
			if (components)
			{
				delete components;
			}
		}

            private:
                System::Windows::Forms::Button ^ inpCCExit;

            protected: 

            private:


            protected:
            private:
                System::Windows::Forms::Panel ^ panel2;

            private:
                System::Windows::Forms::TextBox ^ courseInput;

            private:


            private:
                System::Windows::Forms::Panel ^ panel1;

            private:
                System::Windows::Forms::Label ^ label2;

            private:
                System::Windows::Forms::Label ^ label1;

            private:
                System::Windows::Forms::TextBox ^ classInput;

            private:


            private:
                System::Windows::Forms::Button ^ viewClassCourse;

            private:


            private:
                System::Windows::Forms::Label ^ label3;

            private:


            protected:
            private:


            private:


            private:


            private:


            private:


            private:


            private:


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
                    this->inpCCExit = (gcnew System::Windows::Forms::Button());
                    this->panel2 = (gcnew System::Windows::Forms::Panel());
                    this->courseInput = (gcnew System::Windows::Forms::TextBox());
                    this->panel1 = (gcnew System::Windows::Forms::Panel());
                    this->label2 = (gcnew System::Windows::Forms::Label());
                    this->label1 = (gcnew System::Windows::Forms::Label());
                    this->classInput = (gcnew System::Windows::Forms::TextBox());
                    this->viewClassCourse = (gcnew System::Windows::Forms::Button());
                    this->label3 = (gcnew System::Windows::Forms::Label());
                    this->SuspendLayout();
                    //
                    // inpCCExit
                    //
                    this->inpCCExit->BackColor = System::Drawing::Color::White;
                    this->inpCCExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->inpCCExit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->inpCCExit->ForeColor = System::Drawing::SystemColors::ActiveBorder;
                    this->inpCCExit->Location = System::Drawing::Point(181, 239);
                    this->inpCCExit->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->inpCCExit->Name = L"inpCCExit";
                    this->inpCCExit->Size = System::Drawing::Size(128, 43);
                    this->inpCCExit->TabIndex = 20;
                    this->inpCCExit->Text = L"Cancel";
                    this->inpCCExit->UseVisualStyleBackColor = false;
                    this->inpCCExit->Click += gcnew System::EventHandler(this, &inputClassCourse::inpCCExit_Click);
                    //
                    // panel2
                    //
                    this->panel2->Location = System::Drawing::Point(41, 206);
                    this->panel2->Name = L"panel2";
                    this->panel2->Size = System::Drawing::Size(268, 2);
                    this->panel2->TabIndex = 18;
                    //
                    // courseInput
                    //
                    this->courseInput->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->courseInput->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->courseInput->HideSelection = false;
                    this->courseInput->Location = System::Drawing::Point(41, 184);
                    this->courseInput->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->courseInput->Name = L"courseInput";
                    this->courseInput->Size = System::Drawing::Size(268, 24);
                    this->courseInput->TabIndex = 14;
                    this->courseInput->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &inputClassCourse::courseInput_KeyDown);
                    //
                    // panel1
                    //
                    this->panel1->Location = System::Drawing::Point(45, 131);
                    this->panel1->Name = L"panel1";
                    this->panel1->Size = System::Drawing::Size(268, 2);
                    this->panel1->TabIndex = 16;
                    //
                    // label2
                    //
                    this->label2->AutoSize = true;
                    this->label2->BackColor = System::Drawing::Color::White;
                    this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
                    this->label2->Location = System::Drawing::Point(37, 154);
                    this->label2->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
                    this->label2->Name = L"label2";
                    this->label2->Size = System::Drawing::Size(63, 23);
                    this->label2->TabIndex = 15;
                    this->label2->Text = L"Course";
                    //
                    // label1
                    //
                    this->label1->AutoSize = true;
                    this->label1->BackColor = System::Drawing::Color::White;
                    this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
                    this->label1->ForeColor = System::Drawing::Color::Black;
                    this->label1->Location = System::Drawing::Point(37, 79);
                    this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
                    this->label1->Name = L"label1";
                    this->label1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
                    this->label1->Size = System::Drawing::Size(48, 23);
                    this->label1->TabIndex = 14;
                    this->label1->Text = L"Class";
                    //
                    // classInput
                    //
                    this->classInput->BorderStyle = System::Windows::Forms::BorderStyle::None;
                    this->classInput->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->classInput->HideSelection = false;
                    this->classInput->Location = System::Drawing::Point(45, 109);
                    this->classInput->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->classInput->Name = L"classInput";
                    this->classInput->Size = System::Drawing::Size(268, 24);
                    this->classInput->TabIndex = 13;
                    this->classInput->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &inputClassCourse::classInput_KeyDown);
                    //
                    // viewClassCourse
                    //
                    this->viewClassCourse->BackColor = System::Drawing::Color::LightGray;
                    this->viewClassCourse->FlatAppearance->BorderSize = 0;
                    this->viewClassCourse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->viewClassCourse->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F));
                    this->viewClassCourse->Location = System::Drawing::Point(41, 239);
                    this->viewClassCourse->Margin = System::Windows::Forms::Padding(6, 7, 6, 7);
                    this->viewClassCourse->Name = L"viewClassCourse";
                    this->viewClassCourse->Size = System::Drawing::Size(128, 43);
                    this->viewClassCourse->TabIndex = 19;
                    this->viewClassCourse->Text = L"View";
                    this->viewClassCourse->UseVisualStyleBackColor = false;
                    this->viewClassCourse->Click += gcnew System::EventHandler(this, &inputClassCourse::viewClassCourse_Click);
                    //
                    // label3
                    //
                    this->label3->AutoSize = true;
                    this->label3->BackColor = System::Drawing::Color::White;
                    this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
                    this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.75F, System::Drawing::FontStyle::Bold));
                    this->label3->ForeColor = System::Drawing::Color::Black;
                    this->label3->Location = System::Drawing::Point(41, 40);
                    this->label3->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
                    this->label3->Name = L"label3";
                    this->label3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
                    this->label3->Size = System::Drawing::Size(271, 25);
                    this->label3->TabIndex = 21;
                    this->label3->Text = L"Input a specific class or course";
                    this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
                    //
                    // inputClassCourse
                    //
                    this->AutoScaleDimensions = System::Drawing::SizeF(9, 23);
                    this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
                    this->BackColor = System::Drawing::Color::White;
                    this->ClientSize = System::Drawing::Size(359, 319);
                    this->Controls->Add(this->label3);
                    this->Controls->Add(this->inpCCExit);
                    this->Controls->Add(this->panel2);
                    this->Controls->Add(this->courseInput);
                    this->Controls->Add(this->panel1);
                    this->Controls->Add(this->label2);
                    this->Controls->Add(this->label1);
                    this->Controls->Add(this->classInput);
                    this->Controls->Add(this->viewClassCourse);
                    this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                        static_cast<System::Byte>(0)));
                    this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
                    this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
                    this->Name = L"inputClassCourse";
                    this->ShowIcon = false;
                    this->ShowInTaskbar = false;
                    this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
                    this->ResumeLayout(false);
                    this->PerformLayout();
                }
#pragma endregion
            public:
                void GetData(String ^& Class, String ^& Course) {
                    Class = classInput->Text;
                    Course = courseInput->Text;
                }
            private:
                System::Void inpCCExit_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    this->Close();
                }

            private:
                System::Void viewClassCourse_Click(System::Object ^ sender, System::EventArgs ^ e)
                {
                    if (classInput->Text != L"" && courseInput->Text != L"") {
                        MessageBox::Show("Only accept a class OR staff!", "Moodle", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);   
                    } else {
                        if (classInput->Text == L"" && courseInput->Text == L"") {
                            MessageBox::Show("Input a class or a course to view!", "Moodle", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);  
                        } 
                        else this->Close();
                    }
                }

            private:
                System::Void classInput_KeyDown(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (e->KeyValue == (int)Keys::Enter) {
                        viewClassCourse->PerformClick();
                    }
                }

            private:
                System::Void courseInput_KeyDown(System::Object ^ sender, System::Windows::Forms::KeyEventArgs ^ e)
                {
                    if (e->KeyValue == (int)Keys::Enter) {
                        viewClassCourse->PerformClick();
                    }
                }
            };
            }
