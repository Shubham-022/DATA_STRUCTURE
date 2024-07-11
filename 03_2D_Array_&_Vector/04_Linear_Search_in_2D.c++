#include<iostream>
using namespace std;
int main()
{
    int row,colm;
    cout<<"Enter the no. of rows";
    cin>>row;
    cout<<"Enter the no. of colm";
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
    //linear search;
    int key,flag=0;
    cout<<"Enter a number you want to search";
    cin>>key;

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<colm;j++)
        {
            if(arr[i][j]==key)
            {
                flag=1;
                break; 
            }
        }
    }
    if(flag==1)
    cout<<"Found";
    else
    cout<<"Not Found";
}