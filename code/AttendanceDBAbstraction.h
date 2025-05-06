#pragma once
#include "DBAbstraction.h"
 
using namespace std;

class AttendanceDBAbstraction : DBAbstraction {
public:
    AttendanceDBAbstraction(string pathToFile);
    
private:
    void createStudentsTable();
    void createClassesTable();
    void createStudentsInClassTable();
    void createAttendanceTable();
};
