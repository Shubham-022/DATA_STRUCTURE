#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>>arr;
    vector<int>a{1,2,3,4};
    vector<int>b{5,6,7,8,6,9};
    vector<int>c{3,5,7,6,1};
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);

    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
