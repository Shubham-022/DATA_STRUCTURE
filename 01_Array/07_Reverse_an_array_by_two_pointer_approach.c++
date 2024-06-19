//with function
//both codes is done by "two pointer approach"
#include<iostream>
using namespace std;

void reverse(int arr[],int size)
{
    int start = 0;
    int end = size-1;
     while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }   
}
int main()
{
    int size = 7;
    
    int arr[7]={1,2,3,4,5,6,7};
 
     for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    reverse(arr,size);
    
    cout<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}


//easy way

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[7]={1,2,3,4,5,6,7};
//     int size = 7;
//     int start = 0;
//     int end = size-1;
//      for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     while(start<end)
//     {
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }