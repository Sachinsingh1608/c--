#include<iostream>
using namespace std;
 int count(int n )
    {
        int x=0;
        while(n)
        {
            if((n&1)==1)
            {
                x++;
                n=n>>1;
            }
            else
            n=n>>1;
        }
        return x;
    }
    int main()
    {

    }