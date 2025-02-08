//Write a Program to add two numbers using class.

#include <iostream>

using namespace std;

class AddTwoNumbers {
public:
    int add(int num1, int num2) {
        return num1 + num2;
    }
};

int main() {
    AddTwoNumbers adder;
    int num1, num2, sum;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    sum = adder.add(num1, num2);

    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}