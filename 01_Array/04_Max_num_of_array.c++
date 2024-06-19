#include<iostream>
//#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
int main()
{ 
    int arr[10]={10,20,30,40,50,60,70,80,100,90};
    int size=10;
    int max = INT_MIN;
    int i;
    for(i = 0 ; i < size ; i++)
    {
       if(arr[i] > max)
       {
           max = arr[i];
       }
    }
    
    cout<<max;
}