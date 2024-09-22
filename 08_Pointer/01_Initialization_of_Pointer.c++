#include<iostream>
using namespace std;
int main()
{
     int a=10;
     int*p=&a;
     cout<<"value of a ";
     cout<<a<<endl;
     cout<<"address of a ";
     cout<<&a<<endl;
     cout<<"value at p ";
     cout<<p<<endl;
     cout<<"Value at address store in pointer p ";
     cout<<*p<<endl;
     cout<<"address of p ";
     cout<<&p;
}