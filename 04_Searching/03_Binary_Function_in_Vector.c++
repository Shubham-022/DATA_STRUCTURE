#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int>v={10,20,30,40,50,60};

    //Binary search function give a autput in true or false;
 int x= ( binary_search(v.begin(),v.end(),40));
   if(binary_search(v.begin(),v.end(),30))
    //if(x)
        cout<<"found";
     else
        cout<<"not found";
}