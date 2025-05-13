#include <iostream>
#include "AttendanceDBAbstraction.h"
using namespace std;

int main()
{
    AttendanceDBAbstraction db("/Users/maddi/Downloads/Attendance.sqlite");
    /*db.insertCourse("Software Development and Design", "Spring", 2025, "T, Th", "12:30", "2:10", "Mark Mahoney");
    db.insertStudent("Matt", "Michel");
    db.insertAttendanceRecord("05/13/2025", "12:30", "Present", 1, 1);*/
    
    db.getAllAttendanceRecordsByCourseByDate(1, "05/13/2025");
    db.getMostFrequentlyAbsent(1);
    return 0;
    
}
