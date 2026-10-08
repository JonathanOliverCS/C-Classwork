#include <iostream>
using namespace std;

int result[50][2];

void countRepeats(int a[], int used) // counts each number and adds them to the universal array / result[]
{
    for (int i = 0; i < used; i++)
    {
        int repeated = 0;

        for (int j = 0; j < used; j++)
        {
            if (a[j] == a[i])
                repeated++;
        }

        result[i][0] = a[i];
        result[i][1] = repeated;
    }
}

int main()
{
    int a[50];
    int used;

    cout << "How many Integers? ";
    cin >> used;

    cout << "Enter Integers: ";
    for (int i = 0; i < used; i++)
    {
        cin >> a[i];
    }

    countRepeats(a, used);

    cout << "Output: ";
    for (int i = 0; i < used; i++)
    {
        cout << result[i][0] << " was repeated " << result[i][1] << " times." << endl;
    }

    return 0;
}
