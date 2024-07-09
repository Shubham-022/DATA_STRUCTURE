//input 001 case fail;
//because n is integer;
#include<iostream>
using namespace std;
int main()
{     int n,k;
cout<<"Enter the number ";
cin>>n;
    while(n>0)
    {
        k=(n%10);
        n=n/10;
        cout<<k<<" ";
        // if(k==0){
        //     cout<<"0";
        // }
    }
}