
#include <iostream>
using namespace std;

int main() {
    int prod = 1;
    int n;

    cout << "Enter your N: ";
    cin >> n;

    int i = 1;
    while (i <= n) {
        prod *= i;
        i++;
    }

    cout << "The factorial of " << n << " is: " << prod << endl;

    return 0;
}
