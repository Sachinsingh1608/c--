#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<vector<int> >debug v={{2,3,4,5},{6,7,7,8},{9,9,0,1}};
    int m=v.size();
    int n=v[0].size();
    for(int col=0;col<n;col++)
    {
        if((col&1)==0)
        {
            for(int i=0;i<m;i++)
            {
                cout<<v[i][col]<<" ";
            }
        }
        else{
            for(int i=m-1;i>=0;i--)
            {
                cout<<v[i][col]<<" ";
            }
        }
    }
    return 0;
}