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
        cout<<"3) View all students in a class"<<endl;
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


}

void addStudent() {

    string firstName;
    string lastName;

    cout<<"Enter in the student's first name: ";
    cin >> firstName;

    cout<<"Enter in the student's last name: ";
    cin >> lastName;
    
    //Add to database

}

void viewStudents() {


}

void takeAttendance() {


}
