//write a program to calculate the area of rectangle, square using function overloading.
#include <iostream>

using namespace std;

// Function to calculate area of rectangle
int area(int l, int b) {
    return l * b;
}

// Function to calculate area of square
int area(int s) {
    return s * s;
}

int main() {
    int l, b, s;
    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;
    cout << "Area of rectangle: " << area(l, b) << endl;

    cout << "Enter side of square: ";
    cin >> s;
    cout << "Area of square: " << area(s) << endl;

    return 0;
}
