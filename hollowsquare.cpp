#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<1;row++)
    {
        for(int col=0;col<n;col++)
        {
            cout<<"* ";
        }
    }
    cout<<endl;
    for(int row=0;row<n-2;row++)
    {
        for(int col=0;col<n;col++)
        {
            if(col==0|| col==n-1)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
           
        }
        cout<<endl;     
    }
      for(int row=0;row<1;row++)
    {
        for(int col=0;col<n;col++)
        {
            cout<<"* ";
        }
    }
}