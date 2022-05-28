#include "dbConnection.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

dbConnection::dbConnection() {
	try
	{
		fail = false;
		driver = get_driver_instance();
		con = driver->connect(server, username, password);
		con->setSchema("events'scheduler");
	}
	catch (SQLException e)
	{
		MessageBox::Show("Could not connect to server.Error message : " + gcnew String(e.what())); //will be removed
		fail = true;
	}
}

void dbConnection::dbUpdate(string query) {
	try {
		fail = false;
		PreparedStatement* pstmt;
		pstmt = con->prepareStatement(query);
		pstmt->executeQuery();
		delete pstmt;
	}
	catch (SQLException e) {
		fail = true;
		MessageBox::Show("SQL Exception: " + gcnew String(e.what())); //will be removed
	}
}

ResultSet* dbConnection::dbRetrieve(string query) {
	try {
		fail = false;
		ResultSet* result;
		PreparedStatement* pstmt;
		pstmt = con->prepareStatement(query);
		result = pstmt->executeQuery();
		return result;
		delete result;
		delete pstmt;
	}
	catch (SQLException e) {
		fail = true;
		MessageBox::Show("SQL Exception: " + gcnew String(e.what())); //will be removed
	}
}

dbConnection::~dbConnection() {
	delete con;
}