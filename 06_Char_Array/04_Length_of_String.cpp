#include<iostream>
using namespace std;
int strlength(char arr[])
{     int i=0;
      int length =0;
    while(arr[i]!='\0')
    {
        length++;
        i++;
    }
    return length;
}
int main()
{    char arr[100];
     cin>>arr;
     int length=strlength(arr);
     cout<<length;
} 