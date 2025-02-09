//write a cpp program to add two numbers using pointers.
#include <iostream>

int main() {
    int num1, num2, sum;
    int *ptr1, *ptr2;

    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    ptr1 = &num1;
    ptr2 = &num2;

    sum = *ptr1 + *ptr2;

    std::cout << "Sum = " << sum << std::endl;

    return 0;
}
