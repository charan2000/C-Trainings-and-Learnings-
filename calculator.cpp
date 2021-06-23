#include <iostream>
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

int multiplication(int a, int b)
{
    cout << "Multiplication is: ";
    return a * b;
}

float division(int a, int b)
{
    cout << "Division is: ";
    return a / b;
}

int main()
{
    cout << "Enter the 2 values: \n"
         << endl;
    cin >> a >> b;
    add(a, b)
        subtract(a, b)
            division(a, b)
                multiplication(a, b)
}