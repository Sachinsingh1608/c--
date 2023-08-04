#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
cout<<endl;
for(int row=0;row<n-1;row++)
{
    for(int col=0;col<2*row+1;col++)
    {
        if(col==0)
        {
            cout<<"1";
        }
        else if(col>=1 && col<=2*row-1)
        {
            cout<<" ";
        }
        else if(col==2*row)
        {
            cout<<row+1;
        }
        
    }
    cout<<endl;
}   
for(int col=0;col<n;col++)
{
    cout<<col+1<<" ";
}
}
