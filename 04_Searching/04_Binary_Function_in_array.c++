#include<iostream>
#include<algorithm>
using namespace std;
int main()
{   int size=10;
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    //Binary search function give a output in true or false;
    if(binary_search(arr,arr+size,70))
       cout<<"Found";
    else
       cout<<"NOT Found";
}