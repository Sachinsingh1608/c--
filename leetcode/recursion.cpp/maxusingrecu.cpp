#include<iostream>
using namespace std;
int maxElementArr(int arr[],int i,int n,int max)
{
    if(i>=n)
    return max;
    if(max<arr[i])
    max=arr[i];
    return maxElementArr(arr,i+1,n,max);
}
int main()
{
    int arr[]={2,5,67,98};
    int i=0;
    int max=INT_MIN;
    int n=4;
    int ans=maxElementArr(arr,i,n,max);
    cout<<ans;
    return ans;
}