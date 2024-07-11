#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int row,colm;
    cout<<"Enter the no. of rows ";
    cin>>row;
    cout<<"Enter the no. of colm ";
    cin>>colm;
    int arr[row][colm];
    //taking input;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
            cin>>arr[i][j];
         }
        cout<<endl;
    }
    //Output
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   //code for maximum number
    int max = INT_MIN;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
            if(arr[i][j]>max)
            {
                max=arr[i][j];
               
            }
        }
    }
   cout<<"Maximum number is "<<max;
}