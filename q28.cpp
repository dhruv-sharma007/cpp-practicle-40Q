//write a program to demonstrate dynamic memory allocation.

#include <iostream>
using namespace std;

int main() {
    int *ptr = new int; // Allocate memory for an integer

    cout << "Enter a number: ";
    cin >> *ptr;

    cout << "You entered: " << *ptr << endl;

    delete ptr; // Free allocated memory
    return 0;
}
