//write a program to find the length of given string using string functions.

#include <iostream>
#include <string>  // Include string library
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    getline(cin, str);  // Read full string including spaces

    cout << "Length of the string: " << str.length() << endl;  // Using length() function

    return 0;
}
