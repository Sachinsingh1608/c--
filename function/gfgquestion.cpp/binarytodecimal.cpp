#include<iostream>
#include<cmath>
using namespace std;
int btod(int n)
{
    int i=0,ans=0;
    while(n>0)
    {
        int  bits=(n&1);
        //cout<<bits;
        ans=bits*pow(2,i++) + ans;
        n=n>>1;
        //i++;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<btod(n);
   //cout<<(s&1);
}