#include<iostream>
using namespace std;
void PrintArray(int arr[],int &n,int i)
{
    //Base case
    if(i==n)
    return;
    
    //process
    cout<<arr[i]<<" ";
    
    //recursion
    PrintArray(arr,n,i+1);   //We can't do i++;
}
void ArrayReverse(int arr[],int n,int i)
{
    
    //Base case
    if(i==n)
    return;

    //recursion
    ArrayReverse(arr,n,i+1);    //We can't do i++;

    //process
    cout<<arr[i]<<" ";
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);

    int i=0;
    cout<<"Printing array elements "<<endl;
    PrintArray(arr,n,i);
    
    cout<<endl<<"Print array in reverse "<<endl;
    ArrayReverse(arr,n,i);

}