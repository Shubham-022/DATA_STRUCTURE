//Run ononline compiler
#include<iostream>
using namespace std;
int main()
{    int row=4,colms=5;
    int arr[4][5]={{10,20,30,40,50},{60,70,80,90,100},{110,120,130,140,150},{160,170,180,190,200}};
    int start=0;
    int end=row*colms-1;
    int target;
    int ans=-1;
    int row_index;
    int colms_index;
    int mid=start+((end-start)/2);
    cout<<"Enter the number you want to search ";
    cin>>target;
    while(start<=end)
    {
     row_index=mid/colms;
     colms_index=mid%colms;
    if(arr[row_index][colms_index]==target)
    {
       ans=arr[row_index][colms_index];
       break;
    }
    else if(arr[row_index][colms_index]>target)
    {
        end=mid-1;
    }
    else      //if(arr[row_index][colms_index])
    {
    start=mid+1;
    }
    mid=start+((end-start)/2);
    }

    if(ans==-1)
     cout<<"NOT FOUND";
    else
    cout<<"FOUND";
  
}