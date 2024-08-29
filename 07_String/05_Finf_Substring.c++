#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string a = "letsodaliyehhmto";
    string b = "";
    for(int i=0;i<=(a.length()-b.length());i++)
    {
    
        if(a.substr(i,b.length())==b)
        {
        cout<<i;
        return 0;
        // break;
        
        }
        
    }
    cout<<"-1";
}