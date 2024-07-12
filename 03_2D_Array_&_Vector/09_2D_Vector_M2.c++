#include<iostream>
#include<vector>
using namespace std;
int main()
{  int row,colm;
    cout<<"Enter the number of rows ";
    cin>>row;
    cout<<"Enter the number of colm ";
    cin>>colm;
     vector<vector<int>>arr(row,vector<int>(colm,100));
     for(int i=0;i<arr.size();i++)
     {
        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
}