#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    int age;
    string name;

public:
    Person(string name, int age) // Parameterized Constructor;
    {
        this->name = name;
        this->age = age;
        cout << "My Name is " << name << "and I'm " << age << "years old" << endl;
    }
};

int main()
{
    Person p("Charan", 20);
    Person *ptr = &p;
    cout << p.name << ' ' << p.age << endl;
    cout << (*ptr).name << " " << (*ptr).age << " " << endl;
    cout << ptr->name << " " << ptr->age << endl;
    return 0;
}