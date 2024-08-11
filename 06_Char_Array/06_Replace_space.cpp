#include<iostream>
#include<string.h>
using namespace std;

void replaceSpaces(char string[])
{
    int n=strlen(string)-1;
    for(int i=0;i<n;i++)
    {
        if(string[i]==' ')
        string[i]='@';
    }
    cout<<"Replace space is : "<<endl<<string;
}
int main()
{
    char string[100];
    cin.getline(string,100);
    replaceSpaces(string);

}