//runin online compiler;
#include<iostream>
using namespace std;
int main()
{
   int arr[6]={1,3,4,6,2,1};
   int size=6;
int start=0;
int end=size-1;
int mid=start+((end-start)/2);
while(start<end)
{
    if(arr[mid]<arr[mid+1])
     start=mid+1;
     else
     end=mid;
     mid=start+((end-start)/2);
}
cout<<start;

}