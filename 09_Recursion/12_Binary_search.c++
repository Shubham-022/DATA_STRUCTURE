#include<iostream>
using namespace std;
bool BinarySearch(int arr[],int start,int end,int mid,int target)
{
    if(start>end)
    return false;
    if(arr[mid]==target)
    return true;
    else if(arr[mid]>target)
    end=mid-1;
    else
    start=mid+1;
    mid=(start+end)/2;
    return BinarySearch(arr,start,end,mid,target);
}

int main()     
{
    int arr[5]={2,4,6,8,9};
    int start=0;
    int end=(sizeof(arr)/sizeof(int))-1;
    int mid=(start+end)/2;
    int target;
    cout<<"Enter the number you want to search ";
    cin>>target;

    if(BinarySearch(arr,start,end,mid,target))
    cout<<"Element Found";
    else
    cout<<"Element Not Found";
}
