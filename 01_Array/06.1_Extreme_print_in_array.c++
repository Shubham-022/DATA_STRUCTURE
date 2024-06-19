 #include<iostream>
using namespace std;
int main()
{
 int arr[9]={10,20,30,40,50,60,70,80,90};
    int size=9;
    int start=0;
    int end=size-1;
  for(int i=0;i<size;i++)
    {
        if(start<end)
        {
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
            start++;
            end--; 
        }
        if(start==end)
        {
            cout<<arr[start];
             start++;
             end--; 
        }
        
      
    }
}