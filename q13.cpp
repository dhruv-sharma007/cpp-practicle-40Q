//write a cpp program to search for an element using binary search.

#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) return mid;
        (arr[mid] < key) ? left = mid + 1 : right = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int res = binarySearch(arr, 0, 4, 10);
    cout << (res != -1 ? "Element at index " + to_string(res) : "Not found") << endl;
}
