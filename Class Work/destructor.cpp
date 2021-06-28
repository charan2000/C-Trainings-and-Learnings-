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
    ~Person() //Default destructor;
    {
        cout<<"Destructor called: "<<endl;
    }
};

int main()
{
    Person p;

    return 0;
}