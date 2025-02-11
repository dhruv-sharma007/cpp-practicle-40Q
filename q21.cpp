//write a program to demonstrate simple inheritance.
#include <iostream>
using namespace std;

class Base {
public:
    void display() {
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class show function" << endl;
    }
};

int main() {
    Derived obj;
    obj.display(); // Calling base class function
    obj.show();    // Calling derived class function
    return 0;
}