//run in online compiler
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>arr;
    int n,k;
    //input
    cout<<"Enterthenumber of elements in array ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
     cin>>k;
      arr.push_back(k);
    }
    //vector before short
    cout<<"vector before short";
     for(int i=0;i<arr.size();i++)
    {
       cout<<arr[i]<<" ";
    }


    //algorithm
     int start=0;
    int  end=n-1;
    //for(int i=0;i<arr.size();i++)
    while(end>start)
    {
       //if(end>start)
       {
           if(arr[start]==1)
           {
            swap(arr[start],arr[end]);     //swaping
            end--;
           }
           else
           {
            start++;
           }

       }
    }
    
    //element after short
    cout<<"vctor after short";
       for(int i=0;i<arr.size();i++)
    {
       cout<<arr[i]<<" ";
    }
}