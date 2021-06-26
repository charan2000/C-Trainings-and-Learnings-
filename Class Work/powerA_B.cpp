#include <bits/stdc++.h>
using namespace std;

int power(int a, int b)
{
    int product = 1;
    for (int i = 0; i < b; i++)
    {
        product *= a;
    }
}

int main()
{
    int n, m;
    cout << "Enter a Number: \n";
    cin >> n >> m;
    cout << "A raised to power of B using default function: " << pow(n, m) << endl;
    cout << "A raised to power of B using user defined function: " << power(n, m) << endl;
    return 0;
}