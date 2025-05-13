#include <iostream>
#include <string>
using namespace std;

void addClass();
void addStudent();
void viewStudents();
void takeAttendance();

int main()
{
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
            viewStudents();
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

    cout<<"Enter in the meeting schedule: (ex: MWF, TTR)"<<endl;
    cin >> meetingSchedule;

    cout<<"Enter in the start time of the course: (format: XX:XX AM/PM)"<<endl;
    cin >> startTime;

    cout<<"Enter in the end time of the course: (format: XX:XX AM/PM)"<<endl;
    cin >> endTime;

    cout<<"Enter in the name of the course instructor: "<<endl;
    cin >> instructor;

    //Add to database

    cout<<"Class successfully added! ✓";


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

    cout<<"Student successfully added! ✓";

}

void viewStudents() {

    cout<<"======================================"<<endl;
    cout<<"=           View Students            ="<<endl;
    cout<<"======================================"<<endl;


}

void takeAttendance() {

    cout<<"======================================"<<endl;
    cout<<"=          Take Attendance           ="<<endl;
    cout<<"======================================"<<endl;

}
