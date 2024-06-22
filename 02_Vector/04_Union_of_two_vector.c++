#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int main()
{   int n;
    vector<int>arr{1,2,3,4,5};
    vector<int>brr{5,6,7,8};
    vector<int>crr;
    for(int i=0;i<arr.size();i++)
    {
         for(int j=0;j<brr.size();j++)
         {
            if(arr[i]==brr[j])
            {
                brr[j]=INT_MIN;
            }
         }
    }
    for(int i=0;i<arr.size();i++)
    {
         if(arr[i]!=INT_MIN)
         {
        n=arr[i];
        crr.push_back(n);
         }
    }
    for(int i=0;i<brr.size();i++)
    {
          if(brr[i]!=INT_MIN)
          {
        n=brr[i];
        crr.push_back(n);
          }
    }
    for(int i=0;i<crr.size();i++)
    {
        cout<<crr[i]<<" ";
    }
}