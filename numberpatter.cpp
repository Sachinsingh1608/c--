#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int col;
    for(int row=0;row<n;row++)
    {
        for(col=0;col<row+1;col++)
        {
            cout<<col+1<<" ";
       }
        for(int k=col;k>1;k--)
        {
            cout<<k-1<<" ";
        }
    
        cout<<endl;
    }
}