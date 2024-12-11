#include<iostream>
using namespace std;
bool CheckSorted(int arr[],int n,int i)
{
    if(i==n-1)
    return true;
    if(arr[i+1]<arr[i])
    return false;
    else
    return CheckSorted(arr,n,i+1);


    
} 
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int i=0;

    cout<<CheckSorted(arr,n,i);
}