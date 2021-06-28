#include <bits/stdc++.h>
//#include<iostream>
//#include<vector>
using namespace std;

void display(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    //int arr[] = {1,2,3,4,5};
    //Cannot expand or shrink the size
    //Cannot insert or delete elements from any positions
    //Cannot find the size of the array
    //Disadv of arrys;
    vector<int> arr = {1, 2, 3, 4, 5}; //Declaration:
    //int arr2[5];
    vector<int> arr2(5); //Declaration
    arr.push_back(22);
    display(arr);
    arr.push_back(54);
    display(arr);
    return 0;
}