//write a program to find the sum of natural numbers.
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "Sum of natural numbers up to " << n << " is " << sum << endl;
    return 0;
}
