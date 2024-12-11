//Inclide and Exclude Method
//Very important concept
//#subsets,#powerset,#subsequences
#include<iostream>
#include<string>
using namespace std;
void Subsets(string str,string output,int i)
{
    //base case
    if(i==str.length())
    {
    cout<<output;
    return ;
    }

    //exclude
    Subsets(str,output,i+1);

    //include
    output.push_back(str[i]);
    Subsets(str,output,i+1);
}
int main()
{
    string str="abc";
    string output=" ";
    int i=0;
    Subsets(str,output,i);

}