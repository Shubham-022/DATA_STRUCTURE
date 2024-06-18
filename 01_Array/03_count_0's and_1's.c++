#include<iostream>
using namespace std;
int main()
{
    int numzero = 0;
    int numone = 0;
    int arr[5]={1,0,0,1,0};
    for(int i=0;i<5;i++)
    {
        if(arr[i]==0)
        numzero++;
        if(arr[i]==1)
        numone++;
    } 
    cout<<"Total zero's is "<<numzero<<endl;
    cout<<"Total one's is "<<numone<<endl;

}