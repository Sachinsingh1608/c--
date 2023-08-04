#include<iostream>
using namespace std;
bool sortArrAcheck(int &arr[],int n,int i)
{
    if(i==n)
    return true;
    if(arr[i]>arr[i+1])
    return false;
  // f=arr[i];
   return  sortArrAcheck(arr,n,i+1);

}
int main()
{
    int arr[]={2,4,6,7,5};
    int n=5;
    int i=0;
    //int first=arr[0];
    bool x=sortArrAcheck(arr,n,i);
    if(x)
    cout<<"sorted array";
    else
    cout<<"not sort";
    return 0;
}