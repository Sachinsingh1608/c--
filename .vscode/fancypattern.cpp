#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
    for(int col=0;col<row+1;col++)
    {
        cout<<row+1;
        if(col<=row-1)
        {
            cout<<"*";
        }
    }
        cout<<endl;
    }
    int s=n;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n-row;col++)
        {
            cout<<s;
            if(col<n-row-1)
            {
                cout<<"*";
            }
        }
        s--;
        cout<<endl;
    }
}