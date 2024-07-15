#include<iostream>
using namespace std;
int main()
{    
    int colm,row;
    cout<<"Enter the number of rows ";
    cin>>row;
    cout<<"Enter the number of colm ";
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
    //allways use;
   //colm tchala rhe to j;
   //row tk chala rhe to i;
    cout<<"Wave form of matrix"<<endl;
    for(int j=0;j<colm;j++)
    if(j%2==0)
    {
        for(int i=0;i<row;i++)
        cout<<arr[i][j]<<" ";
    }
    else{
        for(int i=row-1;i>=0;i--)
        cout<<arr[i][j]<<" ";
    }
}