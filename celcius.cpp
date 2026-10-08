#include <iostream>
#include <cstdlib>

using namespace std;

double cToFahrenheit(double numvalue) {
    return (numvalue * 9 / 5 ) + 32;

}

double fToCelsius(double numvalue) {
    return (numvalue - 32) * 5.0 / 9.0;
}

int main() {

    char units;
    double numvalue;
    cout << "Enter the unit of measure F or C: ";
    cin >> units;

    if (units == 'c' || units == 'C') {
        cout << "Enter temperature in Celsius: ";
        cin >> numvalue;
        double a = cToFahrenheit(numvalue);
    }

    else if (units == 'f' || units == 'F') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> numvalue;
        double a = fToCelsius(numvalue);
    }
    else {
        cout << "Error Invalid Input" << endl;
    }

    return 0;
}