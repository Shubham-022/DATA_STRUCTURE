#include<iostream>
#include<strings.h>
using namespace std;
int main()
{
    string str="shubham";
    
    
    //Function one
    cout<<"length of string : "<<str.length()<<endl<<endl;
    
    //Function two
    if(str.empty()==1)
       cout<<"string is : empty"<<endl<<endl;
    else
       cout<<"string is : not empty"<<endl<<endl;
       
    //Function three
    str.push_back('s');
    cout<<str<<endl<<endl;
       
    //Function four
    cout<<"Sub string : "<<str.substr(2,4)<<endl<<endl;
    
    //Function five
     string s1="Iron man";
     string s2="Hu me";
     
     if(s1.compare(s2)==0)
         cout<<"both Strings are equal"<<endl<<endl;
     else
         cout<<"both Strings are not equal"<<endl<<endl;
    
    //Function 6
    cout<<"Man is Present at index : "<<s1.find("man")<<endl<<endl;
    
    //Function 7
    s1.replace(5,3,"Women");
    cout<<"Replace Index is : "<<s1;
    
         
         
}