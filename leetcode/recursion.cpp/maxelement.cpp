#include<iostream>
using namespace std;
int maxi(int arr[],int n,int i){
    int max=INT32_MIN;
    if(i>=n-1)
    return max;
    if(arr[i]>max)
    max=arr[i];
    cout<<arr[i]<<" ";
    maxi(arr,n,i+1);
    return max ;
}
int main()
{
    int arr[6]={2,4,7,9,10,60};
    int i=0;
    int n=6;
    int ans=maxi(arr,n,i);
    cout<<ans;
}