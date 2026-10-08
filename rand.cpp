#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int i = 1, num, oddco = 0, odd;
    
   while (i < 21) {
        num = rand() % 101 + 99;
        cout << num << endl;
        odd = num % 2;
        if (odd == 1){
            oddco++;
        }
        i++;
    }

    cout << "There are "<< oddco << " odd numbers" << endl;

return 0;
}