#include <iostream>
#include <string>
using namespace std;

void addClass();
void addStudent();
void viewStudents();
void takeAttendance();

int main()
{

    //Comments are where queries need to be added 

    string selection = "1";
    
    while(selection != "5") {

        cout<<"======================================"<<endl;
        cout<<"= Welcome to the Attendance Tracker! ="<<endl;
        cout<<"======================================"<<endl;
        cout<<"Please enter an option:"<<endl;
        cout<<"1) Add a class"<<endl;
        cout<<"2) Add a student to a class"<<endl;
        cout<<"3) View the attendance for a class"<<endl;
        cout<<"4) Take attendance for a class"<<endl;
        cout<<"5) Quit"<<endl;
        cout<<"======================================"<<endl;

        cin >> selection;

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
    cin >> courseName;

    cout<<"Enter in the semester the course is offered (ex: Fall)"<<endl;
    cin >> semesterOffered;

    cout<<"Enter in the year the course is offered: (Just a number)"<<endl;
    cin >> yearOffered;
    stoi(yearOffered);

    cout<<"Enter in the meeting schedule: (ex: MWF, TTR)"<<endl;
    cin >> meetingSchedule;

    cout<<"Enter in the start time of the course: (format: XX:XX AM/PM)"<<endl;
    cin >> startTime;

    cout<<"Enter in the end time of the course: (format: XX:XX AM/PM)"<<endl;
    cin >> endTime;

    cout<<"Enter in the name of the course instructor: "<<endl;
    cin >> instructor;

    //Add to database

    cout<<"Class successfully added! ✓"<<endl;

    string answer;

    cout<<"Would you like to add another class? (y/n)"<<endl;
    cin >> answer;

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
    cin >> firstName;

    cout<<"Enter in the student's last name: "<<endl;
    cin >> lastName;

    //Add to database

    cout<<"Student successfully added! ✓"<<endl;

    string answer;

    cout<<"Would you like to add another class? (y/n)"<<endl;
    cin >> answer;

    if(answer == "y") {

        addStudent();
    }
}

void viewAttendance() {

    string courseID;
    string date;

    cout<<"======================================"<<endl;
    cout<<"=           View Attendance          ="<<endl;
    cout<<"======================================"<<endl;

    //Print out all courses and their ID's

    cout<<"Enter in the ID of the course you wish to view attendance records of: "<<endl;
    cin >> courseID;
    stoi(courseID);

    cout<<"Enter in the day that you want to view attendance for: (format: MM/DD/YYYY)"<<endl;
    cin >> date;

    //Query Database

    string answer;

    cout<<"Would you like to view another attendance record? (y/n)"<<endl;
    cin >> answer;

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
    cin >> courseID;
    stoi(courseID);

    //Print out all students and their ID's

    cout<<"Enter in the ID of the student you wish to view attendance for: "<<endl;
    cin >> studentID;
    stoi(studentID);

    string meetingDate;
    string meetingTime;
    string attendanceStatus;

    cout<<"Enter in the class date: (format: MM/DD/YYYY)"<<endl;
    cin >> meetingDate;

    cout<<"Enter in the class time: (format: XX:XX AM/PM)"<<endl;
    cin >> meetingTime;

    cout<<"Enter in the student's attendance status: "<<endl;
    cout<<"1) Present"<<endl;
    cout<<"2) Late"<<endl;
    cout<<"3) Absent: Excused"<<endl;
    cout<<"4) Absent: Unexcused"<<endl;
    cin >> attendanceStatus;
    stoi(attendanceStatus);

    //Add Attendance Record

    cout<<"Attendance successfully submitted ✓"<<endl;

    string answer;

    cout<<"Would you like to take attendance for another student? (y/n)"<<endl;
    cin >> answer;

    if(answer == "y") {

        takeAttendance();
    }
}


