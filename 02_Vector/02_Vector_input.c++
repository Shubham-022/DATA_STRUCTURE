#include<iostream>
#include<vector>
using namespace std;
int main()
{int n;
    vector<int>arr;
    for(int i=0;i<5;i++)
    {
        cin>>n;
        arr.push_back(n);
    }
     for(int i=0;i<5;i++)
    {
        
        cout<<arr[i]<<" ";
 
    }
   cout<< endl<<arr.capacity();


   
}