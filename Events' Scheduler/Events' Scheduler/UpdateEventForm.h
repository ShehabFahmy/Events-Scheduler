#pragma once
#include "Events.h"
#include <msclr/marshal_cppstd.h>

namespace EventsScheduler {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UpdateEventForm
	/// </summary>
	public ref class UpdateEventForm : public System::Windows::Forms::Form
	{
	public:
		UpdateEventForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		UpdateEventForm(class Events event) {
			InitializeComponent();
			*this->oldEvent = event;
		}
		class Events* oldEvent = new class Events();
		class Events* newEvent;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UpdateEventForm()
		{
			if (components)
			{
				delete components;
			}
			delete oldEvent;
			delete newEvent;
		}
	private: System::Windows::Forms::GroupBox^ event_prop_group_box;
	protected:
	private: System::Windows::Forms::Label^ place_warn_label;
	private: System::Windows::Forms::Label^ stime_warn_label;
	private: System::Windows::Forms::Label^ edate_warn_label;
	private: System::Windows::Forms::Label^ sdate_warn_label;
	private: System::Windows::Forms::Label^ rtime_warn_label;
	private: System::Windows::Forms::Label^ ename_warn_label;
	private: System::Windows::Forms::TextBox^ place_text_box;
	private: System::Windows::Forms::TextBox^ stime_text_box;
	private: System::Windows::Forms::TextBox^ edate_text_box;
	private: System::Windows::Forms::TextBox^ sdate_text_box;
	private: System::Windows::Forms::TextBox^ rtime_text_box;
	private: System::Windows::Forms::TextBox^ ename_text_box;
	private: System::Windows::Forms::Label^ place_label;
	private: System::Windows::Forms::Label^ stime_label;
	private: System::Windows::Forms::Label^ edate_label;
	private: System::Windows::Forms::Label^ sdate_label;
	private: System::Windows::Forms::Label^ rtime_label;
	private: System::Windows::Forms::Label^ ename_label;
	private: System::Windows::Forms::Button^ cancel_button;
	private: System::Windows::Forms::Button^ save_button;

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
			this->event_prop_group_box = (gcnew System::Windows::Forms::GroupBox());
			this->place_warn_label = (gcnew System::Windows::Forms::Label());
			this->stime_warn_label = (gcnew System::Windows::Forms::Label());
			this->edate_warn_label = (gcnew System::Windows::Forms::Label());
			this->sdate_warn_label = (gcnew System::Windows::Forms::Label());
			this->rtime_warn_label = (gcnew System::Windows::Forms::Label());
			this->ename_warn_label = (gcnew System::Windows::Forms::Label());
			this->place_text_box = (gcnew System::Windows::Forms::TextBox());
			this->stime_text_box = (gcnew System::Windows::Forms::TextBox());
			this->edate_text_box = (gcnew System::Windows::Forms::TextBox());
			this->sdate_text_box = (gcnew System::Windows::Forms::TextBox());
			this->rtime_text_box = (gcnew System::Windows::Forms::TextBox());
			this->ename_text_box = (gcnew System::Windows::Forms::TextBox());
			this->place_label = (gcnew System::Windows::Forms::Label());
			this->stime_label = (gcnew System::Windows::Forms::Label());
			this->edate_label = (gcnew System::Windows::Forms::Label());
			this->sdate_label = (gcnew System::Windows::Forms::Label());
			this->rtime_label = (gcnew System::Windows::Forms::Label());
			this->ename_label = (gcnew System::Windows::Forms::Label());
			this->cancel_button = (gcnew System::Windows::Forms::Button());
			this->save_button = (gcnew System::Windows::Forms::Button());
			this->event_prop_group_box->SuspendLayout();
			this->SuspendLayout();
			// 
			// event_prop_group_box
			// 
			this->event_prop_group_box->Controls->Add(this->place_warn_label);
			this->event_prop_group_box->Controls->Add(this->stime_warn_label);
			this->event_prop_group_box->Controls->Add(this->edate_warn_label);
			this->event_prop_group_box->Controls->Add(this->sdate_warn_label);
			this->event_prop_group_box->Controls->Add(this->rtime_warn_label);
			this->event_prop_group_box->Controls->Add(this->ename_warn_label);
			this->event_prop_group_box->Controls->Add(this->place_text_box);
			this->event_prop_group_box->Controls->Add(this->stime_text_box);
			this->event_prop_group_box->Controls->Add(this->edate_text_box);
			this->event_prop_group_box->Controls->Add(this->sdate_text_box);
			this->event_prop_group_box->Controls->Add(this->rtime_text_box);
			this->event_prop_group_box->Controls->Add(this->ename_text_box);
			this->event_prop_group_box->Controls->Add(this->place_label);
			this->event_prop_group_box->Controls->Add(this->stime_label);
			this->event_prop_group_box->Controls->Add(this->edate_label);
			this->event_prop_group_box->Controls->Add(this->sdate_label);
			this->event_prop_group_box->Controls->Add(this->rtime_label);
			this->event_prop_group_box->Controls->Add(this->ename_label);
			this->event_prop_group_box->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->event_prop_group_box->Location = System::Drawing::Point(12, 12);
			this->event_prop_group_box->Name = L"event_prop_group_box";
			this->event_prop_group_box->Size = System::Drawing::Size(410, 254);
			this->event_prop_group_box->TabIndex = 1;
			this->event_prop_group_box->TabStop = false;
			this->event_prop_group_box->Text = L"Properties";
			// 
			// place_warn_label
			// 
			this->place_warn_label->AutoSize = true;
			this->place_warn_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->place_warn_label->ForeColor = System::Drawing::Color::Red;
			this->place_warn_label->Location = System::Drawing::Point(266, 220);
			this->place_warn_label->Name = L"place_warn_label";
			this->place_warn_label->Size = System::Drawing::Size(64, 14);
			this->place_warn_label->TabIndex = 17;
			this->place_warn_label->Text = L"Enter place";
			this->place_warn_label->Visible = false;
			// 
			// stime_warn_label
			// 
			this->stime_warn_label->AutoSize = true;
			this->stime_warn_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stime_warn_label->ForeColor = System::Drawing::Color::Red;
			this->stime_warn_label->Location = System::Drawing::Point(266, 183);
			this->stime_warn_label->Name = L"stime_warn_label";
			this->stime_warn_label->Size = System::Drawing::Size(86, 14);
			this->stime_warn_label->TabIndex = 16;
			this->stime_warn_label->Text = L"Enter start time";
			this->stime_warn_label->Visible = false;
			// 
			// edate_warn_label
			// 
			this->edate_warn_label->AutoSize = true;
			this->edate_warn_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edate_warn_label->ForeColor = System::Drawing::Color::Red;
			this->edate_warn_label->Location = System::Drawing::Point(266, 146);
			this->edate_warn_label->Name = L"edate_warn_label";
			this->edate_warn_label->Size = System::Drawing::Size(83, 14);
			this->edate_warn_label->TabIndex = 15;
			this->edate_warn_label->Text = L"Enter end date";
			this->edate_warn_label->Visible = false;
			// 
			// sdate_warn_label
			// 
			this->sdate_warn_label->AutoSize = true;
			this->sdate_warn_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sdate_warn_label->ForeColor = System::Drawing::Color::Red;
			this->sdate_warn_label->Location = System::Drawing::Point(266, 109);
			this->sdate_warn_label->Name = L"sdate_warn_label";
			this->sdate_warn_label->Size = System::Drawing::Size(86, 14);
			this->sdate_warn_label->TabIndex = 14;
			this->sdate_warn_label->Text = L"Enter start date";
			this->sdate_warn_label->Visible = false;
			// 
			// rtime_warn_label
			// 
			this->rtime_warn_label->AutoSize = true;
			this->rtime_warn_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rtime_warn_label->ForeColor = System::Drawing::Color::Red;
			this->rtime_warn_label->Location = System::Drawing::Point(266, 73);
			this->rtime_warn_label->Name = L"rtime_warn_label";
			this->rtime_warn_label->Size = System::Drawing::Size(110, 14);
			this->rtime_warn_label->TabIndex = 13;
			this->rtime_warn_label->Text = L"Enter reminder time";
			this->rtime_warn_label->Visible = false;
			// 
			// ename_warn_label
			// 
			this->ename_warn_label->AutoSize = true;
			this->ename_warn_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ename_warn_label->ForeColor = System::Drawing::Color::Red;
			this->ename_warn_label->Location = System::Drawing::Point(266, 35);
			this->ename_warn_label->Name = L"ename_warn_label";
			this->ename_warn_label->Size = System::Drawing::Size(98, 14);
			this->ename_warn_label->TabIndex = 12;
			this->ename_warn_label->Text = L"Enter event name";
			this->ename_warn_label->Visible = false;
			// 
			// place_text_box
			// 
			this->place_text_box->Location = System::Drawing::Point(160, 216);
			this->place_text_box->Name = L"place_text_box";
			this->place_text_box->Size = System::Drawing::Size(100, 22);
			this->place_text_box->TabIndex = 11;
			// 
			// stime_text_box
			// 
			this->stime_text_box->Location = System::Drawing::Point(160, 179);
			this->stime_text_box->Name = L"stime_text_box";
			this->stime_text_box->Size = System::Drawing::Size(100, 22);
			this->stime_text_box->TabIndex = 10;
			// 
			// edate_text_box
			// 
			this->edate_text_box->Location = System::Drawing::Point(160, 142);
			this->edate_text_box->Name = L"edate_text_box";
			this->edate_text_box->Size = System::Drawing::Size(100, 22);
			this->edate_text_box->TabIndex = 9;
			// 
			// sdate_text_box
			// 
			this->sdate_text_box->Location = System::Drawing::Point(160, 105);
			this->sdate_text_box->Name = L"sdate_text_box";
			this->sdate_text_box->Size = System::Drawing::Size(100, 22);
			this->sdate_text_box->TabIndex = 8;
			// 
			// rtime_text_box
			// 
			this->rtime_text_box->Location = System::Drawing::Point(160, 69);
			this->rtime_text_box->Name = L"rtime_text_box";
			this->rtime_text_box->Size = System::Drawing::Size(100, 22);
			this->rtime_text_box->TabIndex = 7;
			// 
			// ename_text_box
			// 
			this->ename_text_box->Location = System::Drawing::Point(160, 31);
			this->ename_text_box->Name = L"ename_text_box";
			this->ename_text_box->Size = System::Drawing::Size(100, 22);
			this->ename_text_box->TabIndex = 6;
			// 
			// place_label
			// 
			this->place_label->AutoSize = true;
			this->place_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->place_label->Location = System::Drawing::Point(63, 220);
			this->place_label->Name = L"place_label";
			this->place_label->Size = System::Drawing::Size(34, 14);
			this->place_label->TabIndex = 5;
			this->place_label->Text = L"Place";
			// 
			// stime_label
			// 
			this->stime_label->AutoSize = true;
			this->stime_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stime_label->Location = System::Drawing::Point(63, 183);
			this->stime_label->Name = L"stime_label";
			this->stime_label->Size = System::Drawing::Size(59, 14);
			this->stime_label->TabIndex = 4;
			this->stime_label->Text = L"Start Time";
			// 
			// edate_label
			// 
			this->edate_label->AutoSize = true;
			this->edate_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edate_label->Location = System::Drawing::Point(63, 146);
			this->edate_label->Name = L"edate_label";
			this->edate_label->Size = System::Drawing::Size(54, 14);
			this->edate_label->TabIndex = 3;
			this->edate_label->Text = L"End Date";
			// 
			// sdate_label
			// 
			this->sdate_label->AutoSize = true;
			this->sdate_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sdate_label->Location = System::Drawing::Point(63, 109);
			this->sdate_label->Name = L"sdate_label";
			this->sdate_label->Size = System::Drawing::Size(58, 14);
			this->sdate_label->TabIndex = 2;
			this->sdate_label->Text = L"Start Date";
			// 
			// rtime_label
			// 
			this->rtime_label->AutoSize = true;
			this->rtime_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rtime_label->Location = System::Drawing::Point(63, 72);
			this->rtime_label->Name = L"rtime_label";
			this->rtime_label->Size = System::Drawing::Size(85, 14);
			this->rtime_label->TabIndex = 1;
			this->rtime_label->Text = L"Reminder Time";
			// 
			// ename_label
			// 
			this->ename_label->AutoSize = true;
			this->ename_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ename_label->Location = System::Drawing::Point(63, 35);
			this->ename_label->Name = L"ename_label";
			this->ename_label->Size = System::Drawing::Size(70, 14);
			this->ename_label->TabIndex = 0;
			this->ename_label->Text = L"Event Name";
			// 
			// cancel_button
			// 
			this->cancel_button->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->cancel_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->cancel_button->FlatAppearance->BorderColor = System::Drawing::Color::Aqua;
			this->cancel_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkTurquoise;
			this->cancel_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->cancel_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cancel_button->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cancel_button->ForeColor = System::Drawing::Color::Aqua;
			this->cancel_button->Location = System::Drawing::Point(353, 272);
			this->cancel_button->Name = L"cancel_button";
			this->cancel_button->Size = System::Drawing::Size(69, 30);
			this->cancel_button->TabIndex = 8;
			this->cancel_button->Text = L"Cancel";
			this->cancel_button->UseVisualStyleBackColor = true;
			this->cancel_button->Click += gcnew System::EventHandler(this, &UpdateEventForm::cancel_button_Click);
			// 
			// save_button
			// 
			this->save_button->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->save_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->save_button->FlatAppearance->BorderColor = System::Drawing::Color::Aqua;
			this->save_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkTurquoise;
			this->save_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->save_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->save_button->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save_button->ForeColor = System::Drawing::Color::Aqua;
			this->save_button->Location = System::Drawing::Point(278, 272);
			this->save_button->Name = L"save_button";
			this->save_button->Size = System::Drawing::Size(69, 30);
			this->save_button->TabIndex = 7;
			this->save_button->Text = L"Save";
			this->save_button->UseVisualStyleBackColor = true;
			this->save_button->Click += gcnew System::EventHandler(this, &UpdateEventForm::save_button_Click);
			// 
			// UpdateEventForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(434, 311);
			this->Controls->Add(this->cancel_button);
			this->Controls->Add(this->save_button);
			this->Controls->Add(this->event_prop_group_box);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"UpdateEventForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Update Event";
			this->Load += gcnew System::EventHandler(this, &UpdateEventForm::UpdateEventForm_Load);
			this->event_prop_group_box->ResumeLayout(false);
			this->event_prop_group_box->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void UpdateEventForm_Load(System::Object^ sender, System::EventArgs^ e) {
		class Events test = *oldEvent;
		MessageBox::Show(gcnew String(test.name.c_str()));
		ename_text_box->Text = gcnew String(oldEvent->name.c_str());
		place_text_box->Text = gcnew String(oldEvent->place.c_str());
		sdate_text_box->Text = oldEvent->start_date.ToString();
		edate_text_box->Text = oldEvent->end_date.ToString();
		stime_text_box->Text = oldEvent->start_time.ToString();
		rtime_text_box->Text = oldEvent->reminder_time.ToString();
	}

private: System::Void save_button_Click(System::Object^ sender, System::EventArgs^ e) {
	bool saveFail = false;
	if (ename_text_box->Text == "") {
		ename_warn_label->Visible = true;
		saveFail = true;
	}
	else {
		ename_warn_label->Visible = false;
	}
	if (rtime_text_box->Text == "") {
		rtime_warn_label->Visible = true;
		saveFail = true;
	}
	else {
		rtime_warn_label->Visible = false;
	}
	if (sdate_text_box->Text == "") {
		sdate_warn_label->Visible = true;
		saveFail = true;
	}
	else {
		sdate_warn_label->Visible = false;
	}
	if (edate_text_box->Text == "") {
		edate_warn_label->Visible = true;
		saveFail = true;
	}
	else {
		edate_warn_label->Visible = false;
	}
	if (stime_text_box->Text == "") {
		stime_warn_label->Visible = true;
		saveFail = true;
	}
	else {
		stime_warn_label->Visible = false;
	}
	if (place_text_box->Text == "") {
		place_warn_label->Visible = true;
		saveFail = true;
	}
	else {
		place_warn_label->Visible = false;
	}
	if (!saveFail) {
		string name = msclr::interop::marshal_as<std::string>(ename_text_box->Text);
		string place = msclr::interop::marshal_as<std::string>(place_text_box->Text);
		string start_date = msclr::interop::marshal_as<std::string>(sdate_text_box->Text);
		string end_date = msclr::interop::marshal_as<std::string>(edate_text_box->Text);
		string start_time = msclr::interop::marshal_as<std::string>(stime_text_box->Text);
		string reminder_time = msclr::interop::marshal_as<std::string>(rtime_text_box->Text);
		newEvent = new class Events(name, place, stod(start_date), stod(end_date), stod(start_time), stod(reminder_time));
		this->Close();
	}
}
private: System::Void cancel_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}