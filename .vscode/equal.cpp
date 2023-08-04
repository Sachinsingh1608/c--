#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,2} ;
    int n=3;
     for(int i=0;i<n;i++){
            int x=0;
             x=arr[i];
            x--;
            arr[i]=x;
            cout<<arr[i]<<"";
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=0)
            count++;
        }
 return 0;       
}