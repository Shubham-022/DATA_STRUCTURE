#include<iostream>
using namespace std;
//#include<bits/stdc++.h>
#include<limits.h>
int main()
{
    int i,min;
    int arr[10]={50,10,90,30,5,60,80,70,7,17};
    int size=10;
    min=INT_MAX;
    for(i=0;i<size;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    cout<<"min number is "<<min;
}
