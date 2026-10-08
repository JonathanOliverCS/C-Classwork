#include <iostream>
using namespace std;

// Function to check if array is sorted (increasing or decreasing)
bool isSorted(int arr[], int size) {
    bool increasing = true;
    bool decreasing = true;

    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[i - 1])
            increasing = false;
        if (arr[i] > arr[i - 1])
            decreasing = false;
    }

    return increasing || decreasing;
}

int main() {

    // Array 1: size 10, increasing order
    int array1[10] = {1, 2, 3, 4, 5, 5, 6, 7, 8, 9};

    // Array 2: size 8, decreasing order
    int array2[8] = {20, 18, 18, 15, 10, 5, 2, 0};

    // Array 3: size 10, not sorted
    int array3[10] = {3, 5, 2, 8, 7, 10, 9, 12, 11, 14};

    // Array 4: size 5, all same values
    int array4[5] = {7, 7, 7, 7, 7};

    // Test the arrays
    cout << "Array 1 sorted? " << (isSorted(array1, 10) ? "YES" : "NO") << endl;
    cout << "Array 2 sorted? " << (isSorted(array2, 8) ? "YES" : "NO") << endl;
    cout << "Array 3 sorted? " << (isSorted(array3, 10) ? "YES" : "NO") << endl;
    cout << "Array 4 sorted? " << (isSorted(array4, 5) ? "YES" : "NO") << endl;

    return 0;
}
