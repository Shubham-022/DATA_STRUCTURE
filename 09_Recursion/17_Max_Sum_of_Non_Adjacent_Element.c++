//based on include exclude pattern;

//Return the maximum number of sequences in which no two elements are adjacent;
#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;
void solve(vector<int>&arr,int i,int sum,int& maxi)
{
    //base case
    if(i>=arr.size())
    {
        maxi=max(maxi,sum);
        return;
    }

    //include
    solve(arr,i+2,sum+arr[i],maxi);

    //Exclude
    solve(arr,i+1,sum,maxi);
    

}
int main()
{
    vector<int>arr{1,1,1,5,5,5};
    int sum=0;
    int maxi=INT_MIN;
    int i=0;
    solve(arr,i,sum,maxi);
    cout<<maxi;
}