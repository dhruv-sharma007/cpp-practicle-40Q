// write a cpp program to check whether a given number is even or odd.
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    cout << num << " is " << (num % 2 == 0 ? "Even" : "Odd") << endl;
    return 0;
}
