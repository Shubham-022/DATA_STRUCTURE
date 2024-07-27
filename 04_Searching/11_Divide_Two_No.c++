#include<iostream>
using namespace std;

int solve(int dividend,int divisor)
{    
    if(divisor==0)
    return 0;

      dividend=abs(dividend);
      divisor=abs(divisor);

    int start=0;
    int end=dividend;
    int mid=start+((end-start)/2);
    int soln=0;
    while(start<=end)
    {
        if(mid*divisor==dividend)
        {
          soln=mid;
          break;
        }
        else if(mid*divisor<dividend)
        {
           soln=mid;
           start=mid+1;
        }
        else
        {
        end=mid-1;
        }
        mid=start+((end-start)/2);
    }
    return soln;
}
int main()
{
    int dividend=-22;
    int divisor=-7;
    int ans=solve(dividend,divisor);

    if((dividend<0)&&(divisor<0)||(dividend>=0)&&divisor>=0)
       cout<<"Quationt is "<<ans;
    else
    cout<<-ans;
}