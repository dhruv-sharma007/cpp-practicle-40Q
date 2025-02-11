//Write a program to check whether a number is prime or not.

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    bool isPrime = num > 1;
    for (int i = 2; i <= num / 2 && isPrime; i++) {
        isPrime = num % i != 0;
    }

    cout << num << (isPrime ? " is a prime number." : " is not a prime number.") << endl;
    return 0;
}
