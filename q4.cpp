// Write a program to demonstrate the usage of scope resolution operator (::).


#include <iostream>

namespace MyNameSpace {
    int x = 10;
}

int main() {
    std::cout << MyNameSpace::x << std::endl;
    return 0;
}
