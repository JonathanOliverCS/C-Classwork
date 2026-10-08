#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num;


    cout << "Enter a number: ";
    cin >> num;


    if (num >= 100)
    {
        num -= 30;
        cout << "You saved $30, Total: " << num << endl;
    }
    else if (num >= 75)
    {
        num -= 20;
        cout << "You saved $20, Total: " << num << endl;
    }
    else if (num >= 50)
    {
        num -= 10;
        cout << "You saved $10, Total: " << num << endl;
    }
    else
    {
        cout << "You need to buy more to apply the discount, Total: " << num << endl;
    }

    return 0;
}