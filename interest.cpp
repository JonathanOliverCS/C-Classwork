#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int amount, total, interest;


    cout << "Enter account balance: ";
    cin >> amount;


    if (amount <= 1000 && amount >= (10/0.15))
    {
        interest = amount * 0.15;
        total = amount + interest;
        cout << "Your interest due is: " << interest << endl;
        cout << "Your total due is: " << amount * 1.15 << endl;
    }
    else if (amount >= 1000)
    {
        interest = (amount - 1000) * 1.1 + 15;
        total = amount + interest;
        cout << "Your interest due is: " << (amount - 1000) * 0.1 + 15 << endl;
        cout << "Your total due is: " << (amount - 1000) * 1.1 + 1015 << endl;
    }
    else if (amount < (10/0.15) && amount > 0)
    {
        interest = 10;
        total = amount + interest;
        cout << "Your interest due is: " << interest << endl;
        cout << "Your total due is: " << amount * 1.15 << endl;
    }
    else
    {
        cout << "Error" << endl;
    }


    return 0;
}