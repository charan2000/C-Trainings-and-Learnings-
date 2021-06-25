
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int *ptr2 = &y;
    int *ptr3 = &z;
    int *ptr1 = &x;

    if (*ptr1 > *ptr2 && *ptr1 > *ptr3)
    {
        cout << "The max value is: " << *ptr1 << endl;
    }
    else if (*ptr2 > *ptr1 && *ptr2 > *ptr3)
    {
        cout << "The max value is: " << *ptr2 << endl;
    }
    else
    {
        cout << "The max value is: " << *ptr3 << endl;
    }
    return 0;
}