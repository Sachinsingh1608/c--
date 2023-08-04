#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cout<<endl;
    int s=2*n-3;
    int x=2;
    for(int col=0;col<n;col++)
{
    cout<<col+1<<" ";
}
cout<<endl;
for(int row=0;row<n-1;row++)
{
    
    for(int col=0;col<s;col++)
    {
      if(col==0)
      {
        cout<<x;
      }
      else if(col==s-1)
      cout<<n;
      else
      cout<<" ";
    }
    x++;
    s=s-2;
    cout<<endl;
}
}