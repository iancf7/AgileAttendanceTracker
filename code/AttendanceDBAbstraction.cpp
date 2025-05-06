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
    createStudentsInClassTable();
    createAttendanceTable();
}
//--
void AttendanceDBAbstraction::createStudentsTable(){
    
}
//--
void AttendanceDBAbstraction::createClassesTable(){
    
}
//--
void AttendanceDBAbstraction::createStudentsInClassTable(){
    
}
//--
void AttendanceDBAbstraction::createAttendanceTable(){
    
}
//--
