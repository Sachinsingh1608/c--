#include<iostream>
using namespace std;
int main()
{
    int n=824883294;
 if(n==0)
    return 0;
     if(n<10)
     return 1;
     if(n==10)
     return 2;
     int count=2;
     for(int i=11;i<=n;i++)
     {
         int x=i;
         while(x!=0)
         {
             int rem=x%10;
             if(rem==1){
             count++;
             x/=10;
             }
             else
             x/=10;
         }
      }
      cout<<count;
}