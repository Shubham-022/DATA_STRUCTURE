#include<iostream>
#include<vector>
using namespace std;
int Binary_search(vector<int>arr,int target)
{
    int start=0;
    int end=arr.size()-1;
    int mid=start+((end-start)/2);

    while(start<=end)
    {
        if(arr[mid]==target)
        {
        return mid;
        break;
        }
        
        if((mid!=arr.size()-1)&&arr[mid+1]==target)
        return mid+1;

        if((mid!=0)&&arr[mid-1]==target)
        return mid-1;

        if((arr[mid]>target))
         end=mid-2;

        else
         start=mid+2;
         mid=start+((end-start)/2);

    }
    return -1;
}
int main()
{
    vector<int>arr={10,3,40,20,50,80,70};
    int target;
    cout<<"Enter the number you want to search ";
    cin>>target;
    int ans=Binary_search(arr,target);
   
   if(ans!=-1)
   {
    cout<<"Index of "<<target<<" is "<<ans;
   }
   else
   cout<<"Element not found";
}