// write a cpp program to demonstrate the usage of inline function

#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Square of " << num << " is " << square(num) << endl;
    return 0;
}
