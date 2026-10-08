#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int year, month, day ;

    cout << "Enter your birthday year: ";
    cin >> year;

    cout << "Enter the month: ";
    cin >> month;

    cout << "Enter the day: ";
    cin >> day;

    cout << "Your lucky number is: " << year / 100 + month / 10 + day / 10 << endl;

    return 0;
}