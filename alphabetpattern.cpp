#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int col;
    char ch='A';
    
    for(int row=0;row<n;row++)
    {
        for(col=0;col<row+1;col++)
        {
            int ans=col+1;
            char ch=ans+'A' -1;
            cout<<ch<<" ";            
       }
        for(int col=row;col>=1;col--)
        {
           int ans =col;
           char ch=ans+'A'-1;
           cout<<ch<<" ";
        }
    
        cout<<endl;
    }
}