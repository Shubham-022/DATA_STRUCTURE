#include<iostream>
#include<string.h>
using namespace std;
int FindKey(string str,int n,int i,char key,int &count)
{
    //base case;
    if(i==n)
    return count;

    // 1 case solve kro;
    if(str[i]==key)
       count++;


    //recursive relation;
    return FindKey(str,n,i+1,key,count);  //We cant do i++ or ++i;
}
int main()
{
    string str="shubham";
    int n=str.length();
    int i=0;
    char key='h';
    int count=0;

   cout<<FindKey(str,n,i,key,count);
}