#include<iostream>
#include<vector>;
using namespace std;
int soln(vector<int>arr)
{
    int start=0;
    int end=arr.size();
    int mid=start+((end-start)/2);

    while(start<=end)
    {
        if(start==end)
        return start;

        if(mid%2==0)
        {
            if(arr[mid]==arr[mid+1])
            start=mid+2;
            else
            end=mid;

        }
        else
        {
            if(arr[mid]==arr[mid-1])
            start=mid+1;
            else
            end=mid-1;

        }
        mid=start+((end-start)/2);


    }
    return -1;
}
int main()
{
    vector<int>arr{1,1,2,2,3,3,4,4,5,6,6};
    int ans=soln(arr);
    cout<<"Index is "<<ans<<endl;
    cout<<"Element is  "<<arr[ans];

}