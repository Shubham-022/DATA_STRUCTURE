//input 001 case fail;
#include<iostream>
using namespace std;
int main()
{     int n,k;
cout<<"Enter the number ";
cin>>n;
    while(n>0)
    {
        k=n%10;
        cout<<k<<" ";
        n=n/10;
    }
}