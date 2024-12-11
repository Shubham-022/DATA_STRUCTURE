//indexing start from 0th stair

#include<iostream>
using namespace std;
int ClimbStairs(int n)
{
     //Base case 1
     if(n==0)
     return 1;
     //base case 2
     if(n==1)
     return 1;

     //1 case solve kro baki recursion sambhal lega;
     int ans=ClimbStairs(n-1)+ClimbStairs(n-2);
     return ans;

}
int main()
{
     int n;
     cout<<"Write number of stairs ";
     cin>>n;
     cout<<ClimbStairs(n);
}