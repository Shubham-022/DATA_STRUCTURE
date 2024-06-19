//if array={1,2,3,4,5,6,7};
//then output={1,7,2,6,3,5,4};
#include<iostream>
using namespace std;
int main()
{
    int arr[9]={10,20,30,40,50,60,70,80,90};
    int size=9;
    int start=0;
    int end=size-1;
    while(true)
    {
        if(start>end)
        {
            break;
        }

        if(start==end)
        {
            cout<<arr[start];
            start++;
            end--;
        }
        else{
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
            start++;
            end--;
        }
    }
}