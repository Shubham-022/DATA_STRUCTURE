#include<iostream>
using namespace std;
int Factorial(int n)
{
    //base case
    if(n==1)
    return 1;
    
    //solve 1 case & other all handeled by recursion
    int ans=n*Factorial(n-1);
    return ans;
}
int main()
{
    int n;
    cout<<"Enter a number ";
    cin>>n;
    cout<<endl<<Factorial(n);
}