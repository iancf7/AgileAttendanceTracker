#pragma once
#include "DBAbstraction.h"
 
using namespace std;

class AttendanceDBAbstraction : DBAbstraction {
public:
    AttendanceDBAbstraction(string pathToFile);
    
    void insertStudent(string first, string last);
    void insertCourse(string name, string semester, int year, string meetingSchedule, string startTime, string endTime, string instructor);
    void insertAttendanceRecord(string meetingDate, string meetingTime, string attendanceStatus);
    
private:
    void createStudentsTable();
    void createCoursesTable();
    void createAttendanceRecordsTable();
};
