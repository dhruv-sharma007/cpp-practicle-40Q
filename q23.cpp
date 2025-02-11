//write a program to demonstrate the usage of endl and setw() manipulators.
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << "Demonstrating the usage of endl and setw() manipulators:" << endl;

    cout << setw(10) << "Column1" << setw(10) << "Column2" << endl;
    cout << setw(10) << 123 << setw(10) << 456 << endl;
    cout << setw(10) << 789 << setw(10) << 101112 << endl;

    return 0;
}