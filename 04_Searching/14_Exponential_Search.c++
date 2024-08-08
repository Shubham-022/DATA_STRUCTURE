/*    week 4
      exponential search
      time complexity log n;
*/
#include<iostream>
using namespace std;
int binarySearch(int arr[],int x,int start,int end)
{
    int mid=start+((end-start)/2);
    while(end>=start)
    {
    if(arr[mid]==x)
    {
        return (mid);
    }
    else if(arr[mid]>x)
    {
        end=mid-1;
    }
    else
    {
        start=mid+1;
    }
    mid=start+((end-start)/2);
    }
    return -1;
}
int expSearch(int arr[],int size,int x)
{
    if(arr[0]==x)
    return 0;
    int i=1;                             //int i=0,j=1;
        while(i<size && arr[i]<x)       //while(arr[j]<x)
    {                                    //{
        i=i*2;                           //i=j
                                         // j=j*2    
                                         //}
    }
    return(binarySearch(arr,x,i/2,min(i,size-1)));
}
int main()
{
    int arr[]={3,4,5,6,11,13,14,15,56,70};
    int size = sizeof(arr)/sizeof(int);
    int x=13;
    int ans=expSearch(arr,size,x);
    cout<<ans;
}