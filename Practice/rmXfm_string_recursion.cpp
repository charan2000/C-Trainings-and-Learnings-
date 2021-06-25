//Compute a string recursively a new string where all "X" characters have been removed

#include <bits/stdc++.h>
#include <string>
using namespace std;

void filter_X(string s, int i)
{
    if (i >= s.length())
        return;
    if (s[i] == 'x')
    {
        s = s.substr(0, i) + s.substr(i + 1, s.length());
        filter_X(s, i);
        return;
    }
}

int main()
{
    string str = "axbad";
    filter_X(str, 0);
    cout << str;
    return 0;
}



#include <iostream>
#include<string>
using namespace std;
//0->s.length()-1;
void remove(string&s,int i){
    if(i>=s.length())return;
    
    if(s[i] == 'x'){ //axxb
        s = s.substr(0,i)+s.substr(i+1,s.length()); //a+xb = axb
        remove(s,i);  
        return;
    }
    remove(s,i+1);
    return;
}

//s.size() || s.length();
//abcd fun(s.substr(1,s.size());

int main() {
	string s;
	cin>>s;
	remove(s,0);
	cout<<s;
	return 0;
}