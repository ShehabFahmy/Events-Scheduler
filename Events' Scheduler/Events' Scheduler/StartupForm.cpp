#include "StartupForm.h"
#include "MainForm.h" //will be removed

using namespace EventsScheduler;
using namespace System;
using namespace System::Windows::Forms;

//array<String^>^ args

String^ StartupForm::startupPath() {
	String^ startupPath = Application::StartupPath;
	return startupPath;
}

void StartupForm::onStartupFrame(int imageNumber) {
	String^ folderPath = startupPath();
	folderPath += "\\resources\\startup\\";
	String^ fileName = imageNumber.ToString() + ".jpg";
	String^ pathString = System::IO::Path::Combine(folderPath, fileName);
	//Image^ image = Image::FromFile(pathString);
	startup_picture_box->Image = Image::FromFile(pathString);
	/*if (imageNumber == 1) {
		fileName = "login_background.jpg";
		pathString = System::IO::Path::Combine(folderPath, fileName);
		startup_panel->BackgroundImage = Image::FromFile(pathString);g
	}*/
}

void main() {
	//time_t now = time(0);
	//tm* ltm = localtime(&now);
	////cout << 1900 + ltm->tm_year << endl;
	//MessageBox::Show((1900 + ltm->tm_year).ToString());
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew EventsScheduler::/*StartupForm*//*MainForm*/LoginForm/*AddEventForm*/);
}