#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int>> mat{{0,0,0,1},{0,3,1,0},{0,5,2,0},{4,0,0,2}};
    int count=0;
          int notZero=0;
          int n=mat.size();
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
               if((i==j)||(i+j+1==n))
               {
                   if(mat[i][j]==0)
                   cout<<"mil gya zero";
               }
               else
               {
                   if(mat[i][j]!=0)
                   cout<<"mil gya zero";
               }
           }
       }
       cout<<"mila hi ni";
       return 0;
}

