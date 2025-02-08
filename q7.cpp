//write a program to accept and display the details of a student using class.

#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    string name;
    int age;
    string rollNumber;

    void getDetails() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); 
        cout << "Enter roll number: ";
        getline(cin, rollNumber);
    }

    void displayDetails() {
        cout << "Student Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
    Student student;
    student.getDetails();
    student.displayDetails();
    return 0;
}