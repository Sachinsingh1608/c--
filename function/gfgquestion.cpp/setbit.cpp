#include<iostream>
using namespace std;
int main()
{
     int n=-3;
    cout<<n;
    int counter=0;
    while(n!=0)
    {
        if(n&1==1)
        {
            counter++;
           
        }
         n=n>>1;

    }
    cout<<counter;
}