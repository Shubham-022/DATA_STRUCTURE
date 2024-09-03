#include<iostream>
using namespace std;
   bool checkPrime(int n)
    {
        if(n<2)
        return false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
    }
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    
    if(checkPrime(n))
    {
        cout<<n<<" is a prime number";
    }
    else{
        cout<<n<<" is not prime number";
    }
}