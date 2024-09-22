#include<iostream>
using namespace std;
int main()
{
     int a=10;
     int*p=&a;
     int*q=p;
     cout<<"value of a ";
     cout<<a<<endl;
     cout<<"address of a ";
     cout<<&a<<endl;
     cout<<"value at p ";
     cout<<p<<endl;
     cout<<"value at q ";
     cout<<q<<endl;
     cout<<"Value at address store in pointer p ";
     cout<<*p<<endl;
     cout<<"Value at address store in pointer q ";
     cout<<*q<<endl;
     cout<<"address of p ";
     cout<<&p<<endl;
     cout<<"address of q ";
     cout<<&q;
}