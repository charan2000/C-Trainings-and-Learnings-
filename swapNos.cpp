#include <bits/stdtr1c++.h>
using namespace std;

int main()
{
    int a = 5;
    int b = 4;
    int temp = 0;
    // Using 3 Variables;
    temp = a;
    a = b;
    b = temp;
    // Using 2 Variables;
    a = a + b;
    b = a - b;
    a = a - b;

    //Using XOR bitwise Operator;
    //a = a^b;

    cout << a << b;
    return 0;
}
