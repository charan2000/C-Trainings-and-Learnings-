#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int add(int a, int b)
{
    cout << "Addtion is: \n";
    return a + b;
}
int subtract(int a, int b)
{
    cout << "subtraction is: \n";
    return a - b;
}

int main()
{
    int a, b;
    char op;
    cout << "Enter the expression: \n";
    cin >> a >> op >> b;
    switch (op)
    {
    case '+':
        cout << add(a, b);
    case '-':
        cout << subtract(a, b);
        break;
    }
    //cout << add(a, b) << endl;
    //cout << subtract(a, b);
    return 0;
}