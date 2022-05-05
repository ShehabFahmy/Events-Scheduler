#include "LoginForm.h"
#include "User.h"
#include "MainForm.h"

using namespace EventsScheduler;

void LoginForm::login_enterkey_pressed() {
	String^ userRaw = username_text_box->Text;
	String^ passRaw = password_text_box->Text;

	string user = msclr::interop::marshal_as<std::string>(userRaw);
	string pass = msclr::interop::marshal_as<std::string>(passRaw);

	User* usr = new User(user, pass);
	usr->login();
	if (usr->loggedIn) { // if query succeeded
		MessageBox::Show("Successful login!");
		username_text_box->Clear();
		password_text_box->Clear();
		this->Hide();
		MainForm^ mainForm = gcnew EventsScheduler::MainForm;
		mainForm->loggedInUser = usr; // global variable to be used in the main form
		mainForm->ShowDialog();
		if (!mainForm->mainFormClosed) {
			this->ActiveControl = username_text_box;
			this->Show();
		}
		else {
			this->Close();
		}
	}
	else {
		MessageBox::Show("Invalid username or password!");
	}
	delete usr;
}

void LoginForm::signup_enterkey_pressed() {
	String^ userRaw = register_username_text_box->Text;
	String^ passRaw = register_password_text_box->Text;
	String^ conPassRaw = confirm_password_text_box->Text;

	string user = msclr::interop::marshal_as<std::string>(userRaw);
	string pass = msclr::interop::marshal_as<std::string>(passRaw);
	string conPass = msclr::interop::marshal_as<std::string>(conPassRaw);

	if (pass != conPass) {
		MessageBox::Show("Passwords don't match!");
	}
	else {
		User* usr = new User(user, pass);
		usr->signup();
		if (usr->signedUp) { // if query succeeded
			MessageBox::Show("Successful Registeration!");
			login_panel->BringToFront();
		}
		delete usr;
	}
}