#include<iostream>
#include<limits.h>
using namespace std;
int MaxElement(int arr[],int n,int i,int &max)
{
    //base case
    if(i==n)
    return max;

    if(arr[i]>max)
    max=arr[i];

    MaxElement(arr,n,i+1,max);
}
int main()
{
    int arr[5]={1,4,6,3,2};
    int n=sizeof(arr)/sizeof(int);
    int i=0;
    int max=INT_MIN;
    
  cout<<"Max element is "<< MaxElement(arr,n,i,max);
   //cout<<max;
}
