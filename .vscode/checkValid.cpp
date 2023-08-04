#include <bits/stdc++.h>
using namespace std;
bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int first=1;
        for(int i=0;i<n;i++)
        {
            sort(matrix[i].begin(),matrix[i].end());
        }
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(first==matrix[i][j])
               first++;
           }
           if(first!=(n-1))
           return false;
       }
       first=1;
        for(int i=0;i<n;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(first==matrix[j][i])
               first++;
           }
           if(first!=(n-1))
           return false;
       }
       return true;
}
int main()
{
   vector<vector<int>> matrix{{1,2,3},{3,1,2},{2,3,1}};
   bool x=checkValid(matrix);
   if(x)
   cout<<"mil gya";
   else
   cout<<"ni mila";
    for(int i=0;i<matrix.size();i++)
       {
           for(int j=0;j<matrix[0].size();j++)
           {
            cout<<matrix[i][j]<<" ";
           }
           cout<<endl;
       }
}