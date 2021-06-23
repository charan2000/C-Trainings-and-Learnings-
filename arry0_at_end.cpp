#include <iostream>
using namespace std;

int main()
{
    int arr[5] = { 3,
                   0,
                   0,
                   2,
                   5 } int i = 0;
    int len = sizeof(arr) / sizeof(arr[0]) for (i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            arr[len - 1] = arr[i]
        }
    }
    for (i = 0; i < 5; i++)
    {
        cout << arr[i]
    }
    return 0;
}