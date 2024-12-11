//code correct hai
#include<iostream>
#include<string.h>
using namespace std;
bool FindKey(string str,int n,int i,char key)
{
    //base case;
    if(i==n)
    return false;

    // 1 case solve kro;
    if(str[i]==key)
    return true;


    //recursive relation;
    return FindKey(str,n,i+1,key);  //We cant do i++ or ++i;
}
int main()
{
    string str="shubham";
    int n=str.length();
    int i=0;
    char key='b';

   cout<<FindKey(str,n,i,key);
}