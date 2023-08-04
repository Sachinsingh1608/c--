#include<iostream>
using namespace std;
int main()
{
    int a[]={2,4,1,3,5};
    int n=5;
     int max=a[0];
         int smax=-1;
         int tmax=-1;
         for(int i=0;i<n;i++)
         {
             if(max<a[i])
             {
                 tmax=smax;
                 smax=max;
                 max=a[i];
             }
             else if(smax<a[i] && max>a[i])
             {
                 tmax=smax;
                 smax=a[i];
             }
             else if(tmax<a[i] && smax>a[i])
             {
                 tmax=a[i];
             }
         }
         cout<<tmax;
         return 0;
         
}