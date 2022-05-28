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
	/// Summary for AddEventForm
	/// </summary>
	public ref class AddEventForm : public System::Windows::Forms::Form
	{
	public:
		AddEventForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::MonthCalendar^ start_month_calendar;
	private: System::Windows::Forms::MonthCalendar^ end_month_calendar;
	private: System::Windows::Forms::ComboBox^ rtime_dp_combo_box;


	private: System::Windows::Forms::ComboBox^ rtime_min_combo_box;

	private: System::Windows::Forms::ComboBox^ rtime_hrs_combo_box;
	private: System::Windows::Forms::ComboBox^ stime_dp_combo_box;
	private: System::Windows::Forms::ComboBox^ stime_min_combo_box;
	private: System::Windows::Forms::ComboBox^ stime_hrs_combo_box;
	private: System::Windows::Forms::PictureBox^ add_event_picture_box;

	public:

	public:

	public:
		class Events* newEvent;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AddEventForm()
		{
			if (components)
			{
				delete components;
			}
			delete newEvent;
		}
	private: System::Windows::Forms::GroupBox^ event_prop_group_box;
	private: System::Windows::Forms::Label^ edate_label;

	private: System::Windows::Forms::Label^ sdate_label;

	private: System::Windows::Forms::Label^ rtime_label;

	private: System::Windows::Forms::Label^ ename_label;
	private: System::Windows::Forms::TextBox^ place_text_box;




	private: System::Windows::Forms::TextBox^ edate_text_box;

	private: System::Windows::Forms::TextBox^ sdate_text_box;



	private: System::Windows::Forms::TextBox^ ename_text_box;

	private: System::Windows::Forms::Label^ place_label;

	private: System::Windows::Forms::Label^ stime_label;
	private: System::Windows::Forms::Button^ save_button;

	private: System::Windows::Forms::Button^ cancel_button;
	private: System::Windows::Forms::Label^ place_warn_label;
	private: System::Windows::Forms::Label^ stime_warn_label;
	private: System::Windows::Forms::Label^ edate_warn_label;
	private: System::Windows::Forms::Label^ sdate_warn_label;
	private: System::Windows::Forms::Label^ rtime_warn_label;
	private: System::Windows::Forms::Label^ ename_warn_label;

	protected:

	protected:

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
			this->event_prop_group_box = (gcnew System::Windows::Forms::GroupBox());
			this->end_month_calendar = (gcnew System::Windows::Forms::MonthCalendar());
			this->start_month_calendar = (gcnew System::Windows::Forms::MonthCalendar());
			this->stime_dp_combo_box = (gcnew System::Windows::Forms::ComboBox());
			this->stime_min_combo_box = (gcnew System::Windows::Forms::ComboBox());
			this->stime_hrs_combo_box = (gcnew System::Windows::Forms::ComboBox());
			this->rtime_dp_combo_box = (gcnew System::Windows::Forms::ComboBox());
			this->rtime_min_combo_box = (gcnew System::Windows::Forms::ComboBox());
			this->rtime_hrs_combo_box = (gcnew System::Windows::Forms::ComboBox());
			this->place_warn_label = (gcnew System::Windows::Forms::Label());
			this->stime_warn_label = (gcnew System::Windows::Forms::Label());
			this->edate_warn_label = (gcnew System::Windows::Forms::Label());
			this->sdate_warn_label = (gcnew System::Windows::Forms::Label());
			this->rtime_warn_label = (gcnew System::Windows::Forms::Label());
			this->ename_warn_label = (gcnew System::Windows::Forms::Label());
			this->place_text_box = (gcnew System::Windows::Forms::TextBox());
			this->edate_text_box = (gcnew System::Windows::Forms::TextBox());
			this->sdate_text_box = (gcnew System::Windows::Forms::TextBox());
			this->ename_text_box = (gcnew System::Windows::Forms::TextBox());
			this->place_label = (gcnew System::Windows::Forms::Label());
			this->stime_label = (gcnew System::Windows::Forms::Label());
			this->edate_label = (gcnew System::Windows::Forms::Label());
			this->sdate_label = (gcnew System::Windows::Forms::Label());
			this->rtime_label = (gcnew System::Windows::Forms::Label());
			this->ename_label = (gcnew System::Windows::Forms::Label());
			this->save_button = (gcnew System::Windows::Forms::Button());
			this->cancel_button = (gcnew System::Windows::Forms::Button());
			this->add_event_picture_box = (gcnew System::Windows::Forms::PictureBox());
			this->event_prop_group_box->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->add_event_picture_box))->BeginInit();
			this->SuspendLayout();
			// 
			// event_prop_group_box
			// 
			this->event_prop_group_box->Controls->Add(this->end_month_calendar);
			this->event_prop_group_box->Controls->Add(this->start_month_calendar);
			this->event_prop_group_box->Controls->Add(this->stime_dp_combo_box);
			this->event_prop_group_box->Controls->Add(this->stime_min_combo_box);
			this->event_prop_group_box->Controls->Add(this->stime_hrs_combo_box);
			this->event_prop_group_box->Controls->Add(this->rtime_dp_combo_box);
			this->event_prop_group_box->Controls->Add(this->rtime_min_combo_box);
			this->event_prop_group_box->Controls->Add(this->rtime_hrs_combo_box);
			this->event_prop_group_box->Controls->Add(this->place_warn_label);
			this->event_prop_group_box->Controls->Add(this->stime_warn_label);
			this->event_prop_group_box->Controls->Add(this->edate_warn_label);
			this->event_prop_group_box->Controls->Add(this->sdate_warn_label);
			this->event_prop_group_box->Controls->Add(this->rtime_warn_label);
			this->event_prop_group_box->Controls->Add(this->ename_warn_label);
			this->event_prop_group_box->Controls->Add(this->place_text_box);
			this->event_prop_group_box->Controls->Add(this->edate_text_box);
			this->event_prop_group_box->Controls->Add(this->sdate_text_box);
			this->event_prop_group_box->Controls->Add(this->ename_text_box);
			this->event_prop_group_box->Controls->Add(this->place_label);
			this->event_prop_group_box->Controls->Add(this->stime_label);
			this->event_prop_group_box->Controls->Add(this->edate_label);
			this->event_prop_group_box->Controls->Add(this->sdate_label);
			this->event_prop_group_box->Controls->Add(this->rtime_label);
			this->event_prop_group_box->Controls->Add(this->ename_label);
			this->event_prop_group_box->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->event_prop_group_box->ForeColor = System::Drawing::Color::Aqua;
			this->event_prop_group_box->Location = System::Drawing::Point(12, 12);
			this->event_prop_group_box->Name = L"event_prop_group_box";
			this->event_prop_group_box->Size = System::Drawing::Size(410, 254);
			this->event_prop_group_box->TabIndex = 0;
			this->event_prop_group_box->TabStop = false;
			this->event_prop_group_box->Text = L"Properties";
			// 
			// end_month_calendar
			// 
			this->end_month_calendar->Location = System::Drawing::Point(145, 88);
			this->end_month_calendar->Name = L"end_month_calendar";
			this->end_month_calendar->ShowToday = false;
			this->end_month_calendar->ShowTodayCircle = false;
			this->end_month_calendar->TabIndex = 19;
			this->end_month_calendar->Visible = false;
			this->end_month_calendar->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &AddEventForm::end_month_calendar_DateSelected);
			// 
			// start_month_calendar
			// 
			this->start_month_calendar->Location = System::Drawing::Point(145, 88);
			this->start_month_calendar->Name = L"start_month_calendar";
			this->start_month_calendar->ShowToday = false;
			this->start_month_calendar->ShowTodayCircle = false;
			this->start_month_calendar->TabIndex = 18;
			this->start_month_calendar->Visible = false;
			this->start_month_calendar->DateSelected += gcnew System::Windows::Forms::DateRangeEventHandler(this, &AddEventForm::start_month_calendar_DateSelected);
			// 
			// stime_dp_combo_box
			// 
			this->stime_dp_combo_box->DropDownHeight = 90;
			this->stime_dp_combo_box->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->stime_dp_combo_box->FormattingEnabled = true;
			this->stime_dp_combo_box->IntegralHeight = false;
			this->stime_dp_combo_box->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"AM", L"PM" });
			this->stime_dp_combo_box->Location = System::Drawing::Point(236, 176);
			this->stime_dp_combo_box->Name = L"stime_dp_combo_box";
			this->stime_dp_combo_box->Size = System::Drawing::Size(40, 22);
			this->stime_dp_combo_box->TabIndex = 25;
			// 
			// stime_min_combo_box
			// 
			this->stime_min_combo_box->DropDownHeight = 90;
			this->stime_min_combo_box->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->stime_min_combo_box->FormattingEnabled = true;
			this->stime_min_combo_box->IntegralHeight = false;
			this->stime_min_combo_box->Items->AddRange(gcnew cli::array< System::Object^  >(60) {
				L"00", L"01", L"02", L"03", L"04", L"05",
					L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23",
					L"24", L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41",
					L"42", L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59"
			});
			this->stime_min_combo_box->Location = System::Drawing::Point(190, 176);
			this->stime_min_combo_box->Name = L"stime_min_combo_box";
			this->stime_min_combo_box->Size = System::Drawing::Size(38, 22);
			this->stime_min_combo_box->TabIndex = 24;
			// 
			// stime_hrs_combo_box
			// 
			this->stime_hrs_combo_box->DropDownHeight = 90;
			this->stime_hrs_combo_box->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->stime_hrs_combo_box->FormattingEnabled = true;
			this->stime_hrs_combo_box->IntegralHeight = false;
			this->stime_hrs_combo_box->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"01", L"02", L"03", L"04", L"05", L"06",
					L"07", L"08", L"09", L"10", L"11", L"12"
			});
			this->stime_hrs_combo_box->Location = System::Drawing::Point(145, 176);
			this->stime_hrs_combo_box->Name = L"stime_hrs_combo_box";
			this->stime_hrs_combo_box->Size = System::Drawing::Size(38, 22);
			this->stime_hrs_combo_box->TabIndex = 23;
			// 
			// rtime_dp_combo_box
			// 
			this->rtime_dp_combo_box->DropDownHeight = 90;
			this->rtime_dp_combo_box->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->rtime_dp_combo_box->FormattingEnabled = true;
			this->rtime_dp_combo_box->IntegralHeight = false;
			this->rtime_dp_combo_box->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"AM", L"PM" });
			this->rtime_dp_combo_box->Location = System::Drawing::Point(236, 66);
			this->rtime_dp_combo_box->Name = L"rtime_dp_combo_box";
			this->rtime_dp_combo_box->Size = System::Drawing::Size(40, 22);
			this->rtime_dp_combo_box->TabIndex = 9;
			// 
			// rtime_min_combo_box
			// 
			this->rtime_min_combo_box->DropDownHeight = 90;
			this->rtime_min_combo_box->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->rtime_min_combo_box->FormattingEnabled = true;
			this->rtime_min_combo_box->IntegralHeight = false;
			this->rtime_min_combo_box->Items->AddRange(gcnew cli::array< System::Object^  >(60) {
				L"00", L"01", L"02", L"03", L"04", L"05",
					L"06", L"07", L"08", L"09", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20", L"21", L"22", L"23",
					L"24", L"25", L"26", L"27", L"28", L"29", L"30", L"31", L"32", L"33", L"34", L"35", L"36", L"37", L"38", L"39", L"40", L"41",
					L"42", L"43", L"44", L"45", L"46", L"47", L"48", L"49", L"50", L"51", L"52", L"53", L"54", L"55", L"56", L"57", L"58", L"59"
			});
			this->rtime_min_combo_box->Location = System::Drawing::Point(190, 66);
			this->rtime_min_combo_box->Name = L"rtime_min_combo_box";
			this->rtime_min_combo_box->Size = System::Drawing::Size(38, 22);
			this->rtime_min_combo_box->TabIndex = 8;
			// 
			// rtime_hrs_combo_box
			// 
			this->rtime_hrs_combo_box->DropDownHeight = 90;
			this->rtime_hrs_combo_box->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->rtime_hrs_combo_box->FormattingEnabled = true;
			this->rtime_hrs_combo_box->IntegralHeight = false;
			this->rtime_hrs_combo_box->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"01", L"02", L"03", L"04", L"05", L"06",
					L"07", L"08", L"09", L"10", L"11", L"12"
			});
			this->rtime_hrs_combo_box->Location = System::Drawing::Point(145, 66);
			this->rtime_hrs_combo_box->Name = L"rtime_hrs_combo_box";
			this->rtime_hrs_combo_box->Size = System::Drawing::Size(38, 22);
			this->rtime_hrs_combo_box->TabIndex = 7;
			// 
			// place_warn_label
			// 
			this->place_warn_label->AutoSize = true;
			this->place_warn_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->place_warn_label->ForeColor = System::Drawing::Color::Red;
			this->place_warn_label->Location = System::Drawing::Point(280, 217);
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
			this->stime_warn_label->Location = System::Drawing::Point(280, 180);
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
			this->edate_warn_label->Location = System::Drawing::Point(280, 143);
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
			this->sdate_warn_label->Location = System::Drawing::Point(280, 106);
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
			this->rtime_warn_label->Location = System::Drawing::Point(280, 70);
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
			this->ename_warn_label->Location = System::Drawing::Point(280, 32);
			this->ename_warn_label->Name = L"ename_warn_label";
			this->ename_warn_label->Size = System::Drawing::Size(98, 14);
			this->ename_warn_label->TabIndex = 12;
			this->ename_warn_label->Text = L"Enter event name";
			this->ename_warn_label->Visible = false;
			// 
			// place_text_box
			// 
			this->place_text_box->Location = System::Drawing::Point(145, 213);
			this->place_text_box->Name = L"place_text_box";
			this->place_text_box->Size = System::Drawing::Size(131, 22);
			this->place_text_box->TabIndex = 13;
			// 
			// edate_text_box
			// 
			this->edate_text_box->Location = System::Drawing::Point(145, 139);
			this->edate_text_box->Name = L"edate_text_box";
			this->edate_text_box->Size = System::Drawing::Size(131, 22);
			this->edate_text_box->TabIndex = 11;
			this->edate_text_box->Click += gcnew System::EventHandler(this, &AddEventForm::edate_text_box_Click);
			// 
			// sdate_text_box
			// 
			this->sdate_text_box->Location = System::Drawing::Point(145, 102);
			this->sdate_text_box->Name = L"sdate_text_box";
			this->sdate_text_box->Size = System::Drawing::Size(131, 22);
			this->sdate_text_box->TabIndex = 10;
			this->sdate_text_box->Click += gcnew System::EventHandler(this, &AddEventForm::sdate_text_box_Click);
			// 
			// ename_text_box
			// 
			this->ename_text_box->Location = System::Drawing::Point(145, 28);
			this->ename_text_box->Name = L"ename_text_box";
			this->ename_text_box->Size = System::Drawing::Size(131, 22);
			this->ename_text_box->TabIndex = 6;
			// 
			// place_label
			// 
			this->place_label->AutoSize = true;
			this->place_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->place_label->Location = System::Drawing::Point(48, 217);
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
			this->stime_label->Location = System::Drawing::Point(48, 180);
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
			this->edate_label->Location = System::Drawing::Point(48, 143);
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
			this->sdate_label->Location = System::Drawing::Point(48, 106);
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
			this->rtime_label->Location = System::Drawing::Point(48, 69);
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
			this->ename_label->Location = System::Drawing::Point(48, 32);
			this->ename_label->Name = L"ename_label";
			this->ename_label->Size = System::Drawing::Size(70, 14);
			this->ename_label->TabIndex = 0;
			this->ename_label->Text = L"Event Name";
			// 
			// save_button
			// 
			this->save_button->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->save_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->save_button->FlatAppearance->BorderColor = System::Drawing::Color::Aqua;
			this->save_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkTurquoise;
			this->save_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSeaGreen;
			this->save_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->save_button->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save_button->ForeColor = System::Drawing::Color::Aqua;
			this->save_button->Location = System::Drawing::Point(278, 272);
			this->save_button->Name = L"save_button";
			this->save_button->Size = System::Drawing::Size(69, 30);
			this->save_button->TabIndex = 14;
			this->save_button->Text = L"Add";
			this->save_button->UseVisualStyleBackColor = true;
			this->save_button->Click += gcnew System::EventHandler(this, &AddEventForm::add_button_Click);
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
			this->cancel_button->TabIndex = 15;
			this->cancel_button->Text = L"Cancel";
			this->cancel_button->UseVisualStyleBackColor = true;
			this->cancel_button->Click += gcnew System::EventHandler(this, &AddEventForm::cancel_button_Click);
			// 
			// add_event_picture_box
			// 
			this->add_event_picture_box->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->add_event_picture_box->Dock = System::Windows::Forms::DockStyle::Fill;
			this->add_event_picture_box->Location = System::Drawing::Point(0, 0);
			this->add_event_picture_box->Name = L"add_event_picture_box";
			this->add_event_picture_box->Size = System::Drawing::Size(434, 311);
			this->add_event_picture_box->TabIndex = 16;
			this->add_event_picture_box->TabStop = false;
			// 
			// AddEventForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(434, 311);
			this->Controls->Add(this->event_prop_group_box);
			this->Controls->Add(this->cancel_button);
			this->Controls->Add(this->save_button);
			this->Controls->Add(this->add_event_picture_box);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"AddEventForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Add Event";
			this->Load += gcnew System::EventHandler(this, &AddEventForm::AddEventForm_Load);
			this->event_prop_group_box->ResumeLayout(false);
			this->event_prop_group_box->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->add_event_picture_box))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void AddEventForm_Load(System::Object^ sender, System::EventArgs^ e) {
		String^ folderPath = Application::StartupPath;
		folderPath += "\\resources\\main\\";
		String^ fileName = "temp.jpg";
		add_event_picture_box->Image = Image::FromFile(folderPath + fileName);
		save_button->Parent = add_event_picture_box;
		save_button->BackColor = Color::Transparent;
		cancel_button->Parent = add_event_picture_box;
		cancel_button->BackColor = Color::Transparent;
		event_prop_group_box->Parent = add_event_picture_box;
		event_prop_group_box->BackColor = Color::Transparent;
	}
	private: System::Void cancel_button_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void add_button_Click(System::Object^ sender, System::EventArgs^ e) {
		bool addFail = false;
		if (ename_text_box->Text == "") {
			ename_warn_label->Visible = true;
			addFail = true;
		}
		else {
			ename_warn_label->Visible = false;
		}
		if (rtime_hrs_combo_box->Text == "" || rtime_min_combo_box->Text == "" || rtime_dp_combo_box->Text == "") {
			rtime_warn_label->Visible = true;
			addFail = true;
		}
		else {
			rtime_warn_label->Visible = false;
		}
		if (sdate_text_box->Text == "") {
			sdate_warn_label->Visible = true;
			addFail = true;
		}
		else {
			sdate_warn_label->Visible = false;
		}
		if (edate_text_box->Text == "") {
			edate_warn_label->Visible = true;
			addFail = true;
		}
		else {
			edate_warn_label->Visible = false;
		}
		if (stime_hrs_combo_box->Text == "" || stime_min_combo_box->Text == "" || stime_dp_combo_box->Text == "") {
			stime_warn_label->Visible = true;
			addFail = true;
		}
		else {
			stime_warn_label->Visible = false;
		}
		if (place_text_box->Text == "") {
			place_warn_label->Visible = true;
			addFail = true;
		}
		else {
			place_warn_label->Visible = false;
		}
		if (!addFail) {
			string name = msclr::interop::marshal_as<std::string>(ename_text_box->Text);
			string place = msclr::interop::marshal_as<std::string>(place_text_box->Text);
			string start_date = msclr::interop::marshal_as<std::string>(sdate_text_box->Text);
			DateTime s_date = DateTime::ParseExact(sdate_text_box->Text, "dd-MMM-yy", nullptr);
			string end_date = msclr::interop::marshal_as<std::string>(edate_text_box->Text);
			DateTime e_date = DateTime::ParseExact(edate_text_box->Text, "dd-MMM-yy", nullptr);
			String^ start_time = stime_hrs_combo_box->Text + ":" + stime_min_combo_box->Text + " " + stime_dp_combo_box->Text;
			DateTime s_time = DateTime::ParseExact(start_time, "hh:mm tt", nullptr);
			String^ reminder_time = rtime_hrs_combo_box->Text + ":" + rtime_min_combo_box->Text + " " + rtime_dp_combo_box->Text;
			DateTime r_time = DateTime::ParseExact(reminder_time, "hh:mm tt", nullptr);
			newEvent = new class Events(name, place, s_date, e_date, s_time, r_time);
			this->Close();
		}
	}
	private: System::Void sdate_text_box_Click(System::Object^ sender, System::EventArgs^ e) {
		start_month_calendar->Visible = true;
	}
	private: System::Void start_month_calendar_DateSelected(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
		this->ActiveControl = start_month_calendar;
		start_month_calendar->Visible = false;
		DateTime dateTime = DateTime::Now;
		if (start_month_calendar->SelectionStart.ToOADate() < dateTime.ToOADate()) {
			MessageBox::Show("Invalid Date!");
		}
		else {
			sdate_text_box->Text = start_month_calendar->SelectionStart.ToShortDateString();
		}
	}
	private: System::Void edate_text_box_Click(System::Object^ sender, System::EventArgs^ e) {
		end_month_calendar->Visible = true;
	}
	private: System::Void end_month_calendar_DateSelected(System::Object^ sender, System::Windows::Forms::DateRangeEventArgs^ e) {
		this->ActiveControl = end_month_calendar;
		end_month_calendar->Visible = false;
		DateTime dateTime = DateTime::Now;
		if (end_month_calendar->SelectionStart.ToOADate() < dateTime.ToOADate()) {
			MessageBox::Show("Invalid Date!");
		}
		else {
			edate_text_box->Text = end_month_calendar->SelectionStart.ToShortDateString();
		}
	}
	};
}