// write a program to read the content of a file and print it on the console.

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("sample.txt"); // Open file
    if (!file) { cout << "Error opening file!\n"; return 1; }

    cout << "File content:\n" << file.rdbuf(); // Read & print file content
    file.close();
}
