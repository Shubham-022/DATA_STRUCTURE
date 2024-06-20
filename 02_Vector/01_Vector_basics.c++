#include<iostream>
#include<vector>
using namespace std;
int main()
{     cout<<"Type 1"<<endl;
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    vector<int>arr(n);
    arr.push_back(5);
    arr.push_back(6);
    cout<<"size of vector "<<arr.size()<<endl;
    cout<<"empty "<<arr.empty()<<endl;
    cout<<"capacity "<<arr.capacity()<<endl;
    for (int i = 0; i<arr.size(); i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    


    cout<<"Type 2"<<endl;
    vector<int>brr;
     brr.push_back(5);
    brr.push_back(6);
    cout<<"size of vector "<<brr.size()<<endl;
    cout<<"empty "<<brr.empty()<<endl;
    cout<<"capacity "<<brr.capacity()<<endl;
    for (int i = 0; i <brr.size(); i++)
    {
       cout<<brr[i]<<" "<<endl;
    }
    
      cout<<endl<<endl;


    cout<<"Type 3"<<endl;
    vector<int>crr(10);

     crr.push_back(5);
    crr.push_back(6);
    cout<<"size of vector "<<crr.size()<<endl;
    cout<<"empty "<<crr.empty()<<endl;
    cout<<"capacity "<<crr.capacity()<<endl;
    for (int i = 0; i <crr.size(); i++)
    {
       cout<<crr[i]<<" ";
    }



     cout<<endl<<endl;

      
    cout<<"Type 4"<<endl;
       vector<int>drr(10,50);
      // drr.push_back(5);
      // drr.push_back(6);
      drr.pop_back();
      drr.pop_back();
      drr.pop_back();
    cout<<"size of vector "<<drr.size()<<endl;
    cout<<"empty "<<drr.empty()<<endl;
    cout<<"capacity "<<drr.capacity()<<endl;
    for (int i = 0; i <drr.size(); i++)
    {
       cout<<drr[i]<<" ";
    }


    

     cout<<endl<<endl;

      
    cout<<"Type 5"<<endl;
    vector<int>err{10,20,30};

       err.push_back(5);
       err.push_back(6);

    cout<<"size of vector "<<err.size()<<endl;
    cout<<"empty "<<err.empty()<<endl;
    cout<<"capacity "<<err.capacity()<<endl;
    for (int i = 0; i <err.size(); i++)
    {
       cout<<err[i]<<" ";
    }
}