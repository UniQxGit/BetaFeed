/*
* Tan Tran
* CPSC 254-05
* 11/28/2017
* Project: BetaFeed
*
* commentTable.h
* This file defines a class that stores comment data in
* a database.
*/
#include <sqlite3.h>

class CommentTable {
	sqlite3 *db;
	char *sql;
public:
	CommentTable();
	~CommentTable();
	void saveToDB();
};
