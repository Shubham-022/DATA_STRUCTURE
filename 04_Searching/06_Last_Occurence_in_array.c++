#include<iostream>
using namespace std;
int main()
{
    int arr[10]={10,20,40,40,40,40,70,90,90,100};
    int size=10;
    int start=0;
    int end=size-1;
    int mid=start+((end-start)/2);
    int target;
    int ans=-1;
    cout<<"Enter the number you wants to search ";
    cin>>target;

    while(start<=end)
    {
        if(arr[mid]==target)
        {
            //Store answer;
         ans=mid;
            //Search in left;
         start=mid+1;
        }
        else if(target<arr[mid]) 
            //Search in left;
         end=mid-1;
        else  //target>arr[mid];
            //Search in right;
         start=mid+1;
    mid=start+((end-start)/2);
    }
    if(ans==-1)
    cout<<"Element not found";
    else
    cout<<"Element Found at index "<<ans;

}