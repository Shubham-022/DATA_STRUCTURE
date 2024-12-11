#include<iostream>
using namespace std;
int Power(int n,int p)
{
    //base case
    if(p==1)
    return n;
    //1 ase solve kro
    int ans= n*Power(n,p-1);
    return ans;
     
}
int main()
{
    int n,p;
    cout<<"Enter the number ";
    cin>>n;
    cout<<"enter the power ";
    cin>>p;
   cout<< Power(n,p);
}
