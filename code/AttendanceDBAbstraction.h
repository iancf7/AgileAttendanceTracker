#pragma once
#include "DBAbstraction.h"
 
using namespace std;

class AttendanceDBAbstraction : DBAbstraction {
public:
    AttendanceDBAbstraction(string pathToFile);
    
    void insertStudent(int studentID, string first, string last);
    void insertCourse(int courseID, string name, string semester, int year, string meetingSchedule, string startTime, string endTime, string instructor);
    void insertAttendanceRecord(int attendanceID, string meetingDate, string meetingTime, string attendanceStatus);
    
private:
    void createStudentsTable();
    void createCoursesTable();
    void createAttendanceRecordsTable();
};
