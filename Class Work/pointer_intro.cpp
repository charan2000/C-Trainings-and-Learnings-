#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;
    int **ptr2 = &ptr;
    int ***ptr3 = &ptr2;

    cout << a << endl; //
    cout << *(&a) << endl;
    cout << *ptr << endl;
    cout << ptr2 << endl;
    cout << **ptr2 << endl;
    cout << ***ptr3 << endl;
    cout << ptr3 << endl;
    return 0;
}

//Pointer arithematic
//datatype *ptr
// ptr + n == ptr + n X sizeof(datatype)