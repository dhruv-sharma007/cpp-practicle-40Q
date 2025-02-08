//write a program to accept and display the details of an employee using class.
#include <iostream>
#include <string>

using namespace std;

class Employee {
public:
    string name;
    int age;
    string employeeID;

    void getDetails() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore();
        cout << "Enter employee ID: ";
        getline(cin, employeeID);
    }

    void displayDetails() {
        cout << "Employee Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Employee ID: " << employeeID << endl;
    }
};

int main() {
    Employee employee;
    employee.getDetails();
    employee.displayDetails();
    return 0;
}