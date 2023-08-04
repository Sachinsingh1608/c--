#include<iostream>
using namespace std;
int main()
{
    int a[] = {1, 5, 3, 2};
    int n=4;
    int x=n/2-1;
       int sum1=0;
       for(int i=0;i<=x;i++)
       {
           sum1+=a[i];
       }
       int sum2=0;
        for(int i=x+1;i<n;i++)
       {
           sum2+=a[i];
       }
       cout<<abs(sum1-sum2);
}