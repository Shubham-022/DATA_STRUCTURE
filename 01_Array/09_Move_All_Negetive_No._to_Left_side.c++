#include<iostream>
using namespace std;
int main()
{
        int n;
        cout<<"Enter the no. of element in array ";
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int start=0,end=n-1;
        while(start<end)
        {
            if(arr[end]<0)
            {
                swap(arr[start],arr[end]);
                start++;
            }
            else
            {
                end--;
            }
                                
        }
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
}