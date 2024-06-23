#include<iostream>
using namespace std;
int main()
{
    int n,k,m=0;
    cout<<"Enter the number";
    cin>>n;
    int i=n;
    while(i>0)
    {
      k=i%10;
      m=m+(k*k*k);
      i=i/10;
      
    }
    if(m==n)
    {
        cout<<n<<" is armstrong number";
    }
    else
    {
        cout<<n<<" is not armstrong number";
    }
}