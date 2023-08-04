#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=6;
     int i=0;
        int j=n-1;
        long ans[n];
        int s=0;
        while(s<n)
        {
            if(i==j){
             ans[s++]=arr[j];
             cout<<ans[s]<<" ";
            }
            ans[s++]=arr[j];
            cout<<ans[s]<<" ";
             ans[s++]=arr[i];
             cout<<ans[s]<<" ";
            j--;
            i++;
        }
        cout<<endl;
        for(int k=0;k<n;k++)
        arr[k]=ans[k];
        for(int k=0;k<n;k++)
        cout<<arr[i]<<" ";
        return 0;
}