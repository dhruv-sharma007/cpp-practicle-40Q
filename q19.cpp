// write a cpp program to demonstrate parameter passing mechanism using pass by address method

#include <iostream>
using namespace std;

void modifyValue(int *num) {
    *num += 10; // Modifies the actual variable using pointer
    cout << "Inside function: " << *num << endl;
}

int main() {
    int x = 20;
    cout << "Before function call: " << x << endl;
    modifyValue(&x);
    cout << "After function call: " << x << endl;
    return 0;
}

