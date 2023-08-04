#include<iostream>
using namespace std;
int main()
{
    int n=INT32_MIN;
    cout<<n;
    int arr[]={1,5,6,8,4,7,89,100,5,6,8};
    for(int i=0;i<11;i++)
    {
        if(n<arr[i])
        n=arr[i];
    }
    cout<<n;
}