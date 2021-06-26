#include <bits/stdc++.h>
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[5] = {3, 2, 5, 2, 6};
    cout << arr[4] << endl;
    arr[4] = 66;
    cout << arr[4] << endl;
    display(arr, 5);
    return 0;
}