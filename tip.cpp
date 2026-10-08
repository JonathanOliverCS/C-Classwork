#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double hours, payrate, gross, fed, state, local, net;

    cout << "Enter the hours: ";
    cin >> hours;

    cout << "Enter the pay rate per hour: ";
    cin >> payrate;

    gross = hours * payrate;
    fed = gross * 0.08;
    state = gross * 0.09;
    local = gross * 0.05;
    net = gross - fed - state - local;

    cout << "Your gross income is: " << gross << endl;
    cout << "Your federal tax is: " << fed << endl;
    cout << "Your state tax is: " << state << endl;
    cout << "Your local is: " << local << endl;
    cout << "Your net worth is: " << net << endl;

    return 0;
}