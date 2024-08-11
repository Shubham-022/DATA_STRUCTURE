#include<iostream>
#include<string.h>
using namespace std;
void uppercase(char arr[])
{
    int n=strlen(arr);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>='a'&&arr[i]<='z')
        arr[i]=arr[i]-'a'+'A';
    }
}

void lowercase(char arr[])
{
    int n=strlen(arr);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>='A'&&arr[i]<='Z')
        {
           arr[i]=arr[i]-'A'+'a';
        }
    }
}
int main()
{
    char arr[1000];
    
    cin.getline(arr,50);
    cout<<"your string : ";
    cout<<arr<<endl;
    
    uppercase(arr);
    cout<<"in Uppercase : ";
    cout<<arr<<endl;
    
    lowercase(arr);
    cout<<"in Lowercase : ";
    cout<<arr;   
    
}