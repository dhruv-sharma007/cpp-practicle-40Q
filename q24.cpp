// write a c++ program to create a file.

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ofstream file("example.txt");

    if (file.is_open()) {
        cout << "File created successfully!" << endl;

        file << "Hello, this is a sample file created using C++.\n";

        file.close();
        cout << "Data written and file closed successfully!" << endl;
    } else {
        cout << "Error creating file!" << endl;
    }

    return 0;
}
