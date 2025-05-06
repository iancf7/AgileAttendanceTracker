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
void AttendanceDBAbstraction::insertStudent(int studentID, string first, string last) {
    
}
//--
void AttendanceDBAbstraction::insertCourse(int courseID, string name, string semester, int year, string meetingSchedule, string startTime, string endTime, string instructor) {
    
}
//--
void AttendanceDBAbstraction::insertAttendanceRecord(int attendanceID, string meetingDate, string meetingTime, string attendanceStatus) {
    
}
