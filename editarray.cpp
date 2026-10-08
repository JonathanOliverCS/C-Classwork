#include<iostream>

using namespace std;

const int MAX = 100;

void displaymenu();

char getOpt();

void insert(int arr[], int n, int data);

// return 0 if array is empty 
int getLargest (const int arr[], int n);

int getAverage(int arr[], int used) {
    int sum = 0;
    for (int i = 0; i < used; i++)
        sum += arr[i];
    return sum / used;
}

int main()
{

    int nums[MAX], used = 0;
    char opt;

    while(true)
    {
        displayMenu();

        opt = getOpt();

        switch(opt)
        {
            case '1':
                insert(nums, used);
                break;
            case '2':
            if(used == 0)
            {
                cout << "Empty array/n";
            }
            else
            {
                cout << "The Largest value is " << getLargest(nums, used);
            }
            break;
        case '3':
            insert(nums, used);

        }
    }
}

void displayMenu() {
    cout << "\n=== MENU ===\n";
    cout << "1. Insert\n";
    cout << "2. Get Largest\n";
    cout << "3. Get Average\n";
    cout << "4. Quit\n";
    cout << "Choose: ";
}

char getOpt() {
    char c;
    cin >> c;
    return c;
}




void insert(int arr[], int used)
{
    //step 1
    if(used >= MAX)
    {
        cout << "NO space/n";
        return;
    }

    //step 2
    int data;
    cout << "enter a number: ";
    cin >> data;

    //step 3
    int index = 0;
    bool set = false;
    for (int i = 0; i < used; i++;)
    {
        if (arr[i] > data)
        {
            index = 1;
            set = true;
        }
        if (!set)
        {
            index = used;
        }
    }


    // step 4 shift
    for (int i = used - 1; i >= index; i--)
    {
        arr[i+1] = arr[1];
    }

    //step 5
    arr[index] = data;

    //step 6
    used++;
}