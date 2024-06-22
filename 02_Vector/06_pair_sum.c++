//Find the pairs whose sum is zero
#include<iostream>
#include<vector>
using namespace std;
int main()
{   int sum;
    cin>>sum;
    vector<int>arr{3,7,4,8,6,2,9};
    for(int i=0;i<arr.size();i++)      //outer loop
    {
        for(int j=1;j<arr.size();j++)  //inner loop
        {
            if(arr[i]+arr[j]==sum)     //condition
            {
                cout<<"( "<<arr[i]<<" , "<<arr[j]<<" )";
            }
        }
    }

}
