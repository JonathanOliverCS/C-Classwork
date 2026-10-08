#include<iostream>
#include"../headerFile/utility.h"

using namespace std;

int calculateprice(int hour, int minutes) {
    const int rate = 150;

    int totalminute = hour * 60 + minutes;
    int totalquarter = 150 * totalminute / 15;
    return rate + totalquarter;
}

int main() {

    int hour, minutes;
    cout << "Enter your hours and minutes" << endl;
    cin >> hour >> minutes;

    int a = calculateprice(hour, minutes);

   
}