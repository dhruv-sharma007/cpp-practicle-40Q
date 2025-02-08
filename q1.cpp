//Write a program to reverse a number.

#include <iostream>

using namespace std;

int main() {
    int num, reversed_num = 0;
    cout << "Enter a number: ";
    cin >> num;

    while (num != 0) {
        int digit = num % 10;
        reversed_num = reversed_num * 10 + digit;
        num /= 10;
    }

    cout << "Reversed number: " << reversed_num << std::endl;
    return 0;
    
}
