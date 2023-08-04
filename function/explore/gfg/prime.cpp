#include<iostream>
using namespace std;
int main()
{
    int n,rem,sum=0;
    cin>>n;
    while(n!=0)
    {
        rem=n%10;
     for(int i=2;i*i<rem;i++)
     {
        if(rem%i!=0)
        {
         sum=sum+rem;
         n=n/10;
        }
        else
        {
            n=n/10;
        }
     }
    }
    cout<<sum;
}