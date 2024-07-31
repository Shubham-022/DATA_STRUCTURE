#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr{10,1,4,8,5,7};
    int n=arr.size();
    for(int i=0;i<n-1;i++)
    {
        int  minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[minindex]>arr[j])
            minindex=j;
        }
        swap(arr[i],arr[minindex]);
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}