#include<iostream>
using namespace std;
int main()

{
    int j=0;
    int row=0;
    int k=0;
    for(row=0;row<5;row++)
    {
        if(row==0)
        {
            for(k=0;k<6;k++)
            {
            cout<<"* ";
            }
        }
        else
        {
            cout<<"* ";
            for( j=0;j<k-2;j++)
            {
                cout<<"  ";
            }
            
            cout<<"* ";
        }
       cout<<endl;
        j++; 
        k--;
    }
    cout<<"* ";
    
}
    
