#include "MainForm.h"
#include "Events.h"

using namespace EventsScheduler;

void MainForm::logout_button_pressed() {
	loggedInUser->saveData();
}

void MainForm::sidebar_open() {
	//sidebar_picture_box->Size = System::Drawing::Size(0.15 * this->Width, this->Height);
	sidebar_enter = true;
	sidebar_timer->Enabled = true;

	hello_label->Visible = true;
	username_label->Visible = true;
	logout_button->Visible = true;
	home_button->Visible = true;
	my_events_button->Visible = true;
	done_events_button->Visible = true;
}

void MainForm::sidebar_close() {
	//sidebar_picture_box->Size = System::Drawing::Size(0.05 * this->Width, this->Height);
	sidebar_enter = false;
	sidebar_timer->Enabled = true;

	hello_label->Visible = false;
	username_label->Visible = false;
	logout_button->Visible = false;
	home_button->Visible = false;
	my_events_button->Visible = false;
	done_events_button->Visible = false;
}

void MainForm::events_panel_open() {
	events_panel_enter = true;
	events_panel_timer->Enabled = true;
}

void MainForm::events_panel_close() {
	events_panel_enter = false;
	events_panel_timer->Enabled = true;
}

void MainForm::my_events_panel_open() {
	my_events_panel_enter = true;
	my_events_panel_timer->Enabled = true;
	//my_events_flow_panel->Height = main_picture_box->Height;
}

void MainForm::my_events_panel_close() {
	my_events_panel_enter = false;
	my_events_panel_timer->Enabled = true;
	//my_events_flow_panel->Height = 0;
}

void MainForm::done_events_panel_open() {
	done_events_panel_enter = true;
	done_events_panel_timer->Enabled = true;
	//done_events_flow_panel->Height = main_picture_box->Height;
}

void MainForm::done_events_panel_close() {
	done_events_panel_enter = false;
	done_events_panel_timer->Enabled = true;
	//done_events_flow_panel->Height = 0;
}

void MainForm::create_table(int panelNum, class Events event) {
	DateTime tempDate;
	FlickerLessTable^ tableLayoutPanel1;
	System::Windows::Forms::Label^ ename_label;
	System::Windows::Forms::Label^ rtime_label;
	System::Windows::Forms::Label^ sdate_label;
	System::Windows::Forms::Label^ edate_label;
	System::Windows::Forms::Label^ stime_label;
	System::Windows::Forms::Label^ place_label;

	tableLayoutPanel1 = (gcnew FlickerLessTable());
	ename_label = (gcnew System::Windows::Forms::Label());
	place_label = (gcnew System::Windows::Forms::Label());
	stime_label = (gcnew System::Windows::Forms::Label());
	rtime_label = (gcnew System::Windows::Forms::Label());
	sdate_label = (gcnew System::Windows::Forms::Label());
	edate_label = (gcnew System::Windows::Forms::Label());

	//
	// tableLayoutPanel1
	// 
	tableLayoutPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Single;
	tableLayoutPanel1->ColumnCount = 2;
	tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
		50)));
	tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
		50)));
	tableLayoutPanel1->Controls->Add(ename_label, 0, 0);
	tableLayoutPanel1->Controls->Add(place_label, 1, 2);
	tableLayoutPanel1->Controls->Add(stime_label, 0, 2);
	tableLayoutPanel1->Controls->Add(rtime_label, 1, 0);
	tableLayoutPanel1->Controls->Add(sdate_label, 0, 1);
	tableLayoutPanel1->Controls->Add(edate_label, 1, 1);
	tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Left;
	tableLayoutPanel1->Location = System::Drawing::Point(3, 3);
	tableLayoutPanel1->Name = L"tableLayoutPanel1";
	tableLayoutPanel1->RowCount = 3;
	tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
	tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
	tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 33.33333F)));
	tableLayoutPanel1->Size = System::Drawing::Size(events_panel->MaximumSize.Width-8, 76);
	tableLayoutPanel1->TabIndex = tableIndex;
	// 
	// ename_label
	// 
	ename_label->AutoSize = true;
	ename_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
		System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
	ename_label->Location = System::Drawing::Point(4, 1);
	ename_label->Name = L"ename_label";
	ename_label->Size = System::Drawing::Size(47, 16);
	ename_label->TabIndex = 1;
	ename_label->Text = L"" + gcnew String(event.name.c_str());
	// 
	// place_label
	// 
	place_label->AutoSize = true;
	place_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	place_label->Location = System::Drawing::Point(536, 49);
	place_label->Name = L"place_label";
	place_label->Size = System::Drawing::Size(44, 16);
	place_label->TabIndex = 5;
	place_label->Text = L"Place : " + gcnew String(event.place.c_str());
	// 
	// stime_label
	// 
	stime_label->AutoSize = true;
	stime_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	stime_label->Location = System::Drawing::Point(4, 49);
	stime_label->Name = L"stime_label";
	stime_label->Size = System::Drawing::Size(70, 16);
	stime_label->TabIndex = 6;
	stime_label->Text = L"Start Time : " + tempDate.FromOADate(event.start_time).ToShortTimeString();
	// 
	// rtime_label
	// 
	rtime_label->AutoSize = true;
	rtime_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	rtime_label->Location = System::Drawing::Point(536, 1);
	rtime_label->Name = L"rtime_label";
	rtime_label->Size = System::Drawing::Size(103, 16);
	rtime_label->TabIndex = 2;
	rtime_label->Text = L"Reminder Time : " + tempDate.FromOADate(event.reminder_time).ToShortTimeString();
	// 
	// sdate_label
	// 
	sdate_label->AutoSize = true;
	sdate_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	sdate_label->Location = System::Drawing::Point(4, 25);
	sdate_label->Name = L"sdate_label";
	sdate_label->Size = System::Drawing::Size(67, 16);
	sdate_label->TabIndex = 4;
	sdate_label->Text = L"Start Date : " + tempDate.FromOADate(event.start_date).ToShortDateString();
	// 
	// edate_label
	// 
	edate_label->AutoSize = true;
	edate_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(0)));
	edate_label->Location = System::Drawing::Point(536, 25);
	edate_label->Name = L"edate_label";
	edate_label->Size = System::Drawing::Size(63, 16);
	edate_label->TabIndex = 3;
	edate_label->Text = L"End Date : " + tempDate.FromOADate(event.end_date).ToShortDateString();

	ename_label->Parent = tableLayoutPanel1;
	ename_label->BackColor = Color::Transparent;
	rtime_label->Parent = tableLayoutPanel1;
	rtime_label->BackColor = Color::Transparent;
	sdate_label->Parent = tableLayoutPanel1;
	sdate_label->BackColor = Color::Transparent;
	edate_label->Parent = tableLayoutPanel1;
	edate_label->BackColor = Color::Transparent;
	stime_label->Parent = tableLayoutPanel1;
	stime_label->BackColor = Color::Transparent;
	place_label->Parent = tableLayoutPanel1;
	place_label->BackColor = Color::Transparent;

	//tableLayoutPanel1->BackgroundImage = Image::FromFile(Application::StartupPath + "\\resources\\main\\table1.png");
	tableLayoutPanel1->ForeColor = System::Drawing::Color::Aqua;
	if (panelNum == 0) {
		tableLayoutPanel1->Click += gcnew System::EventHandler(this, &MainForm::table_Click);
		tableLayoutPanel1->Leave += gcnew System::EventHandler(this, &MainForm::table_leave);
		this->my_events_flow_panel->Controls->Add(tableLayoutPanel1);
	}
	else {
		this->done_events_flow_panel->Controls->Add(tableLayoutPanel1);
	}
	tableIndex++;
}

void MainForm::load_my_events_flow_panel() {
	if (sortedByDate) {
		map<double, class Events>::iterator it;
		for (it = loggedInUser->userEventsByDate.begin(); it != loggedInUser->userEventsByDate.end(); it++) {
			create_table(0, it->second);
		}
	}
	else if (sortedByTime) {
		map<double, class Events>::iterator it;
		for (it = loggedInUser->userEventsByTime.begin(); it != loggedInUser->userEventsByTime.end(); it++) {
			create_table(0, it->second);
		}
	}
}

void MainForm::load_done_events_flow_panel() {
	for (int i = loggedInUser->doneEvents.size()-1; i >= 0; i--) {
		create_table(1, loggedInUser->doneEvents[i]);
	}
}