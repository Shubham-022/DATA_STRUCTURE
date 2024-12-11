#include<iostream>
#include<limits.h>
using namespace std;
void MinElement(int arr[],int n,int i,int& min)
{
    //base case
    if(i==n)
    return ;

    //solve 1 case
    if(arr[i]<min)
    min=arr[i];

    //recursive relation
    MinElement(arr,n,i+1,min);
}
int main()
{
    int arr[5]={4,5,7,2,1};
    int n=sizeof(arr)/sizeof(int);
    int i=0;
    int min=INT_MAX;
    MinElement(arr,n,i,min);
    cout<<min;
}