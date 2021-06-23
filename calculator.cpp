//#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int add(int a, int b)
{
    cout << "Addtion is: ";
    return a + b;
}
int subtract(int a, int b)
{
    cout << "subtraction is: ";
    return a - b;
}

int main()
{
    int a, b;
    cout << "Enter the 2 values: \n";
    cin >> a >> b;
    cout << add(a, b) << endl;
    cout << subtract(a, b);
    return 0;
}