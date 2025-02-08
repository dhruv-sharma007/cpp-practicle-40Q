 //write a program to compare two strings using string functions.
#include <iostream>
#include <string>

using namespace std;

int main() {
    string str1, str2;

    cout << "Enter the first string: ";
    getline(cin, str1);

    cout << "Enter the second string: ";
    getline(cin, str2);

    int result = str1.compare(str2); 

    if (result == 0)
        cout << str1 << " and " << str2 << " are equal." << endl;
    else if (result > 0)
        cout << str1 << " is greater than " << str2 << endl;
    else
        cout << str1 << " is less than " << str2 << endl;

    return 0;
}
