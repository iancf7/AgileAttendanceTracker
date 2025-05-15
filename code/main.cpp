#include <iostream>
#include <string>
#include "AttendanceDBAbstraction.h"
using namespace std;

void addClass();
void addStudent();
void viewAttendance();
void takeAttendance();
void viewStudents();
AttendanceDBAbstraction db("/Users/maddi/Downloads/Attendance.sqlite");

int main()
{
    string selection = "1";
    
    while(selection != "6") {

        cout<<"======================================"<<endl;
        cout<<"= Welcome to the Attendance Tracker! ="<<endl;
        cout<<"======================================"<<endl;
        cout<<"Please enter an option:"<<endl;
        cout<<"1) Add a class"<<endl;
        cout<<"2) Add a student"<<endl;
        cout<<"3) View the attendance for a class"<<endl;
        cout<<"4) Take attendance for a class"<<endl;
        cout<<"5) View students in a class"<<endl;
        cout<<"6) Quit"<<endl;
        cout<<"======================================"<<endl;

        getline(cin, selection);

        if(selection == "1") {
            addClass();
        }

        if(selection == "2") {
            addStudent();
        }

        if(selection == "3") {
            viewAttendance();
        }

        if(selection == "4") {
            takeAttendance();
        }
        
        if(selection == "5") {
            viewStudents();
        }

        if(selection >= "a" && selection <= "Z") {
            selection = "1";
        }

    }
    return 0;

}

void addClass() {

    string courseName;
    string semesterOffered;
    string yearOffered;
    string meetingSchedule;
    string startTime;
    string endTime;
    string instructor;

    cout<<"======================================"<<endl;
    cout<<"=             New Class              ="<<endl;
    cout<<"======================================"<<endl;

    cout<<"Enter in the name of the course: "<<endl;
    getline(cin, courseName);

    cout<<"Enter in the semester the course is offered (ex: Fall)"<<endl;
    getline(cin, semesterOffered);

    cout<<"Enter in the year the course is offered: (Just a number)"<<endl;
    getline(cin, yearOffered);

    cout<<"Enter in the meeting schedule: (ex: MWF, TTR)"<<endl;
    getline(cin, meetingSchedule);

    cout<<"Enter in the start time of the course: (format: HH:MM:AM/PM)"<<endl;
    getline(cin, startTime);

    cout<<"Enter in the end time of the course: (format: HH:MM:AM/PM)"<<endl;
    getline(cin, endTime);

    cout<<"Enter in the name of the course instructor: "<<endl;
    getline(cin, instructor);

    //Add to database
    db.insertCourse(courseName, semesterOffered, stoi(yearOffered), meetingSchedule, startTime, endTime, instructor);

    cout<<"Class successfully added! ✓"<<endl;

    string answer;

    cout<<"Would you like to add another class? (y/n)"<<endl;
    getline(cin, answer);

    if(answer == "y") {

        addClass();
    }
}

void addStudent() {

    string firstName;
    string lastName;

    cout<<"======================================"<<endl;
    cout<<"=            New Student             ="<<endl;
    cout<<"======================================"<<endl;

    cout<<"Enter in the student's first name: "<<endl;
    getline(cin, firstName);

    cout<<"Enter in the student's last name: "<<endl;
    getline(cin, lastName);

    //Add to database
    db.insertStudent(firstName, lastName);

    cout<<"Student successfully added! ✓"<<endl;

    string answer;

    cout<<"Would you like to add another class? (y/n)"<<endl;
    getline(cin, answer);

    if(answer == "y") {

        addStudent();
    }
}

void viewAttendance() {

    string courseID;
    string date;
    string selection = "1";

    cout<<"======================================"<<endl;
    cout<<"=           View Attendance          ="<<endl;
    cout<<"======================================"<<endl;
    cout<<"Please enter an option:"<<endl;
    cout<<"1. View attendance by date"<<endl;
    cout<<"2. View attendance by most frequently absent students"<<endl;
    
    getline(cin, selection);
    while(selection != "1" && selection != "2") {
        cout<<"Invalid selection, please enter an option:"<<endl;
        cout<<"1. View attendance by date"<<endl;
        cout<<"2. View attendance by most frequently absent students"<<endl;
        
        getline(cin, selection);
    }
    
    if(selection == "1") {
        //Print out all courses and their ID's
        
        cout<<"Enter in the ID of the course you wish to view attendance records of: "<<endl;
        getline(cin, courseID);
        
        cout<<"Enter in the day that you want to view attendance for: (format: MM/DD/YYYY)"<<endl;
        getline(cin, date);
        
        //Query Database
        db.getAllAttendanceRecordsByCourseByDate(stoi(courseID), date);
    }
    else if(selection == "2") {
        cout<<"Enter in the ID of the course you wish to view attendance records of: "<<endl;
        getline(cin, courseID);
        
        //Query Database
        db.getMostFrequentlyAbsent(stoi(courseID));
    }

    string answer;

    cout<<"Would you like to view another attendance record? (y/n)"<<endl;
    getline(cin, answer);

    if(answer == "y") {

        viewAttendance();
    }
}

void takeAttendance() {

    string courseID;
    string studentID;

    cout<<"======================================"<<endl;
    cout<<"=          Take Attendance           ="<<endl;
    cout<<"======================================"<<endl;

    //Print out all courses and their ID's

    cout<<"Enter in the ID of the course you wish to take attendance for: "<<endl;
    getline(cin, courseID);

    cout<<"Enter in the ID of the student you wish to view attendance for: "<<endl;
    getline(cin, studentID);

    string meetingDate;
    string meetingTime;
    string attendanceStatus;

    cout<<"Enter in the class date: (format: MM/DD/YYYY)"<<endl;
    getline(cin, meetingDate);

    cout<<"Enter in the class time: (format: HH:MM:AM/PM)"<<endl;
    getline(cin, meetingTime);

    cout<<"Enter in the student's attendance status: "<<endl;
    cout<<"1) Present"<<endl;
    cout<<"2) Late"<<endl;
    cout<<"3) Absent: Excused"<<endl;
    cout<<"4) Absent: Unexcused"<<endl;
    getline(cin, attendanceStatus);

    //Add Attendance Record
    db.insertAttendanceRecord(meetingDate, meetingTime, attendanceStatus, stoi(courseID), stoi(studentID));

    cout<<"Attendance successfully submitted ✓"<<endl;

    string answer;

    cout<<"Would you like to take attendance for another student? (y/n)"<<endl;
    getline(cin, answer);

    if(answer == "y") {

        takeAttendance();
    }
}

void viewStudents()
{
    string courseID;
    
    cout<<"======================================"<<endl;
    cout<<"=          View Students             ="<<endl;
    cout<<"======================================"<<endl;
    
    cout<<"Enter in the ID of the course you wish to view the students of: "<<endl;
    getline(cin, courseID);
    
    db.getStudentsAlphabetically(stoi(courseID));

    string answer;

    cout<<"Would you like to view another course? (y/n)"<<endl;
    getline(cin, answer);

    if(answer == "y") {

        viewStudents();
    }
}
