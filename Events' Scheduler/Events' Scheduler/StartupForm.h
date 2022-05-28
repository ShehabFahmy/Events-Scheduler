#pragma once
#include "LoginForm.h"
#include <msclr/marshal_cppstd.h>

using namespace std;

namespace EventsScheduler {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StartupForm
	/// </summary>
	public ref class StartupForm : public System::Windows::Forms::Form
	{
	public:
		StartupForm(void)
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
		~StartupForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ startup_panel;
	protected:

	private: System::Windows::Forms::Timer^ startup_timer;
	private: System::Windows::Forms::PictureBox^ startup_picture_box;





	private: System::ComponentModel::IContainer^ components;

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
			this->startup_panel = (gcnew System::Windows::Forms::Panel());
			this->startup_picture_box = (gcnew System::Windows::Forms::PictureBox());
			this->startup_timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->startup_panel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->startup_picture_box))->BeginInit();
			this->SuspendLayout();
			// 
			// startup_panel
			// 
			this->startup_panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->startup_panel->Controls->Add(this->startup_picture_box);
			this->startup_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->startup_panel->Location = System::Drawing::Point(0, 0);
			this->startup_panel->Name = L"startup_panel";
			this->startup_panel->Size = System::Drawing::Size(344, 321);
			this->startup_panel->TabIndex = 0;
			// 
			// startup_picture_box
			// 
			this->startup_picture_box->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->startup_picture_box->Dock = System::Windows::Forms::DockStyle::Fill;
			this->startup_picture_box->Location = System::Drawing::Point(0, 0);
			this->startup_picture_box->Name = L"startup_picture_box";
			this->startup_picture_box->Size = System::Drawing::Size(344, 321);
			this->startup_picture_box->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->startup_picture_box->TabIndex = 0;
			this->startup_picture_box->TabStop = false;
			// 
			// startup_timer
			// 
			this->startup_timer->Enabled = true;
			this->startup_timer->Interval = 75;
			this->startup_timer->Tick += gcnew System::EventHandler(this, &StartupForm::startup_timer_Tick);
			// 
			// StartupForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(344, 321);
			this->ControlBox = false;
			this->Controls->Add(this->startup_panel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"StartupForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Events\' Scheduler";
			this->startup_panel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->startup_picture_box))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		void onStartupFrame(int imageNumber);
		int imageCounter = 1;
	private: System::Void startup_timer_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (imageCounter <= 15) {
			onStartupFrame(imageCounter);
			if (imageCounter == 15) {
				startup_timer->Interval = 500;
			}
		}
		else {
			startup_timer->Interval = 50;
			onStartupFrame(30 - imageCounter);
		}
		imageCounter++;
		if (imageCounter == 30) {
			startup_timer->Enabled = false;
			startup_picture_box->Enabled = false;
			startup_picture_box->Visible = false;
			this->Enabled = false;
			this->Hide();
			LoginForm^ loginForm = gcnew EventsScheduler::LoginForm;
			loginForm->ShowDialog();
			this->Close();
			/*this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Sizable;
			this->ControlBox = true;*/
		}
	}
	};
}