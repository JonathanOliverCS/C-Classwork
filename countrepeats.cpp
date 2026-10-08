#include <iostream>
using namespace std;

int result[50][2]; // value, repeats

void countRepeats(int a[], int used, int &uniqueCount)
{
    uniqueCount = 0;

    for (int i = 0; i < used; i++)
    {
        int repeated = 1;
        bool alreadyCounted = false;


        for (int r = 0; r < uniqueCount; r++)
        {
            if (result[r][0] == a[i])
            {
                alreadyCounted = true;
                break;
            }
        }
        if (alreadyCounted) continue;


        // counting
        for (int j = i + 1; j < used; j++)
        {
            if (a[j] == a[i])
                repeated++;
        }


        // original count
        result[uniqueCount][0] = a[i];
        result[uniqueCount][1] = repeated;
        uniqueCount++;
    }

    // sorting
    for (int i = 0; i < uniqueCount - 1; i++)
    {
        for (int j = i + 1; j < uniqueCount; j++)
        {
            if (result[j][0] > result[i][0])
            {
                // swap rows
                int temp0 = result[i][0];
                int temp1 = result[i][1];
                result[i][0] = result[j][0];
                result[i][1] = result[j][1];
                result[j][0] = temp0;
                result[j][1] = temp1;
            }
        }
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

    int uniqueCount;
    countRepeats(a, used, uniqueCount);

    cout << "Output: " << endl;
    for (int i = 0; i < uniqueCount; i++)
    {
        cout << result[i][0] << " was repeated " << result[i][1] << " times." << endl;
    }

    return 0;
}