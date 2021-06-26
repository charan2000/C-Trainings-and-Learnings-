#include<bits/stdc++.h>
using namespace std;

class Student{
    string adhaar;
    public:
    string name;
    int age;
    void intro()
    {
        cout<<"Name: "<<name<<" Age: "<<age<<endl;
    }
};

int main()
{
    Student s;
    s.name = "Charan";
    s.age = 20;
    //s.adhaar = "123455";  Cannot be accessible
    s.intro();
}