//week 3 homework soln 1;
#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter the no of elements in array ";
    cin>>n;
    int arr[n];
    cout<<"Enter 0's,1's,2's "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    //three pointer approach;
    int high=n-1,low=0,mid=1;
    for(int i=0;i<n;i++)
    {
        while(mid<=high)
        if(arr[mid]==0)
        {
            swap(arr[mid],arr[low]);
          //  mid++;
            low++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid],arr[high]);
            high--;
        }
    }
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
