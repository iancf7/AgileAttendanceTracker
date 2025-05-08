#pragma once
#include "DBAbstraction.h"
 
using namespace std;

class AttendanceDBAbstraction : DBAbstraction {
public:
    AttendanceDBAbstraction(string pathToFile);
    
    void insertStudent(string firstName, string lastName);
    void insertCourse(string name, string semester, int year, string meetingSchedule, string startTime, string endTime, string instructor);
    void insertAttendanceRecord(string meetingDate, string meetingTime, string attendanceStatus);
    void getAllAttendanceRecordsByClass();
    void getAllAttendanceRecordsByStudent();
    
private:
    void createStudentsTable();
    void createCoursesTable();
    void createAttendanceRecordsTable();
};
