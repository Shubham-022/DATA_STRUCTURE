//leetcode 179;
//easy h thoda time lga byt samjh gya;
#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
using namespace std;
//making comparator function for sort in decending order;
static bool cmp(string x,string y)
{
    string t1=x+y;
    string t2=y+x;
   return t1>t2;
}
int main()
{
    
    vector<int>nums={3,30,34,5,9};
    vector<string>str;

    for(int i=0;i<nums.size();i++)
    {
        str.push_back(to_string(nums[i]));  //converting integer vector into string vector
    }
       sort(str.begin(),str.end(),cmp);     
       
       string ans="";  //mergeing all string of vector into single string;
       for(int i=0;i<str.size();i++)
       {
           ans=ans+str[i];
       }
       cout<<ans;
       
}