#include<iostream>
using namespace std;
void printArray(int arr[],int i,int &n){
    if(i>=n)
    return ;
    cout<<arr[i]<<" ";
    printArray(arr,i+1,n);
}
int mian()
{
    int arr[]={2,3,4,5,6};
    int n=5;
    int i=0;
    printArray(arr,i,n);
}