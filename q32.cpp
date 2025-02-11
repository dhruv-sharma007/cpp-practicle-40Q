//write a c++ program to display the sizes of of various data types in c++.
#include <iostream>
using namespace std;
int main() {
    cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << std::endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;
    cout << "Size of wchar_t: " << sizeof(wchar_t) << " bytes" << std::endl;
    cout << "Size of bool: " << sizeof(bool) << " bytes" << std::endl;

    return 0;
}