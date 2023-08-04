#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
      int n=x;
        int r,rev =0;
        while(x!=0)
        {
            r=x%10;
            rev=rev*10+r;
            x=x/10;
        }
        if(rev<INT32_MAX||rev>INT32_MIN)
        cout<<0;
        else if(rev<0)
        {
            cout<< "false";
        }
        else if(rev==n)
        cout<< "true";
        else
        cout<< "false";
        
    }
