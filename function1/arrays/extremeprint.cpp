#include<iostream>
using namespace std;
int main()
{
    int ar[]={2,34,5,6,7,8,8,9,10};
    int start=0;
    int size=9;
    int end=size-1;
    while(start<=end)
    {
        // if(start==end)
        // cout<<ar[start]<<" ";
        // else
        // {
        //     cout<<ar[start]<<" ";
        //     cout<<ar[end]<<" ";
        // }
        // start++;
        // end--;
        swap(ar[start],ar[end]);
        start++;
        end--;
    }
    for(int i=0;i<9;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}