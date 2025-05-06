#include <iostream>
#include <vector>
#include "AttendanceDBAbstraction.h"
 
using namespace std;

AttendanceDBAbstraction::AttendanceDBAbstraction(string pathToFile)
    : DBAbstraction(pathToFile)
{
    //create the attendance tables
    createStudentsTable();
    createClassesTable();
    createAttendanceRecordTable();
}
//--
void AttendanceDBAbstraction::createStudentsTable(){
    
}
//--
void AttendanceDBAbstraction::createClassesTable(){
    
}
//--
void AttendanceDBAbstraction::createAttendanceRecordTable(){
    
}
//--
