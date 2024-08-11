#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char arr[1000];
    cin>>arr;

   int  start=0;
    int end=strlen(arr)-1;
    while(end>=start)
    {
        swap(arr[end],arr[start]);
        end--;
        start++;

    }
cout<<arr;
}