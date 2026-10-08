#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int grade;


    cout << "Enter your score: ";
    cin >> grade;


    if (grade >= 90)
    {
        cout << "Letter Grade: A" << endl;
    }
    else if (grade >= 80)
    {
        cout << "Letter Grade: B" << endl;
    }
    else if (grade >= 70)
    {
        cout << "Letter Grade: C" << endl;
    }
    else if (grade >= 60)
    {
        cout << "Letter Grade: D" << endl;
    }
    else
    {
        cout << "Letter Grade: F" << endl;
    }

    return 0;
}