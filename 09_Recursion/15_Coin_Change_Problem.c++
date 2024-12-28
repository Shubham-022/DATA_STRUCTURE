//Coin Changr Problem
//have a array and target;
//have to find minimum number of elements required to reach target sum;
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
int solve(vector<int>&arr,int target)
{
    //base case
    if(target==0)
    return 0;

    //base case
    if(target<0)
    return INT_MAX;
     int mini=INT_MAX;
    for(int i=0;i<arr.size();i++)
    {
        int ans=solve(arr,target-arr[i]);
        if(ans!=INT_MAX)
        mini=min(mini,ans+1);
    }
        return mini;
}
int main()
{
    vector<int>arr{1,2};
    int target=5;
    cout<< solve(arr,target);



}