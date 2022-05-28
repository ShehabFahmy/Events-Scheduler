#include "StartupForm.h"
#include "MainForm.h" //will be removed

using namespace EventsScheduler;
using namespace System;
using namespace System::Windows::Forms;

//array<String^>^ args

void StartupForm::onStartupFrame(int imageNumber) {
	String^ folderPath = Application::StartupPath;
	folderPath += "\\resources\\startup\\";
	String^ fileName = imageNumber.ToString() + ".jpg";
	startup_picture_box->Image = Image::FromFile(folderPath + fileName);
	/*if (imageNumber == 1) {
		fileName = "login_background.jpg";
		pathString = System::IO::Path::Combine(folderPath, fileName);
		startup_panel->BackgroundImage = Image::FromFile(pathString);
	}*/
}

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew EventsScheduler::StartupForm/*MainForm*//*LoginForm*//*AddEventForm*/);
}