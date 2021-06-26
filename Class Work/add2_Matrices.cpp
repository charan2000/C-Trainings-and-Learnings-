#include <bits/stdc++.h>
using namespace std;

void add_matrices(int arr[3][3], int arr2[3][3],int arr3[3][3])
{
    for(int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            arr3[i][j] = arr[i][j] + arr2[i][j];
            
        }
    }
}

int main()
{
    int arr[3][3] = {{2,3,4},
                    {5,3,5},
                    {4,3,2}};
    int arr2[3][3] = {{32,1,44}
                        {6,54,3}
                        {33,5,3}};
    int arr3[3][3];
    add_matrices(*arr[3][3])

}