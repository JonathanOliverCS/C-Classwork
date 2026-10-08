#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double hour, rate, pay;

    cout << "Enter your hourly rate: ";
    cin >> rate;

    cout << "Enter your hours worked: ";
    cin >> hour;

    if (hour >= 40)
    {
        pay = 40 * rate + ( hour - 40 ) * 1.5;
    }
    else
    {
        pay = rate * hour;
    }
 
    cout << "Payment; " << pay << endl;

    return 0;
}