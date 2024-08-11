#include<iostream>
#include<string.h>
using namespace std;
bool Palindrome(char arr[])
{
    int start=0;
    int end=strlen(arr)-1;

    while(end>=start)
    {
        if(arr[start]==arr[end])
        {
            end--;
            start++;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char arr[]={'n','i','t','i','n'};
   int ans = Palindrome(arr);
    if(ans==true)
       cout<<"Number is Palindrome";
    else
       cout<<"Number is not Palindrome";

}
