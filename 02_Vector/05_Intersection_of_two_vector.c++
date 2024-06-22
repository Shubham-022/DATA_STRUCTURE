#include<iostream>
#include<vector>
using namespace std;
int main()
{   int n;
    vector<int>arr{1,2,1,3,4,5};
    vector<int>brr{5,1,4,1,6,7,8};
    vector<int>crr;
    
    for(int i=0;i<arr.size();i++)
    {
         for(int j=0;j<brr.size();j++)
         {
            if(arr[i]==brr[j])
            {
                n=arr[i];
            
             crr.push_back(n);
             break;
            }
         }
    }
        for(int i=0;i<crr.size();i++)
          {
            cout<<crr[i]<<" ";
          }  
    
     
}
   