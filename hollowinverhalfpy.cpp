#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
      for(int row=0;row<1;row++)
    {
        for(int col=0;col<=n;col++)
        {
            cout<<"* ";
        }
    }
    cout<<endl;
    int s=n;
      for(int row=0;row<n;row++)
    {
        for(int col=0;col<s;col++)
        {
            if(col==0|| col==s-1)
            {
              cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
            
        }
        s--;
        cout<<endl;
    }

}