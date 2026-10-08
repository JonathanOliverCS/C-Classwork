#include <iostream>
using namespace std;

int main() {
    double numbers[10];
    double sumaverage = 0, sum = 0;

    cout << "Enter 10 numbers:";
    for (int i = 0; i < 10; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
        sumaverage += numbers[i];
        
    }

    double largest = numbers[0];
    double smallest = numbers[0];

    for (int i = 1; i < 10; i++) {
        if (numbers[i] > largest)
            largest = numbers[i];
        if (numbers[i] < smallest)
            smallest = numbers[i];
    }

    double average = sumaverage / 10;

    cout << "Largest Number: " << largest << endl;
    cout << "Smallest Number: " << smallest << endl;
    cout << "Average: " << average << endl;

    return 0;
}