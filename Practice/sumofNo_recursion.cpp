#include <bits/stdc++.h>
using namespace std;

int sumOf_digits(int a)
{
    if (a == 0)
    {
        return 0;
    }
    return (a % 10 + sumOf_digits(a / 10));
}

int main()
{
    int n;
    cin >> n;
    cout << "The sum of digits in a No. is: " << sumOf_digits(n);
}