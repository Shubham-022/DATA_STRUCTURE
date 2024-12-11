#include<iostream>
using namespace std;
int Fibonacci(int n)
{
    //base case ->1
    if(n==0)
    return 0;

    //base case ->2
    if(n==1)
    return 1;

    //1 case solve kro baki recursion sambhal lega;
    int ans=Fibonacci(n-1)+Fibonacci(n-2);
    return ans;

}
int main()
{
    int n;
    cout<<"Enter the tern which you want to print ";
    cin>>n;
    cout<<Fibonacci(n);
}