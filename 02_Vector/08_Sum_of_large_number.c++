#include <algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main()
{   int arr[5]={3,4,5,2,3},brr[4]={3,4,6,5};
    int n=5,m=4;
   int i=n-1;
   int j=m-1;
   int carry=0;
   vector<int>v;
   
    while(i>=0&&j>=0)
    {
         int x=arr[i]+brr[j]+carry;
         int digit=x%10;
         carry = x/10;
         v.push_back(digit);
         i--;
         j--;

    }
      while(i>=0)
    {
         int x=arr[i]+0+carry;
         int digit=x%10;
         carry = x/10;
         v.push_back(digit);
         i--;

    }
       while(j>=0)
    {
         int x=0+brr[j]+carry;
         int digit=x%10;
         carry = x/10;
         v.push_back(digit);
         j--;    
    }
    if(carry>0)
    {
    v.push_back(carry);
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
}