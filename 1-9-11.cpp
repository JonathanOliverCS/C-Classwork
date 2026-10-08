#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int radius, height ;

    cout << "Enter the radius: ";
    cin >> radius;

    cout << "Enter the height: ";
    cin >> height;

    cout << "The area of the Rectangle is " << 2 * M_PI * radius * height + 2 * M_PI * pow(radius, 2) << endl;

    return 0;
}