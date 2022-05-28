#pragma once
#include <stdlib.h>
#include <iostream>

#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/prepared_statement.h>
using namespace std;
using namespace sql;

class dbConnection
{
	const string server = "tcp://127.0.0.1:3306";
	const string username = "root";
	const string password = "root"; //F25092002@f

	Driver* driver;
	Connection* con;

public:
	bool fail;
	dbConnection();
	void dbUpdate(string query);
	ResultSet* dbRetrieve(string query);
	~dbConnection();
};