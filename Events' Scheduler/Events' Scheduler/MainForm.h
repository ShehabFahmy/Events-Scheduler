#pragma once
#include "LoginForm.h"
#include "Events.h"
#include "AddEventForm.h"
#include "UpdateEventForm.h"
#include <msclr/marshal_cppstd.h>

namespace EventsScheduler {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	/// 
	private ref class FlickerLessTable : public System::Windows::Forms::TableLayoutPanel
	{
	public: FlickerLessTable()
	{
		this->DoubleBuffered = true;
	}
	};
	private ref class FlickerLessPanel : public System::Windows::Forms::Panel
	{
	public: FlickerLessPanel()
	{
		this->DoubleBuffered = true;
	}
	};
	private ref class FlickerLessFlowPanel : public System::Windows::Forms::FlowLayoutPanel
	{
	public: FlickerLessFlowPanel()
	{
		this->DoubleBuffered = true;
	}
	};
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Label^ username_label;
	public:

	private: System::Windows::Forms::Label^ hello_label;

	private: System::Windows::Forms::Button^ logout_button;
	private: System::Windows::Forms::Timer^ sidebar_timer;
	private: System::Windows::Forms::Button^ home_button;
	private: System::Windows::Forms::Button^ done_events_button;
	private: System::Windows::Forms::Button^ my_events_button;

	public:


	public:

	public:

	public:
		static User* loggedInUser;
		bool mainFormClosed = false;

	public:




	private: System::Windows::Forms::Timer^ events_panel_timer;
	private: FlickerLessFlowPanel^ my_events_flow_panel;


	private: FlickerLessFlowPanel^ done_events_flow_panel;


	private: System::Windows::Forms::Timer^ my_events_panel_timer;
	private: System::Windows::Forms::Timer^ done_events_panel_timer;
	private: FlickerLessPanel^ buttons_panel;
	private: System::Windows::Forms::Button^ delete_button;
	private: System::Windows::Forms::Button^ update_button;
	private: System::Windows::Forms::Button^ add_event_button;
	private: System::Windows::Forms::MenuStrip^ sort_by_menu_strip;



	private: System::Windows::Forms::Button^ save_all_button;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ startDateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reminderTimeToolStripMenuItem;
	private: System::Windows::Forms::Button^ done_button;


	private: FlickerLessPanel^ events_panel;
	public:

	public:

	public:

	public:

	public:

	public:

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
			delete loggedInUser;
		}

	private: FlickerLessPanel^ main_panel;
	protected:
	private: System::Windows::Forms::PictureBox^ main_picture_box;

	private: System::Windows::Forms::PictureBox^ sidebar_picture_box;
	private: System::ComponentModel::IContainer^ components;



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
			this->main_panel = (gcnew FlickerLessPanel());
			this->events_panel = (gcnew FlickerLessPanel());
			this->done_events_flow_panel = (gcnew FlickerLessFlowPanel());
			this->my_events_flow_panel = (gcnew FlickerLessFlowPanel());
			this->buttons_panel = (gcnew FlickerLessPanel());
			this->done_button = (gcnew System::Windows::Forms::Button());
			this->sort_by_menu_strip = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->startDateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->reminderTimeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->save_all_button = (gcnew System::Windows::Forms::Button());
			this->delete_button = (gcnew System::Windows::Forms::Button());
			this->update_button = (gcnew System::Windows::Forms::Button());
			this->add_event_button = (gcnew System::Windows::Forms::Button());
			this->done_events_button = (gcnew System::Windows::Forms::Button());
			this->my_events_button = (gcnew System::Windows::Forms::Button());
			this->home_button = (gcnew System::Windows::Forms::Button());
			this->hello_label = (gcnew System::Windows::Forms::Label());
			this->username_label = (gcnew System::Windows::Forms::Label());
			this->logout_button = (gcnew System::Windows::Forms::Button());
			this->sidebar_picture_box = (gcnew System::Windows::Forms::PictureBox());
			this->main_picture_box = (gcnew System::Windows::Forms::PictureBox());
			this->sidebar_timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->events_panel_timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->my_events_panel_timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->done_events_panel_timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->main_panel->SuspendLayout();
			this->events_panel->SuspendLayout();
			this->buttons_panel->SuspendLayout();
			this->sort_by_menu_strip->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sidebar_picture_box))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_picture_box))->BeginInit();
			this->SuspendLayout();
			// 
			// main_panel
			// 
			this->main_panel->Controls->Add(this->events_panel);
			this->main_panel->Controls->Add(this->done_events_button);
			this->main_panel->Controls->Add(this->my_events_button);
			this->main_panel->Controls->Add(this->home_button);
			this->main_panel->Controls->Add(this->hello_label);
			this->main_panel->Controls->Add(this->username_label);
			this->main_panel->Controls->Add(this->logout_button);
			this->main_panel->Controls->Add(this->sidebar_picture_box);
			this->main_panel->Controls->Add(this->main_picture_box);
			this->main_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->main_panel->Location = System::Drawing::Point(0, 0);
			this->main_panel->Name = L"main_panel";
			this->main_panel->Size = System::Drawing::Size(1264, 681);
			this->main_panel->TabIndex = 0;
			// 
			// events_panel
			// 
			this->events_panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->events_panel->Controls->Add(this->done_events_flow_panel);
			this->events_panel->Controls->Add(this->my_events_flow_panel);
			this->events_panel->Controls->Add(this->buttons_panel);
			this->events_panel->Dock = System::Windows::Forms::DockStyle::Right;
			this->events_panel->Location = System::Drawing::Point(192, 0);
			this->events_panel->Name = L"events_panel";
			this->events_panel->Size = System::Drawing::Size(1072, 681);
			this->events_panel->TabIndex = 8;
			// 
			// done_events_flow_panel
			// 
			this->done_events_flow_panel->AutoScroll = true;
			this->done_events_flow_panel->Dock = System::Windows::Forms::DockStyle::Top;
			this->done_events_flow_panel->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->done_events_flow_panel->Location = System::Drawing::Point(0, 371);
			this->done_events_flow_panel->Name = L"done_events_flow_panel";
			this->done_events_flow_panel->Size = System::Drawing::Size(1072, 330);
			this->done_events_flow_panel->TabIndex = 1;
			this->done_events_flow_panel->WrapContents = false;
			// 
			// my_events_flow_panel
			// 
			this->my_events_flow_panel->AutoScroll = true;
			this->my_events_flow_panel->Dock = System::Windows::Forms::DockStyle::Top;
			this->my_events_flow_panel->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->my_events_flow_panel->Location = System::Drawing::Point(0, 27);
			this->my_events_flow_panel->Name = L"my_events_flow_panel";
			this->my_events_flow_panel->Size = System::Drawing::Size(1072, 344);
			this->my_events_flow_panel->TabIndex = 0;
			this->my_events_flow_panel->WrapContents = false;
			// 
			// buttons_panel
			// 
			this->buttons_panel->Controls->Add(this->done_button);
			this->buttons_panel->Controls->Add(this->sort_by_menu_strip);
			this->buttons_panel->Controls->Add(this->save_all_button);
			this->buttons_panel->Controls->Add(this->delete_button);
			this->buttons_panel->Controls->Add(this->update_button);
			this->buttons_panel->Controls->Add(this->add_event_button);
			this->buttons_panel->Dock = System::Windows::Forms::DockStyle::Top;
			this->buttons_panel->Location = System::Drawing::Point(0, 0);
			this->buttons_panel->Name = L"buttons_panel";
			this->buttons_panel->Size = System::Drawing::Size(1072, 27);
			this->buttons_panel->TabIndex = 9;
			// 
			// done_button
			// 
			this->done_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->done_button->Dock = System::Windows::Forms::DockStyle::Top;
			this->done_button->Enabled = false;
			this->done_button->FlatAppearance->BorderColor = System::Drawing::Color::Aqua;
			this->done_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkTurquoise;
			this->done_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSeaGreen;
			this->done_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->done_button->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->done_button->ForeColor = System::Drawing::Color::Aqua;
			this->done_button->Location = System::Drawing::Point(207, 0);
			this->done_button->Name = L"done_button";
			this->done_button->Size = System::Drawing::Size(734, 27);
			this->done_button->TabIndex = 15;
			this->done_button->Text = L"Done";
			this->done_button->UseVisualStyleBackColor = true;
			this->done_button->Click += gcnew System::EventHandler(this, &MainForm::done_button_Click);
			// 
			// sort_by_menu_strip
			// 
			this->sort_by_menu_strip->BackColor = System::Drawing::Color::Transparent;
			this->sort_by_menu_strip->Dock = System::Windows::Forms::DockStyle::Right;
			this->sort_by_menu_strip->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sort_by_menu_strip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMenuItem1 });
			this->sort_by_menu_strip->Location = System::Drawing::Point(941, 0);
			this->sort_by_menu_strip->Name = L"sort_by_menu_strip";
			this->sort_by_menu_strip->Size = System::Drawing::Size(62, 27);
			this->sort_by_menu_strip->TabIndex = 14;
			this->sort_by_menu_strip->Text = L"Sort by";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->startDateToolStripMenuItem,
					this->reminderTimeToolStripMenuItem
			});
			this->toolStripMenuItem1->ForeColor = System::Drawing::Color::Aqua;
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(49, 20);
			this->toolStripMenuItem1->Text = L"Sort by";
			// 
			// startDateToolStripMenuItem
			// 
			this->startDateToolStripMenuItem->ForeColor = System::Drawing::Color::Aqua;
			this->startDateToolStripMenuItem->Name = L"startDateToolStripMenuItem";
			this->startDateToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->startDateToolStripMenuItem->Text = L"Start Date";
			this->startDateToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::startDateToolStripMenuItem_Click);
			// 
			// reminderTimeToolStripMenuItem
			// 
			this->reminderTimeToolStripMenuItem->ForeColor = System::Drawing::Color::Aqua;
			this->reminderTimeToolStripMenuItem->Name = L"reminderTimeToolStripMenuItem";
			this->reminderTimeToolStripMenuItem->Size = System::Drawing::Size(155, 22);
			this->reminderTimeToolStripMenuItem->Text = L"Reminder Time";
			this->reminderTimeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::reminderTimeToolStripMenuItem_Click);
			// 
			// save_all_button
			// 
			this->save_all_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->save_all_button->Dock = System::Windows::Forms::DockStyle::Right;
			this->save_all_button->FlatAppearance->BorderColor = System::Drawing::Color::Aqua;
			this->save_all_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkTurquoise;
			this->save_all_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSeaGreen;
			this->save_all_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->save_all_button->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save_all_button->ForeColor = System::Drawing::Color::Aqua;
			this->save_all_button->Location = System::Drawing::Point(1003, 0);
			this->save_all_button->Name = L"save_all_button";
			this->save_all_button->Size = System::Drawing::Size(69, 27);
			this->save_all_button->TabIndex = 13;
			this->save_all_button->Text = L"Save All";
			this->save_all_button->UseVisualStyleBackColor = true;
			this->save_all_button->Click += gcnew System::EventHandler(this, &MainForm::save_all_button_Click);
			// 
			// delete_button
			// 
			this->delete_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->delete_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->delete_button->Enabled = false;
			this->delete_button->FlatAppearance->BorderColor = System::Drawing::Color::Aqua;
			this->delete_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkTurquoise;
			this->delete_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSeaGreen;
			this->delete_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->delete_button->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delete_button->ForeColor = System::Drawing::Color::Aqua;
			this->delete_button->Location = System::Drawing::Point(138, 0);
			this->delete_button->Name = L"delete_button";
			this->delete_button->Size = System::Drawing::Size(69, 27);
			this->delete_button->TabIndex = 12;
			this->delete_button->Text = L"Delete";
			this->delete_button->UseVisualStyleBackColor = true;
			this->delete_button->Click += gcnew System::EventHandler(this, &MainForm::delete_button_Click);
			// 
			// update_button
			// 
			this->update_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->update_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->update_button->Enabled = false;
			this->update_button->FlatAppearance->BorderColor = System::Drawing::Color::Aqua;
			this->update_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkTurquoise;
			this->update_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSeaGreen;
			this->update_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->update_button->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_button->ForeColor = System::Drawing::Color::Aqua;
			this->update_button->Location = System::Drawing::Point(69, 0);
			this->update_button->Name = L"update_button";
			this->update_button->Size = System::Drawing::Size(69, 27);
			this->update_button->TabIndex = 11;
			this->update_button->Text = L"Update";
			this->update_button->UseVisualStyleBackColor = true;
			this->update_button->Click += gcnew System::EventHandler(this, &MainForm::update_button_Click);
			// 
			// add_event_button
			// 
			this->add_event_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->add_event_button->Dock = System::Windows::Forms::DockStyle::Left;
			this->add_event_button->FlatAppearance->BorderColor = System::Drawing::Color::Aqua;
			this->add_event_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkTurquoise;
			this->add_event_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSeaGreen;
			this->add_event_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_event_button->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_event_button->ForeColor = System::Drawing::Color::Aqua;
			this->add_event_button->Location = System::Drawing::Point(0, 0);
			this->add_event_button->Name = L"add_event_button";
			this->add_event_button->Size = System::Drawing::Size(69, 27);
			this->add_event_button->TabIndex = 10;
			this->add_event_button->Text = L"Add Event";
			this->add_event_button->UseVisualStyleBackColor = true;
			this->add_event_button->Click += gcnew System::EventHandler(this, &MainForm::add_event_button_Click);
			// 
			// done_events_button
			// 
			this->done_events_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->done_events_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->done_events_button->FlatAppearance->BorderColor = System::Drawing::Color::Aqua;
			this->done_events_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::MediumTurquoise;
			this->done_events_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSeaGreen;
			this->done_events_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->done_events_button->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F));
			this->done_events_button->ForeColor = System::Drawing::Color::Aqua;
			this->done_events_button->Location = System::Drawing::Point(16, 199);
			this->done_events_button->Name = L"done_events_button";
			this->done_events_button->Size = System::Drawing::Size(160, 46);
			this->done_events_button->TabIndex = 7;
			this->done_events_button->Text = L"Done Events";
			this->done_events_button->UseVisualStyleBackColor = true;
			this->done_events_button->Click += gcnew System::EventHandler(this, &MainForm::done_events_button_Click);
			// 
			// my_events_button
			// 
			this->my_events_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->my_events_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->my_events_button->FlatAppearance->BorderColor = System::Drawing::Color::Aqua;
			this->my_events_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::MediumTurquoise;
			this->my_events_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSeaGreen;
			this->my_events_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->my_events_button->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F));
			this->my_events_button->ForeColor = System::Drawing::Color::Aqua;
			this->my_events_button->Location = System::Drawing::Point(16, 147);
			this->my_events_button->Name = L"my_events_button";
			this->my_events_button->Size = System::Drawing::Size(160, 46);
			this->my_events_button->TabIndex = 6;
			this->my_events_button->Text = L"My Events";
			this->my_events_button->UseVisualStyleBackColor = true;
			this->my_events_button->Click += gcnew System::EventHandler(this, &MainForm::my_events_button_Click);
			// 
			// home_button
			// 
			this->home_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->home_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->home_button->FlatAppearance->BorderColor = System::Drawing::Color::Aqua;
			this->home_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::MediumTurquoise;
			this->home_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightSeaGreen;
			this->home_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->home_button->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->home_button->ForeColor = System::Drawing::Color::Aqua;
			this->home_button->Location = System::Drawing::Point(16, 95);
			this->home_button->Name = L"home_button";
			this->home_button->Size = System::Drawing::Size(160, 46);
			this->home_button->TabIndex = 5;
			this->home_button->Text = L"Home";
			this->home_button->UseVisualStyleBackColor = true;
			this->home_button->Click += gcnew System::EventHandler(this, &MainForm::home_button_Click);
			// 
			// hello_label
			// 
			this->hello_label->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->hello_label->AutoSize = true;
			this->hello_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hello_label->ForeColor = System::Drawing::Color::Aqua;
			this->hello_label->Location = System::Drawing::Point(67, 23);
			this->hello_label->Name = L"hello_label";
			this->hello_label->Size = System::Drawing::Size(58, 22);
			this->hello_label->TabIndex = 1;
			this->hello_label->Text = L"Hello,";
			// 
			// username_label
			// 
			this->username_label->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->username_label->AutoSize = true;
			this->username_label->Font = (gcnew System::Drawing::Font(L"Gadugi", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->username_label->ForeColor = System::Drawing::Color::DarkTurquoise;
			this->username_label->Location = System::Drawing::Point(48, 45);
			this->username_label->Name = L"username_label";
			this->username_label->Size = System::Drawing::Size(97, 21);
			this->username_label->TabIndex = 2;
			this->username_label->Text = L"username";
			// 
			// logout_button
			// 
			this->logout_button->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->logout_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->logout_button->FlatAppearance->BorderColor = System::Drawing::Color::Aqua;
			this->logout_button->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkTurquoise;
			this->logout_button->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Red;
			this->logout_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->logout_button->Font = (gcnew System::Drawing::Font(L"Gadugi", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logout_button->ForeColor = System::Drawing::Color::Aqua;
			this->logout_button->Location = System::Drawing::Point(62, 619);
			this->logout_button->Name = L"logout_button";
			this->logout_button->Size = System::Drawing::Size(69, 30);
			this->logout_button->TabIndex = 4;
			this->logout_button->Text = L"Logout";
			this->logout_button->UseVisualStyleBackColor = true;
			this->logout_button->Click += gcnew System::EventHandler(this, &MainForm::logout_button_Click);
			// 
			// sidebar_picture_box
			// 
			this->sidebar_picture_box->Dock = System::Windows::Forms::DockStyle::Left;
			this->sidebar_picture_box->Location = System::Drawing::Point(0, 0);
			this->sidebar_picture_box->Name = L"sidebar_picture_box";
			this->sidebar_picture_box->Size = System::Drawing::Size(192, 681);
			this->sidebar_picture_box->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->sidebar_picture_box->TabIndex = 0;
			this->sidebar_picture_box->TabStop = false;
			this->sidebar_picture_box->MouseEnter += gcnew System::EventHandler(this, &MainForm::sidebar_picture_box_MouseEnter);
			this->sidebar_picture_box->MouseLeave += gcnew System::EventHandler(this, &MainForm::sidebar_picture_box_MouseLeave);
			this->sidebar_picture_box->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::sidebar_picture_box_MouseMove);
			// 
			// main_picture_box
			// 
			this->main_picture_box->Dock = System::Windows::Forms::DockStyle::Fill;
			this->main_picture_box->Location = System::Drawing::Point(0, 0);
			this->main_picture_box->Name = L"main_picture_box";
			this->main_picture_box->Size = System::Drawing::Size(1264, 681);
			this->main_picture_box->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->main_picture_box->TabIndex = 0;
			this->main_picture_box->TabStop = false;
			// 
			// sidebar_timer
			// 
			this->sidebar_timer->Interval = 5;
			this->sidebar_timer->Tick += gcnew System::EventHandler(this, &MainForm::sidebar_timer_Tick);
			// 
			// events_panel_timer
			// 
			this->events_panel_timer->Interval = 1;
			this->events_panel_timer->Tick += gcnew System::EventHandler(this, &MainForm::events_panel_timer_Tick);
			// 
			// my_events_panel_timer
			// 
			this->my_events_panel_timer->Interval = 1;
			this->my_events_panel_timer->Tick += gcnew System::EventHandler(this, &MainForm::my_events_panel_timer_Tick);
			// 
			// done_events_panel_timer
			// 
			this->done_events_panel_timer->Interval = 1;
			this->done_events_panel_timer->Tick += gcnew System::EventHandler(this, &MainForm::done_events_panel_timer_Tick);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->main_panel);
			this->MainMenuStrip = this->sort_by_menu_strip;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Events\' Scheduler";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->Resize += gcnew System::EventHandler(this, &MainForm::MainForm_Resize);
			this->main_panel->ResumeLayout(false);
			this->main_panel->PerformLayout();
			this->events_panel->ResumeLayout(false);
			this->buttons_panel->ResumeLayout(false);
			this->buttons_panel->PerformLayout();
			this->sort_by_menu_strip->ResumeLayout(false);
			this->sort_by_menu_strip->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->sidebar_picture_box))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_picture_box))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		void logout_button_pressed();
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {

		loggedInUser->loadData();
		username_label->Text = gcnew String(loggedInUser->getUsername().c_str());

		String^ folderPath = Application::StartupPath;
		folderPath += "\\resources\\main\\";
		String^ fileName = "3.jpg";
		//String^ pathString = System::IO::Path::Combine(folderPath, fileName);
		main_picture_box->Image = Image::FromFile(folderPath + fileName);

		fileName = "sidebar.png";
		sidebar_picture_box->Image = Image::FromFile(folderPath + fileName);

		fileName = "test1.png";
		events_panel->BackgroundImage = Image::FromFile(folderPath + fileName);

		sidebar_picture_box->Parent = main_picture_box;
		sidebar_picture_box->BackColor = Color::Transparent;
		hello_label->Parent = sidebar_picture_box;
		hello_label->BackColor = Color::Transparent;
		username_label->Parent = sidebar_picture_box;
		username_label->BackColor = Color::Transparent;
		logout_button->Parent = sidebar_picture_box;
		logout_button->BackColor = Color::Transparent;
		events_panel->Parent = main_picture_box; 
		events_panel->BackColor = Color::Transparent;

		sidebar_picture_box->Size = System::Drawing::Size(0.05 * main_picture_box->Width, main_picture_box->Height);
		sidebar_picture_box->MaximumSize = System::Drawing::Size(0.15 * main_picture_box->Width, main_picture_box->Height);
		sidebar_picture_box->MinimumSize = System::Drawing::Size(0.05 * main_picture_box->Width, main_picture_box->Height);
		events_panel->Size = System::Drawing::Size(main_picture_box->Width - sidebar_picture_box->Width, main_picture_box->Height);
		events_panel->MaximumSize = main_picture_box->Size - sidebar_picture_box->MinimumSize;
		events_panel->MinimumSize = System::Drawing::Size(0, main_picture_box->Height);
		my_events_flow_panel->MaximumSize.Height = main_picture_box->Height;
		my_events_flow_panel->MinimumSize.Height = 0;
		done_events_flow_panel->MaximumSize.Height = main_picture_box->Height;
		done_events_flow_panel->MinimumSize.Height = 0;

		hello_label->Visible = false;
		username_label->Visible = false;
		logout_button->Visible = false;

		home_button->Width = sidebar_picture_box->Width * 0.03;
		my_events_button->Width = home_button->Width;
		done_events_button->Width = home_button->Width;
		home_button->Parent = sidebar_picture_box;
		home_button->BackColor = Color::Transparent;
		my_events_button->Parent = sidebar_picture_box;
		my_events_button->BackColor = Color::Transparent;
		done_events_button->Parent = sidebar_picture_box;
		done_events_button->BackColor = Color::Transparent;

		hello_label->Left = (sidebar_picture_box->Width - hello_label->Width) / 2 - 4;      // Align centers
		username_label->Left = (sidebar_picture_box->Width - username_label->Width) / 2 - 4;
		logout_button->Left = (sidebar_picture_box->Width - logout_button->Width) / 2 - 4;
		home_button->Left = (sidebar_picture_box->Width - home_button->Width) / 2 - 4;
		my_events_button->Left = home_button->Left;
		done_events_button->Left = home_button->Left;

		events_panel->Size = System::Drawing::Size(0, main_picture_box->Height);
		my_events_flow_panel->Height = 0;
		done_events_flow_panel->Height = 0;

		sort_by_menu_strip->Parent = buttons_panel;
		sort_by_menu_strip->BackColor = Color::Transparent;
		startDateToolStripMenuItem->Checked = true;
	}
	private: System::Void MainForm_Resize(System::Object^ sender, System::EventArgs^ e) {
		sidebar_picture_box->Size = System::Drawing::Size(0.05 * main_picture_box->Width, main_picture_box->Height);
		sidebar_picture_box->MaximumSize = System::Drawing::Size(0.15 * main_picture_box->Width, main_picture_box->Height);
		sidebar_picture_box->MinimumSize = System::Drawing::Size(0.05 * main_picture_box->Width, main_picture_box->Height);
		//events_panel->Size = System::Drawing::Size(main_picture_box->Width - sidebar_picture_box->Width, main_picture_box->Height);
		events_panel->MaximumSize = main_picture_box->Size - sidebar_picture_box->MinimumSize;
		events_panel->MinimumSize = System::Drawing::Size(0, main_picture_box->Height);

		home_button->Width = sidebar_picture_box->Width * 0.03;
		my_events_button->Width = home_button->Width;
		done_events_button->Width = home_button->Width;

		hello_label->Left = (sidebar_picture_box->Width - hello_label->Width) / 2 - 4;      // Align centers
		username_label->Left = (sidebar_picture_box->Width - username_label->Width) / 2 - 4;
		logout_button->Left = (sidebar_picture_box->Width - logout_button->Width) / 2 - 4;
		home_button->Left = (sidebar_picture_box->Width - home_button->Width) / 2 - 4;
		my_events_button->Left = home_button->Left;
		done_events_button->Left = home_button->Left;

		sidebar_close();

	}
	private:
		bool sidebar_enter = false;
		bool events_panel_enter = false;
		bool logout_pressed = false;
		bool my_events_panel_enter = false;
		bool done_events_panel_enter = false;
		int mouseX, mouseY;
		void sidebar_open();
		void sidebar_close();
		void events_panel_open();
		void events_panel_close();
		void my_events_panel_open();
		void done_events_panel_open();
		void my_events_panel_close();
		void done_events_panel_close();
		void create_table(int panelNum, class Events event);
		void load_my_events_flow_panel();
		void load_done_events_flow_panel();
	private: System::Void sidebar_timer_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (sidebar_enter) {
			if (sidebar_picture_box->Width < sidebar_picture_box->MaximumSize.Width) {
				sidebar_picture_box->Width += 30;
				if (events_panel_enter && sidebar_picture_box->Width != sidebar_picture_box->MaximumSize.Width) {
					events_panel->Width -= 30;
				}
			}
			else {
				sidebar_timer->Enabled = false;
			}
		}
		else {
			if (sidebar_picture_box->Width > sidebar_picture_box->MinimumSize.Width) {
				sidebar_picture_box->Width -= 30;
				if (events_panel_enter) {
					events_panel->Width += 30;
				}
			}
			else {
				sidebar_timer->Enabled = false;
			}
		}
	}
	private: System::Void events_panel_timer_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (events_panel_enter) {
			if (events_panel->Width < main_picture_box->Width - sidebar_picture_box->Width) {
				events_panel->Width += 35;
			}
			else {
				events_panel_timer->Enabled = false;
			}
		}
		else {
			if (events_panel->Width > 0) {
				events_panel->Width -= 35;
			}
			else {
				events_panel_timer->Enabled = false;
			}
		}
	}
	private: System::Void my_events_panel_timer_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (done_events_flow_panel->Height == 0) {
			if (my_events_panel_enter) {
				if (my_events_flow_panel->Height < main_picture_box->Height) {
					my_events_flow_panel->Height += 35;
				}
				else {
					my_events_panel_timer->Enabled = false;
				}
			}
			else {
				if (my_events_flow_panel->Height > 0) {
					my_events_flow_panel->Height -= 35;
				}
				else {
					my_events_panel_timer->Enabled = false;
				}
			}
		}
	}
	private: System::Void done_events_panel_timer_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (my_events_flow_panel->Height == 0) {
			if (done_events_panel_enter) {
				if (done_events_flow_panel->Height < main_picture_box->Height) {
					done_events_flow_panel->Height += 35;
				}
				else {
					done_events_panel_timer->Enabled = false;
				}
			}
			else {
				if (done_events_flow_panel->Height > 0) {
					done_events_flow_panel->Height -= 35;
				}
				else {
					done_events_panel_timer->Enabled = false;
				}
			}
		}
	}
	private: System::Void sidebar_picture_box_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		mouseX = e->X;
		mouseY = e->Y;
	}
	private: System::Void sidebar_picture_box_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		sidebar_open();
	}
	private: System::Void sidebar_picture_box_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		if (mouseX > (home_button->Location.X + home_button->Width) || mouseX < home_button->Location.X ||
			mouseY >(logout_button->Location.Y + logout_button->Height) || mouseY < username_label->Location.Y) {
			sidebar_close();
		}
	}
	private: System::Void MainForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (!logout_pressed) {
			System::Windows::Forms::DialogResult dialog = MessageBox::Show("Are you sure you want to exit?", "Exit", MessageBoxButtons::YesNo);
			if (dialog == System::Windows::Forms::DialogResult::Yes) {
				logout_button_pressed();
				mainFormClosed = true;
				this->~MainForm();
			}
			else {
				e->Cancel = true;
			}
		}
	}
	private: System::Void logout_button_Click(System::Object^ sender, System::EventArgs^ e) {
		logout_pressed = true;
		logout_button_pressed();
		this->Close();
	}
	private: System::Void home_button_Click(System::Object^ sender, System::EventArgs^ e) {
		events_panel_close();
	}
	private: System::Void my_events_button_Click(System::Object^ sender, System::EventArgs^ e) {
		events_panel_open();
		done_events_panel_close();
		add_event_button->Visible = true;
		update_button->Visible = true;
		delete_button->Visible = true;
		done_button->Visible = true;
		sort_by_menu_strip->Visible = true;
		my_events_panel_open();
		my_events_flow_panel->Controls->Clear();
		load_my_events_flow_panel();
	}
	private: System::Void done_events_button_Click(System::Object^ sender, System::EventArgs^ e) {
		events_panel_open();
		my_events_panel_close();
		add_event_button->Visible = false;
		update_button->Visible = false;
		delete_button->Visible = false;
		done_button->Visible = false;
		sort_by_menu_strip->Visible = false;
		done_events_panel_open();
		done_events_flow_panel->Controls->Clear();
		load_done_events_flow_panel();
	}

		   int tableIndex = 0;
		   static Object^ activeTable;
	private: System::Void table_leave(System::Object^ sender, System::EventArgs^ e) {
		((TableLayoutPanel^)sender)->ForeColor = Color::Aqua;
		if (this->ActiveControl == activeTable) { // if it's a table
			update_button->Enabled = true;
			delete_button->Enabled = true;
			done_button->Enabled = true;
		}
		else if (this->ActiveControl == update_button || this->ActiveControl == delete_button ||
			this->ActiveControl == done_button) { // last active was a table
			this->ActiveControl = (TableLayoutPanel^)activeTable;
		}
		else {
			update_button->Enabled = false;
			delete_button->Enabled = false;
			done_button->Enabled = false;
		}
	}
	private: System::Void table_Click(System::Object^ sender, System::EventArgs^ e) {
		this->ActiveControl = (TableLayoutPanel^)sender;
		activeTable = (TableLayoutPanel^)sender;
		((TableLayoutPanel^)sender)->ForeColor = Color::White;
		update_button->Enabled = true;
		delete_button->Enabled = true;
		done_button->Enabled = true;
	}
	
	public: static class Events eventFromActiveTable() {
		class Events event;
		string name;
		string place;
		string start_date;
		string end_date;
		string start_time;
		string reminder_time;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 2; j++) {
				Control^ c = ((TableLayoutPanel^)activeTable)->GetControlFromPosition(j, i); // col, row
				//MessageBox::Show(c->Text);
				//MessageBox::Show(Point(i,j).ToString());
				if (i == 0) {
					if (j == 0) {
						name = msclr::interop::marshal_as<std::string>(c->Text);
					}
					else {
						reminder_time = msclr::interop::marshal_as<std::string>(c->Text);
						reminder_time = reminder_time.erase(0, 16);
					}
				}
				else if (i == 1) {
					if (j == 0) {
						start_date = msclr::interop::marshal_as<std::string>(c->Text);
						start_date = start_date.erase(0, 13);
					}
					else {
						end_date = msclr::interop::marshal_as<std::string>(c->Text);
						end_date = end_date.erase(0, 11);
					}
				}
				else {
					if (j == 0) {
						start_time = msclr::interop::marshal_as<std::string>(c->Text);
						start_time = start_time.erase(0, 13);
					}
					else {
						place = msclr::interop::marshal_as<std::string>(c->Text);
						place = place.erase(0, 8);
					}
				}
			}
		}
		DateTime s_date = DateTime::ParseExact(gcnew String(start_date.c_str()), "dd-MMM-yy", nullptr);
		DateTime e_date = DateTime::ParseExact(gcnew String(end_date.c_str()), "dd-MMM-yy", nullptr);
		String^ format;
		if (start_time.size() == 8) {
			format = "hh:mm tt";
		}
		else {
			format = "h:mm tt";
		}
		DateTime s_time = DateTime::ParseExact(gcnew String(start_time.c_str()), format, nullptr);
		if (reminder_time.size() == 8) {
			format = "hh:mm tt";
		}
		else {
			format = "h:mm tt";
		}
		DateTime r_time = DateTime::ParseExact(gcnew String(reminder_time.c_str()), format, nullptr);
		event = class Events(name, place, s_date, e_date, s_time, r_time);
		return event;
	}
	private: System::Void add_event_button_Click(System::Object^ sender, System::EventArgs^ e) {
		AddEventForm^ addEventForm = gcnew EventsScheduler::AddEventForm;
		addEventForm->ShowDialog();
		//class Events addedEvent = *addEventForm->newEvent;
		if (addEventForm->newEvent) {
			//MessageBox::Show("Event Added");
			loggedInUser->addEvent(*addEventForm->newEvent);
			if (loggedInUser->addEventFailed) {
				MessageBox::Show("Event already exists");
			}
			else {
				my_events_flow_panel->Controls->Clear();
				load_my_events_flow_panel();
			}
		}
	}
	private: System::Void delete_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->ActiveControl == activeTable) {
			my_events_flow_panel->Controls->RemoveAt(my_events_flow_panel->Controls->
				GetChildIndex((TableLayoutPanel^)activeTable));
			loggedInUser->deleteEvent(eventFromActiveTable());
		}
	}
	private: System::Void save_all_button_Click(System::Object^ sender, System::EventArgs^ e) {
		loggedInUser->saveData();
	}
	private: System::Void done_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->ActiveControl == activeTable) {
			create_table(1, eventFromActiveTable()); // Add to done_events_flow_panel
			loggedInUser->doneEvents.push_back(eventFromActiveTable()); // Add to Stack
			//MessageBox::Show("done events count: " + done_events_flow_panel->Controls->Count);
			my_events_flow_panel->Controls->RemoveAt(my_events_flow_panel->Controls->
				GetChildIndex((TableLayoutPanel^)activeTable)); // Remove from my_events_flow_panel
			loggedInUser->deleteEvent(eventFromActiveTable()); // Remove from Set
		}
	}
	private: System::Void update_button_Click(System::Object^ sender, System::EventArgs^ e) {
		UpdateEventForm^ updateEventForm = gcnew EventsScheduler::UpdateEventForm(eventFromActiveTable());
		updateEventForm->ShowDialog();
		if (updateEventForm->oldEvent && updateEventForm->newEvent) {
			loggedInUser->updateEvent(*updateEventForm->oldEvent, *updateEventForm->newEvent);
			my_events_panel_close();
			my_events_flow_panel->Controls->Clear();
			load_my_events_flow_panel();
			my_events_panel_open();
		}
	}
		   bool sortedByDate = true;
		   bool sortedByTime = false;
	private: System::Void startDateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		sortedByTime = false;
		sortedByDate = true;
		reminderTimeToolStripMenuItem->Checked = false;
		startDateToolStripMenuItem->Checked = true;
		this->my_events_flow_panel->Controls->Clear();
		load_my_events_flow_panel();
	}
	private: System::Void reminderTimeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		sortedByDate = false;
		sortedByTime = true;
		startDateToolStripMenuItem->Checked = false;
		reminderTimeToolStripMenuItem->Checked = true;
		this->my_events_flow_panel->Controls->Clear();
		load_my_events_flow_panel();
	}
};
}