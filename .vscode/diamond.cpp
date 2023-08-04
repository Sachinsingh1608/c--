#include<iostream>
using namespace std;
int main()
{
    // s ke liye  lope ke baad j wala phr wahi start ho raha hai 
   int s=3;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<s;j++)
        {
            
            cout<<" ";
        }
       for(int k=0;k<2*i+1;k++)
       {
         if(k==0||k==2*i)
         {
            cout<<"*";
         }
         else
         {
            cout<<"1";
         }
       }
       s--;
       cout<<endl;
    }
    //second triangle ke liye 
    s=0;
    int x=4;
    // k ka value vanish ho ja raha hai
    int k;
    for(int i=0;i<4;i++)
    {
        for(int l=0;l<s;l++)
        {
            cout<<" ";
        }
        for(k=0;k<2*x-1;k++)
        {
            if(k==0||k==2*x-2)
            {
                cout<<"*";
            }
            else
            cout<<"1";
        }
        s++;x--;
        cout<<endl;
    }


 
}