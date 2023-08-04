#include<iostream>
using namespace std;
int main()
{
    int n;
    int s;
    cin>>s;
    n=s;
    for(int row=0;row<s;row++)
    {
        for(int col=0;col<=row;col++)
        {
            cout<<" ";
        }
        for(int i=0;i<n;i++)
        {
            cout<<"* ";
        }
        n--;
        cout<<endl;
    }
}