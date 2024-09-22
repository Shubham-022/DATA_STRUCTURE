#include<iostream>
using namespace std;
int main()
{
     int a=10;
     int*p=&a;
     int**q=&p;
     cout<<"value of a ";
     cout<<a<<endl;
     cout<<"address of a ";
     cout<<&a<<endl;
     cout<<"value at p ";
     cout<<p<<endl;
     cout<<"Value at address store in pointer p ";
     cout<<*p<<endl;
     cout<<"address of p ";
     cout<<&p<<endl;
     cout<<endl<<endl<<"Double pointer"<<endl;
     cout<<"Value store at q ";
     cout<<q<<endl;
     cout<<"value  at address stored at q ";
     cout<<*q<<endl;
     cout<<"value at address which store at address stored in q ";
     cout<<**q<<endl;
     cout<<"address of q ";
     cout<<&q;
}