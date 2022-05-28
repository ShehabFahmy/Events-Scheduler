#pragma once
#include "dbConnection.h"
#include "User.h"
#include <msclr/marshal_cppstd.h>

namespace EventsScheduler {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ login_panel;
	protected:
	private: System::Windows::Forms::PictureBox^ login_picture_box;
	private: System::Windows::Forms::Label^ signin_label;
	private: System::Windows::Forms::Label^ password_label;

	private: System::Windows::Forms::Label^ username_label;
	private: System::Windows::Forms::Label^ login_logo_label;



	private: System::Windows::Forms::TextBox^ password_text_box;
	private: System::Windows::Forms::TextBox^ username_text_box;
	private: System::Windows::Forms::LinkLabel^ register_link_label;
	private: System::Windows::Forms::Panel^ register_panel;
	private: System::Windows::Forms::TextBox^ confirm_password_text_box;
	private: System::Windows::Forms::Label^ confirm_password_label;
	private: System::Windows::Forms::LinkLabel^ login_link_label;


	private: System::Windows::Forms::TextBox^ register_password_text_box;
	private: System::Windows::Forms::TextBox^ register_username_text_box;
	private: System::Windows::Forms::Label^ register_password_label;
	private: System::Windows::Forms::Label^ register_username_label;
	private: System::Windows::Forms::Label^ signup_label;
	private: System::Windows::Forms::PictureBox^ register_picture_box;
	private: System::Windows::Forms::Button^ signin_button;
	private: System::Windows::Forms::Button^ signup_button;
	private: System::Windows::Forms::Label^ register_logo_label;
























	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->login_panel = (gcnew System::Windows::Forms::Panel());
			this->register_link_label = (gcnew System::Windows::Forms::LinkLabel());
			this->signin_button = (gcnew System::Windows::Forms::Button());
			this->password_text_box = (gcnew System::Windows::Forms::TextBox());
			this->username_text_box = (gcnew System::Windows::Forms::TextBox());
			this->password_label = (gcnew System::Windows::Forms::Label());
			this->username_label = (gcnew System::Windows::Forms::Label());
			this->signin_label = (gcnew System::Windows::Forms::Label());
			this->login_picture_box = (gcnew System::Windows::Forms::PictureBox());
			this->login_logo_label = (gcnew System::Windows::Forms::Label());
			this->register_panel = (gcnew System::Windows::Forms::Panel());
			this->confirm_password_label = (gcnew System::Windows::Forms::Label());
			this->register_password_label = (gcnew System::Windows::Forms::Label());
			this->register_username_label = (gcnew System::Windows::Forms::Label());
			this->signup_label = (gcnew System::Windows::Forms::Label());
			this->login_link_label = (gcnew System::Windows::Forms::LinkLabel());
			this->signup_button = (gcnew System::Windows::Forms::Button());
			this->confirm_password_text_box = (gcnew System::Windows::Forms::TextBox());
			this->register_password_text_box = (gcnew System::Windows::Forms::TextBox());
			this->register_username_text_box = (gcnew System::Windows::Forms::TextBox());
			this->register_picture_box = (gcnew System::Windows::Forms::PictureBox());
			this->register_logo_label = (gcnew System::Windows::Forms::Label());
			this->login_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->login_picture_box))->BeginInit();
			this->register_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->register_picture_box))->BeginInit();
			this->SuspendLayout();
			// 
			// login_panel
			// 
			this->login_panel->Controls->Add(this->login_logo_label);
			this->login_panel->Controls->Add(this->register_link_label);
			this->login_panel->Controls->Add(this->signin_button);
			this->login_panel->Controls->Add(this->password_text_box);
			this->login_panel->Controls->Add(this->username_text_box);
			this->login_panel->Controls->Add(this->password_label);
			this->login_panel->Controls->Add(this->username_label);
			this->login_panel->Controls->Add(this->signin_label);
			this->login_panel->Controls->Add(this->login_picture_box);
			this->login_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->login_panel->Location = System::Drawing::Point(0, 0);
			this->login_panel->Name = L"login_panel";
			this->login_panel->Size = System::Drawing::Size(624, 361);
			this->login_panel->TabIndex = 0;
			// 
			// register_link_label
			// 
			this->register_link_label->AutoSize = true;
			this->register_link_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->register_link_label->LinkColor = System::Drawing::Color::DodgerBlue;
			this->register_link_label->Location = System::Drawing::Point(148, 318);
			this->register_link_label->Name = L"register_link_label";
			this->register_link_label->Size = System::Drawing::Size(131, 15);
			this->register_link_label->TabIndex = 3;
			this->register_link_label->TabStop = true;
			this->register_link_label->Text = L"Haven\'t registered yet\?";
			this->register_link_label->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::register_link_label_LinkClicked);
			// 
			// signin_button
			// 
			this->signin_button->AutoSize = true;
			this->signin_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signin_button->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->signin_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::MediumSlateBlue;
			this->signin_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::SlateBlue;
			this->signin_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signin_button->Font = (gcnew System::Drawing::Font(L"Gadugi", 8));
			this->signin_button->ForeColor = System::Drawing::Color::AliceBlue;
			this->signin_button->Location = System::Drawing::Point(277, 283);
			this->signin_button->Name = L"signin_button";
			this->signin_button->Size = System::Drawing::Size(70, 26);
			this->signin_button->TabIndex = 2;
			this->signin_button->Text = L"Sign In";
			this->signin_button->UseVisualStyleBackColor = false;
			this->signin_button->Click += gcnew System::EventHandler(this, &LoginForm::signin_button_Click);
			// 
			// password_text_box
			// 
			this->password_text_box->BackColor = System::Drawing::Color::SlateBlue;
			this->password_text_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_text_box->Location = System::Drawing::Point(252, 248);
			this->password_text_box->Name = L"password_text_box";
			this->password_text_box->PasswordChar = '●';
			this->password_text_box->Size = System::Drawing::Size(133, 21);
			this->password_text_box->TabIndex = 1;
			this->password_text_box->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginForm::password_text_box_KeyDown);
			// 
			// username_text_box
			// 
			this->username_text_box->BackColor = System::Drawing::Color::SlateBlue;
			this->username_text_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->username_text_box->Location = System::Drawing::Point(203, 212);
			this->username_text_box->Name = L"username_text_box";
			this->username_text_box->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->username_text_box->Size = System::Drawing::Size(117, 22);
			this->username_text_box->TabIndex = 0;
			this->username_text_box->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginForm::username_text_box_KeyDown);
			// 
			// password_label
			// 
			this->password_label->BackColor = System::Drawing::Color::Transparent;
			this->password_label->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->password_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_label->ForeColor = System::Drawing::Color::AliceBlue;
			this->password_label->Location = System::Drawing::Point(147, 248);
			this->password_label->Name = L"password_label";
			this->password_label->Size = System::Drawing::Size(99, 21);
			this->password_label->TabIndex = 1;
			this->password_label->Text = L"Password";
			// 
			// username_label
			// 
			this->username_label->AutoSize = true;
			this->username_label->BackColor = System::Drawing::Color::Transparent;
			this->username_label->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->username_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_label->ForeColor = System::Drawing::Color::AliceBlue;
			this->username_label->Location = System::Drawing::Point(147, 213);
			this->username_label->Name = L"username_label";
			this->username_label->Size = System::Drawing::Size(50, 21);
			this->username_label->TabIndex = 0;
			this->username_label->Text = L"User";
			// 
			// signin_label
			// 
			this->signin_label->AutoSize = true;
			this->signin_label->BackColor = System::Drawing::Color::Transparent;
			this->signin_label->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->signin_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signin_label->ForeColor = System::Drawing::Color::AliceBlue;
			this->signin_label->Location = System::Drawing::Point(271, 159);
			this->signin_label->Name = L"signin_label";
			this->signin_label->Size = System::Drawing::Size(82, 25);
			this->signin_label->TabIndex = 3;
			this->signin_label->Text = L"Sign In";
			// 
			// login_picture_box
			// 
			this->login_picture_box->Dock = System::Windows::Forms::DockStyle::Fill;
			this->login_picture_box->Location = System::Drawing::Point(0, 0);
			this->login_picture_box->Name = L"login_picture_box";
			this->login_picture_box->Size = System::Drawing::Size(624, 361);
			this->login_picture_box->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->login_picture_box->TabIndex = 2;
			this->login_picture_box->TabStop = false;
			// 
			// login_logo_label
			// 
			this->login_logo_label->AutoSize = true;
			this->login_logo_label->BackColor = System::Drawing::Color::Transparent;
			this->login_logo_label->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->login_logo_label->Font = (gcnew System::Drawing::Font(L"Good Times Rg", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_logo_label->ForeColor = System::Drawing::Color::AliceBlue;
			this->login_logo_label->Location = System::Drawing::Point(185, 31);
			this->login_logo_label->Name = L"login_logo_label";
			this->login_logo_label->Size = System::Drawing::Size(255, 76);
			this->login_logo_label->TabIndex = 1;
			this->login_logo_label->Text = L"    Events\'\r\nScheduler";
			// 
			// register_panel
			// 
			this->register_panel->Controls->Add(this->register_logo_label);
			this->register_panel->Controls->Add(this->confirm_password_label);
			this->register_panel->Controls->Add(this->register_password_label);
			this->register_panel->Controls->Add(this->register_username_label);
			this->register_panel->Controls->Add(this->signup_label);
			this->register_panel->Controls->Add(this->login_link_label);
			this->register_panel->Controls->Add(this->signup_button);
			this->register_panel->Controls->Add(this->confirm_password_text_box);
			this->register_panel->Controls->Add(this->register_password_text_box);
			this->register_panel->Controls->Add(this->register_username_text_box);
			this->register_panel->Controls->Add(this->register_picture_box);
			this->register_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->register_panel->Location = System::Drawing::Point(0, 0);
			this->register_panel->Name = L"register_panel";
			this->register_panel->Size = System::Drawing::Size(624, 361);
			this->register_panel->TabIndex = 10;
			// 
			// confirm_password_label
			// 
			this->confirm_password_label->AutoSize = true;
			this->confirm_password_label->BackColor = System::Drawing::Color::Transparent;
			this->confirm_password_label->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->confirm_password_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirm_password_label->ForeColor = System::Drawing::Color::AliceBlue;
			this->confirm_password_label->Location = System::Drawing::Point(147, 283);
			this->confirm_password_label->Name = L"confirm_password_label";
			this->confirm_password_label->Size = System::Drawing::Size(173, 21);
			this->confirm_password_label->TabIndex = 8;
			this->confirm_password_label->Text = L"Confirm Password";
			// 
			// register_password_label
			// 
			this->register_password_label->BackColor = System::Drawing::Color::Transparent;
			this->register_password_label->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->register_password_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->register_password_label->ForeColor = System::Drawing::Color::AliceBlue;
			this->register_password_label->Location = System::Drawing::Point(147, 248);
			this->register_password_label->Name = L"register_password_label";
			this->register_password_label->Size = System::Drawing::Size(99, 21);
			this->register_password_label->TabIndex = 7;
			this->register_password_label->Text = L"Password";
			// 
			// register_username_label
			// 
			this->register_username_label->AutoSize = true;
			this->register_username_label->BackColor = System::Drawing::Color::Transparent;
			this->register_username_label->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->register_username_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->register_username_label->ForeColor = System::Drawing::Color::AliceBlue;
			this->register_username_label->Location = System::Drawing::Point(147, 213);
			this->register_username_label->Name = L"register_username_label";
			this->register_username_label->Size = System::Drawing::Size(50, 21);
			this->register_username_label->TabIndex = 6;
			this->register_username_label->Text = L"User";
			// 
			// signup_label
			// 
			this->signup_label->AutoSize = true;
			this->signup_label->BackColor = System::Drawing::Color::Transparent;
			this->signup_label->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->signup_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signup_label->ForeColor = System::Drawing::Color::AliceBlue;
			this->signup_label->Location = System::Drawing::Point(271, 159);
			this->signup_label->Name = L"signup_label";
			this->signup_label->Size = System::Drawing::Size(90, 25);
			this->signup_label->TabIndex = 5;
			this->signup_label->Text = L"Sign Up";
			// 
			// login_link_label
			// 
			this->login_link_label->AutoSize = true;
			this->login_link_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_link_label->LinkColor = System::Drawing::Color::DodgerBlue;
			this->login_link_label->Location = System::Drawing::Point(148, 327);
			this->login_link_label->Name = L"login_link_label";
			this->login_link_label->Size = System::Drawing::Size(112, 15);
			this->login_link_label->TabIndex = 4;
			this->login_link_label->TabStop = true;
			this->login_link_label->Text = L"Already registered\?";
			this->login_link_label->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &LoginForm::login_link_label_LinkClicked);
			// 
			// signup_button
			// 
			this->signup_button->AutoSize = true;
			this->signup_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signup_button->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->signup_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::MediumSlateBlue;
			this->signup_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::SlateBlue;
			this->signup_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->signup_button->Font = (gcnew System::Drawing::Font(L"Gadugi", 8));
			this->signup_button->ForeColor = System::Drawing::Color::AliceBlue;
			this->signup_button->Location = System::Drawing::Point(352, 318);
			this->signup_button->Name = L"signup_button";
			this->signup_button->Size = System::Drawing::Size(70, 26);
			this->signup_button->TabIndex = 3;
			this->signup_button->Text = L"Sign Up";
			this->signup_button->UseVisualStyleBackColor = false;
			this->signup_button->Click += gcnew System::EventHandler(this, &LoginForm::signup_button_Click);
			// 
			// confirm_password_text_box
			// 
			this->confirm_password_text_box->BackColor = System::Drawing::Color::SlateBlue;
			this->confirm_password_text_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->confirm_password_text_box->Location = System::Drawing::Point(326, 283);
			this->confirm_password_text_box->Name = L"confirm_password_text_box";
			this->confirm_password_text_box->PasswordChar = '●';
			this->confirm_password_text_box->Size = System::Drawing::Size(123, 21);
			this->confirm_password_text_box->TabIndex = 2;
			this->confirm_password_text_box->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginForm::confirm_password_text_box_KeyDown);
			// 
			// register_password_text_box
			// 
			this->register_password_text_box->BackColor = System::Drawing::Color::SlateBlue;
			this->register_password_text_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->register_password_text_box->Location = System::Drawing::Point(252, 248);
			this->register_password_text_box->Name = L"register_password_text_box";
			this->register_password_text_box->PasswordChar = '●';
			this->register_password_text_box->Size = System::Drawing::Size(133, 21);
			this->register_password_text_box->TabIndex = 1;
			this->register_password_text_box->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginForm::register_password_text_box_KeyDown);
			// 
			// register_username_text_box
			// 
			this->register_username_text_box->BackColor = System::Drawing::Color::SlateBlue;
			this->register_username_text_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->register_username_text_box->Location = System::Drawing::Point(203, 212);
			this->register_username_text_box->Name = L"register_username_text_box";
			this->register_username_text_box->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->register_username_text_box->Size = System::Drawing::Size(117, 22);
			this->register_username_text_box->TabIndex = 0;
			this->register_username_text_box->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &LoginForm::register_username_text_box_KeyDown);
			// 
			// register_picture_box
			// 
			this->register_picture_box->Dock = System::Windows::Forms::DockStyle::Fill;
			this->register_picture_box->Location = System::Drawing::Point(0, 0);
			this->register_picture_box->Name = L"register_picture_box";
			this->register_picture_box->Size = System::Drawing::Size(624, 361);
			this->register_picture_box->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->register_picture_box->TabIndex = 11;
			this->register_picture_box->TabStop = false;
			// 
			// register_logo_label
			// 
			this->register_logo_label->AutoSize = true;
			this->register_logo_label->BackColor = System::Drawing::Color::Transparent;
			this->register_logo_label->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->register_logo_label->Font = (gcnew System::Drawing::Font(L"Good Times Rg", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->register_logo_label->ForeColor = System::Drawing::Color::AliceBlue;
			this->register_logo_label->Location = System::Drawing::Point(185, 31);
			this->register_logo_label->Name = L"register_logo_label";
			this->register_logo_label->Size = System::Drawing::Size(255, 76);
			this->register_logo_label->TabIndex = 4;
			this->register_logo_label->Text = L"    Events\'\r\nScheduler";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(624, 361);
			this->Controls->Add(this->login_panel);
			this->Controls->Add(this->register_panel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Events\' Scheduler";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->login_panel->ResumeLayout(false);
			this->login_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->login_picture_box))->EndInit();
			this->register_panel->ResumeLayout(false);
			this->register_panel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->register_picture_box))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ folderPath = Application::StartupPath;
		folderPath += "\\resources\\login\\";
		String^ fileName = "3.png";
		//String^ pathString = System::IO::Path::Combine(folderPath, fileName);
		login_picture_box->Image = Image::FromFile(folderPath + fileName);
		register_picture_box->Image = Image::FromFile(folderPath + fileName);

		login_logo_label->Parent = login_picture_box;
		login_logo_label->BackColor = Color::Transparent;

		register_logo_label->Parent = register_picture_box;
		register_logo_label->BackColor = Color::Transparent;

		signin_label->Parent = login_picture_box;
		signin_label->BackColor = Color::Transparent;

		username_label->Parent = login_picture_box;
		username_label->BackColor = Color::Transparent;

		password_label->Parent = login_picture_box;
		password_label->BackColor = Color::Transparent;

		register_link_label->Parent = login_picture_box;
		register_link_label->BackColor = Color::Transparent;

		password_text_box->PasswordChar = 0x2022;

		signup_label->Parent = register_picture_box;
		signup_label->BackColor = Color::Transparent;

		register_username_label->Parent = register_picture_box;
		register_username_label->BackColor = Color::Transparent;

		register_password_label->Parent = register_picture_box;
		register_password_label->BackColor = Color::Transparent;
		register_password_text_box->PasswordChar = 0x2022;

		confirm_password_label->Parent = register_picture_box;
		confirm_password_label->BackColor = Color::Transparent;
		confirm_password_text_box->PasswordChar = 0x2022;

		signin_button->Parent = login_picture_box;
		signin_button->BackColor = Color::Transparent;

		signup_button->Parent = register_picture_box;
		signup_button->BackColor = Color::Transparent;

		login_link_label->Parent = register_picture_box;
		login_link_label->BackColor = Color::Transparent;

	}
	private: System::Void register_link_label_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		register_panel->BringToFront();
		username_text_box->Clear();
		password_text_box->Clear();
		register_username_text_box->Clear();
		register_password_text_box->Clear();
		confirm_password_text_box->Clear();
		this->ActiveControl = register_username_text_box;
	}
	private: System::Void login_link_label_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		login_panel->BringToFront();
		username_text_box->Clear();
		password_text_box->Clear();
		register_username_text_box->Clear();
		register_password_text_box->Clear();
		confirm_password_text_box->Clear();
		this->ActiveControl = username_text_box;
	}
	private:
		void login_enterkey_pressed();
		void signup_enterkey_pressed();
	private: System::Void password_text_box_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			login_enterkey_pressed();
		}
	}
	private: System::Void username_text_box_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			login_enterkey_pressed();
		}
	}
	private: System::Void signin_button_Click(System::Object^ sender, System::EventArgs^ e) {
		login_enterkey_pressed();
	}

	private: System::Void register_username_text_box_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			signup_enterkey_pressed();
		}
	}
	private: System::Void register_password_text_box_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			signup_enterkey_pressed();
		}
	}
	private: System::Void confirm_password_text_box_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Enter) {
			signup_enterkey_pressed();
		}
	}
	private: System::Void signup_button_Click(System::Object^ sender, System::EventArgs^ e) {
		signup_enterkey_pressed();
	}
	};
}