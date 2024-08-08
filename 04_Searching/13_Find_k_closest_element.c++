//leet
#include<iostream>
#include<vector>
using namespace std;
int main()
{       vector<int>arr={1,2,3,4,5};
            //k = no. of closest element;
       int k=4;

       //x = number which closest element we have to find;
        int x=3;
        int high=arr.size()-1;
        int low=0;
        while(high-low>=k)
        {
            if((x-arr[low])>(arr[high]-x))
            {
                low++;
            }
            else
            {
                high--;
            }
        }
        vector<int>v;
        for(int i=low;i<=high;i++)
        {
            v.push_back(arr[i]);
            cout<<arr[i];
        }
        


    }