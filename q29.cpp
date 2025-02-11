//write a program using switch case to add, subtract, muliply and divide two numbers.
#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+': cout << "Sum: " << (num1 + num2) << endl; break;
        case '-': cout << "Difference: " << (num1 - num2) << endl; break;
        case '*': cout << "Product: " << (num1 * num2) << endl; break;
        case '/': 
            if (num2 != 0) 
                cout << "Quotient: " << (num1 / num2) << endl; 
            else 
                cout << "Error: Division by zero!" << endl;
            break;
        default: cout << "Invalid operator!" << endl;
    }

    return 0;
}
