#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int i=0;
    for(int row=0;row<n;row++)
    {
        for(int col=row+1;col<=n-1;col++)
        {
            cout<<" ";
        }
        for(int  str=0;str<=i;str++)
        {
            cout<<"* ";
        }
        cout<<endl;
        i++;
    }
    
}