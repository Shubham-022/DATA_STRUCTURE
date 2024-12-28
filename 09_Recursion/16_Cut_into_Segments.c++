// i/p n= length of length
      // x,y,z 
//o/p maximim number of segments;

#include<iostream>
#include<limits.h>
using namespace std;
int solve(int n,int x,int y,int z)
{
    //base case;
    if(n==0)
    return 0;

    //base case
    if(n<0)
    return INT_MIN;

    int ans1=solve(n-x,x,y,z)+1;
    int ans2=solve(n-y,x,y,z)+1;
    int ans3=solve(n-z,x,y,z)+1;

    int ans=max(ans1,max(ans2,ans3));
    return ans;



}
int main()
{
    //size of rod
    int n=7;
    
    //Length of cutting
    int x=5;
    int y=2;
    int z=2;

    int ans=solve(n,x,y,z);
    if(ans==INT_MIN)
    {
        ans=0;
    }
    cout<<ans;
}