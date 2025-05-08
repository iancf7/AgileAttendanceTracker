#include <iostream>
#include <vector>
#include "AttendanceDBAbstraction.h"
 
using namespace std;

AttendanceDBAbstraction::AttendanceDBAbstraction(string pathToFile)
    : DBAbstraction(pathToFile)
{
    //create the attendance tables
    createStudentsTable();
    createCoursesTable();
    createAttendanceRecordsTable();
}
//--
void AttendanceDBAbstraction::createStudentsTable() {
    string sql = "CREATE TABLE IF NOT EXISTS Students (id INTEGER PRIMARY KEY NOT NULL, firstName TEXT, lastName TEXT);";
     
    //execute the query to create the table
    if (!executeQueryNoResultsBack(sql))
    {
        cout << "Error creating Items table" << endl;
    }
}
//--
void AttendanceDBAbstraction::createCoursesTable() {
    string sql = "CREATE TABLE IF NOT EXISTS Courses (id INTEGER PRIMARY KEY NOT NULL, name TEXT, semester TEXT, year INTEGER, meetingSchedule TEXT, startTime TEXT, endTime TEXT, instructor TEXT);";
     
    //execute the query to create the table
    if (!executeQueryNoResultsBack(sql))
    {
        cout << "Error creating Items table" << endl;
    }
}
//--
void AttendanceDBAbstraction::createAttendanceRecordsTable() {
    string sql = "CREATE TABLE IF NOT EXISTS AttendanceRecords (id INTEGER PRIMARY KEY NOT NULL, meetingDate TEXT, meetingTime TEXT, attendanceStatus TEXT);";
     
    //execute the query to create the table
    if (!executeQueryNoResultsBack(sql))
    {
        cout << "Error creating Items table" << endl;
    }
}
//--
void AttendanceDBAbstraction::insertStudent(string firstName, string lastName) {
    //query to insert a user
    string sql = "INSERT INTO Students (firstName, lastName) VALUES (?, ?);";
 
    //create a statement pointer
    sqlite3_stmt* myStatement;
 
    //create the statement object using the prepare()
    int statusOfPrep = sqlite3_prepare_v2(db, sql.c_str(), -1, &myStatement, NULL);
 
    //check to see if the prepared statement was created
    if (statusOfPrep == SQLITE_OK)
    {
        //add parameters
        sqlite3_bind_text(myStatement, 1, firstName.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(myStatement, 2, lastName.c_str(), -1, SQLITE_STATIC);
 
        //execute the query to insert a new user
        if (!executeQueryNoResultsBack(myStatement))
        {
            cout << "Error inserting into AuctionSiteUsers" << endl;
        }
    }
}
//--
void AttendanceDBAbstraction::insertCourse(string name, string semester, int year, string meetingSchedule, string startTime, string endTime, string instructor) {
    //query to insert a user
    string sql = "INSERT INTO Courses (name, semester, year, meetingSchedule, startTime, endTime, instructor) VALUES (?, ?, ?, ?, ?, ?, ?);";
 
    //create a statement pointer
    sqlite3_stmt* myStatement;
 
    //create the statement object using the prepare()
    int statusOfPrep = sqlite3_prepare_v2(db, sql.c_str(), -1, &myStatement, NULL);
 
    //check to see if the prepared statement was created
    if (statusOfPrep == SQLITE_OK)
    {
        //add parameters
        sqlite3_bind_text(myStatement, 1, name.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(myStatement, 2, semester.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_int(myStatement, 3, year);
        sqlite3_bind_text(myStatement, 4, meetingSchedule.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(myStatement, 5, startTime.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(myStatement, 6, endTime.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(myStatement, 7, instructor.c_str(), -1, SQLITE_STATIC);
 
        //execute the query to insert a new user
        if (!executeQueryNoResultsBack(myStatement))
        {
            cout << "Error inserting into AuctionSiteUsers" << endl;
        }
    }
}
//--
void AttendanceDBAbstraction::insertAttendanceRecord(string meetingDate, string meetingTime, string attendanceStatus) {
    //query to insert a user
    string sql = "INSERT INTO AttendanceRecords (meetingDate, meetingTime, attendanceStatus) VALUES (?, ?, ?);";
 
    //create a statement pointer
    sqlite3_stmt* myStatement;
 
    //create the statement object using the prepare()
    int statusOfPrep = sqlite3_prepare_v2(db, sql.c_str(), -1, &myStatement, NULL);
 
    //check to see if the prepared statement was created
    if (statusOfPrep == SQLITE_OK)
    {
        //add parameters
        sqlite3_bind_text(myStatement, 1, meetingDate.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(myStatement, 2, meetingTime.c_str(), -1, SQLITE_STATIC);
        sqlite3_bind_text(myStatement, 3, attendanceStatus.c_str(), -1, SQLITE_STATIC);
 
        //execute the query to insert a new user
        if (!executeQueryNoResultsBack(myStatement))
        {
            cout << "Error inserting into AuctionSiteUsers" << endl;
        }
    }
}
