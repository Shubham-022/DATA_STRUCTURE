#include<iostream>
using namespace std;
//#include<bits/stdc++.h>
int main()
{
    int row,colm;
    cout<<"Enter the number of rows in array";
    cin>>row;
    cout<<"Enter the number of colms in array";
    cin>>colm;
    int arr[row][colm];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
            cin>>arr[i][j];
        }
    }
      for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //hoe to access element;
     cout<<endl<<endl<<arr[1][3];
}