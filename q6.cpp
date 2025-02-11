//Write a cpp program to add two numbers using function.

#include <iostream>

using namespace std;

int add(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int num1, num2, sum;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    sum = add(num1, num2);

    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}