/*
* Tan Tran
* CPSC 254-05
* 11/28/2017
* Project: BetaFeed
*
* userTable.cpp
* This file defines functions for the userTable class.
*/
#include "userTable.h"

// Create table for user data upon creating class instance
userTable::userTable() {
	sqlite3_open("userData.db", &db);
	sql = "CREATE TABLE User ("
		"USER_ID INT PRIMARY KEY NOT NULL,"
		"USERNAME TEXT NOT NULL)"
		";";
	sqlite3_exec(db, sql, NULL, 0, NULL);
}

// Close database upon deleting class instance
userTable::~userTable() {
	sqlite3_close(db);
}

// Save extracted data to database
void userTable::saveToDB() {
	
}