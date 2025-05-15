#pragma once
#include "DBAbstraction.h"
 
using namespace std;

class AttendanceDBAbstraction : DBAbstraction {
public:
    AttendanceDBAbstraction(string pathToFile);
    
    void insertStudent(string firstName, string lastName);
    void insertCourse(string name, string semester, int year, string meetingSchedule, string startTime, string endTime, string instructor);
    void insertAttendanceRecord(string meetingDate, string meetingTime, string attendanceStatus, int courseId, int studentId);
    void getAllAttendanceRecordsByCourseByDate(int courseId, string date);
    void getMostFrequentlyAbsent(int courseId); 
    void getStudentsAlphabetically(int courseId);
    
private:
    void createStudentsTable();
    void createCoursesTable();
    void createAttendanceRecordsTable();
};
