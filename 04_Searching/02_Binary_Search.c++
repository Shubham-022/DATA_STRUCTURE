//Binary search is a searching algorithm;
//whose time complexity is O(log n);
#include<iostream>
using namespace std;
int binary_search(int arr[],int size,int target)
{
    int start=0;
    int end =size-1;
    int mid=start+((end-start)/2);
    while(start<=end)
    {
        if(arr[mid]==target)
        return mid;
        else if(arr[mid]>target)
        end=mid-1;
        else
        start=mid+1;
        mid=start+((end-start)/2);
    }
    return -1;

}
int main()
{
    int arr[]={1,2,4,6,7,9,11};
    int size=7;
    int target=6;
    int indexOftarget= binary_search(arr,size,target);
    if(indexOftarget==-1)
    cout<<"Not found";
    else
    cout<<"Target found at "<<indexOftarget<<endl;
}