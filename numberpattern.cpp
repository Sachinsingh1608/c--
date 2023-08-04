#include<iostream>
using namespace std;
int main()
{
    int j=0;
    int col;
  int   k=7;
    for(int row=0;row<5;row++)
    {
        if(row==0)
        {
            for(col=0;col<6;col++)
            {
                cout<<col+1<<" ";
            }
        }
        else{
            cout<<"1 ";
            //col++;
            for(j=2;j<=k-2;j++)
            {
                cout<<"  ";
            }
            cout<<j<<" ";

        }
        cout<<endl;
        k--;
        j++;

    }
    cout<<"1 ";
}