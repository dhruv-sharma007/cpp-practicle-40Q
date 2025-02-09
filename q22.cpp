// write a c++ program to demonstrate the usage of friend function in a class.

#include <iostream>
using namespace std;

class Demo {
private:
    int num;

public:
    // Constructor to initialize num
    Demo(int n) : num(n) {}

    // Friend function declaration
    friend void showData(Demo obj);
};

// Friend function definition
void showData(Demo obj) {
    // Accessing private member of the class
    cout << "Value of num: " << obj.num << endl;
}

int main() {
    Demo obj(10);  // Creating an object with value 10
    showData(obj); // Calling the friend function

    return 0;
}
