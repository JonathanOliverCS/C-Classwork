#include<iostream>

using namespace std;

void reorder(int & n1, int & n2)
{
    if (n1 < n2) {
        swap (n1, n2);
    }
}

int main ()
{
    int v1, v2;
    cout << " enter";
    cin >> v1 >> v2;
    
    reorder(v1, v2);

    cout << v1 << " " << v2 << endl;


}


























void swap(int a,int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap2(int a[], int i, int j)
{

}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    arr[1], arr[2];
}