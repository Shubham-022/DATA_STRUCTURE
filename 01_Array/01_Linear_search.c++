#include<iostream>
using namespace std;
int main()
{
    int arr[8]={10,20,30,40,50,60,70,80};
    int size=8,i;
    int flag=0;
    int n;
    cout<<"enter a number you want to search ";
    cin>>n;
    for(i=0;i<size;i++)
    {
        if(arr[i]==n)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"Found";
    }
    else
    {
        cout<<"not found";
    }
}
