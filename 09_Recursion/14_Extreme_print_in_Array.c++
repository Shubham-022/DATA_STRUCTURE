//my question
#include<iostream>
using namespace std;
void Extreme(int arr[],int start,int end)
{
    //base case
    if(start>end)
    return ;

    //1 case solve kro;
    if(start<end)
    {
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
        
        start=start+1;
        end=end-1;
    }
    if(start==end){
    cout<<arr[start]<<" ";
    start=start+1;
    end=end-1;
    }


    Extreme(arr,start,end);
}
int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int size=sizeof(arr)/sizeof(int);
    int start=0;
    int end=size-1;
    Extreme(arr,start,end);
}