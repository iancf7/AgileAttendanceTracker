#include <iostream>
#include <string>
using namespace std;

void addClass();
void addStudent();
void viewStudents();
void takeAttendance();

int main()
{
    int selection = 1;
    
    while(selection != 5) {

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

        if(selection == 1) {
            addClass();
        }

        if(selection == 2) {
            addStudent();
        }

        if(selection == 3) {
            viewStudents();
        }

        if(selection == 4) {
            takeAttendance();
        }

    }

    return 0;

}

void addClass() {

    string courseName;
    string semesterOffered;
    int yearOffered;
    string meetingSchedule;
    string startTime;
    string endTime;
    string instructor;

    cout<<"Enter in the name of the course: "<<endl;
    cin >> courseName;

    cout<<"Enter in the semester the course is offered (ex: Fall)"<<endl;
    cin >> semesterOffered;

    cout<<"Enter in the year the course is offered: "<<endl;
    cin >> yearOffered;

    cout<<"Enter in the meeting schedule: (ex: MWF, TTR)"<<endl;
    cin >> meetingSchedule;

    cout<<"Enter in the start time of the course: (format: XX:XX AM/PM)"<<endl;
    cin >> startTime;

    cout<<"Enter in the end time of the course: (format: XX:XX AM/PM)"<<endl;
    cin >> endTime;

    cout<<"Enter in the name of the course instructor: "<<endl;
    cin >> endTime;

    //Add to database


}

void addStudent() {

    string firstName;
    string lastName;

    cout<<"Enter in the student's first name: "<<endl;
    cin >> firstName;

    cout<<"Enter in the student's last name: "<<endl;
    cin >> lastName;
    
    //Add to database

}

void viewStudents() {

    


}

void takeAttendance() {


}
