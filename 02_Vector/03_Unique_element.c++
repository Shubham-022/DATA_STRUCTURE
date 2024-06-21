#include<iostream>
#include<vector>
using namespace std;
int main()
{  int   unique=0;
    vector<int>arr{1,2,3,4,5,1,3,2,4};
    for(int i=0;i<arr.size();i++)
    {
        unique=unique^arr[i];
    }
    cout<<unique;
}