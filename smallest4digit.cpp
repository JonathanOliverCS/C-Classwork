#include <iostream>
using namespace std;

int main()
{
    int i = 1000;
    int count = 0;
    int smallest = 9999;
    int answer = 0;

    while (i <= 9999) {
        int thou = (i / 1000) % 10;
        int hund = (i / 100) % 10;
        int ten = (i / 10) % 10;
        int one = i % 10;

        int sum = thou + hund + ten + one;

        if (sum == 27 && i % 2 == 1) {
            count++;

            if (i < smallest) {
                smallest = i;
            }
        }

        i++;
    }

    cout << "There are " << count << " numbers whose digits sum to 27 and are odd." << endl;
    cout << "The smallest of them is: " << smallest << endl;

    return 0;
}
