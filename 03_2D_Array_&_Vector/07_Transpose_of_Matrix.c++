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
    //Taking input in array;
    if(row==colm)
    {
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
            cin>>arr[i][j];
         }
        cout<<endl;
    }
    //Printing array;
    cout<<"Array before transpose"<<endl;
        for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   //code of transpose;
       int brr[row][colm];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
        brr[i][j]=arr[j][i];
        }
    }
      //printing transpose;
      cout<<"Array after transpose"<<endl;
         for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
   
    }
    cout<<"Transpose is not posible because matrix is not n*n";
}