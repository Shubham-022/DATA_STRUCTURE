#include<iostream>
using namespace std;
 int n,i;

bool search(int arr[],int size,int n)
{
     for(i=0;i<size;i++)
    {
      if(arr[i]==n)
      {
      return true;
      }
    }
    return false;
}

int main()
{
    int arr[8]={10,20,30,40,50,60,70,80};
    int size=8;
   
    int n;
    cout<<"enter a number you want to search ";
    cin>>n;
    if(search(arr,size,n))
    {
          cout<<"Found";
    }  
    else
    {
           cout<<"not found";
    }
   
}