#include <bits/stdc++.h>
using namespace std;

class Person
{
    int age;

public:
    string name;

    Person()  // Default constructor;
    {
        cout << "Default Constructor: " << endl;
    }
    Person(string n, int a)         // Parameterized Constructor;
    {
        name = n;
        age = a;
        cout << "My Name is " << name << "and I'm " << age << "years old" << endl;
    }
};

int main()
{
    Person p;
    Person("Charan", 20);
    return 0;
}