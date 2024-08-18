#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool cmp(char x,char y)
{
    return x>y;
}
int main()
{
    string s="shubham";
    sort(s.begin(),s.end(),cmp);
    cout<<s;
}