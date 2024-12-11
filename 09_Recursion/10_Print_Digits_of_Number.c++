#include<iostream>
using namespace std;
void Digits(int n)
{
    //base case
    if(n==0)
    return ;

    Digits(n/10);
    
    cout<<n%10<<" ";
}
int main()
{
    int n;
    cout<<"Enter the number ";
    cin>>n;
    
    Digits(n);

}