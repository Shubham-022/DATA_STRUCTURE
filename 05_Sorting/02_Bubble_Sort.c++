#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr{10,1,17,6,1,9};
    int n=arr.size();
    for(int round=1;round<n;round++)
    {
        for(int j=0;j<n-round;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}