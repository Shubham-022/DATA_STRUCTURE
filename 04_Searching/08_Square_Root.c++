//Run on online compiler;
#include<iostream>
using namespace std;
int main()
{    int n;
     cout<<"Enter the number whose square root you want ";
     cin>>n;
     int start=0;
     int end=n;
     int ans;
     int mid=start+((end-start)/2);
     
     while(start<=end)
     {
        if(mid*mid==n)
        {
        ans= mid;
        break;
        }
        else if(mid*mid<n)
        {
        ans=mid;
        start=mid+1;
        }
        else
        end=mid-1;

        mid=start+((end-start)/2);
     }
      cout<<ans;
  
}