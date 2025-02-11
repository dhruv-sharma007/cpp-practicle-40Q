// write a cpp program to demonstrate the usage of a constructor destructor in a class.
#include <iostream>
using namespace std;

// Class definition
class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor called!" << endl;
    }

    // Destructor
    ~Demo() {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    // Creating an object of class Demo
    Demo obj;

    // Program ends, object goes out of scope
    return 0;
}
