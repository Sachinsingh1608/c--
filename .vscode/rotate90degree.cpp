#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> matrix{{1, 2, 3},{4, 5 ,6},{7, 8, 9}};
              vector<vector<int>> ans;
    int n=matrix.size()-1;
    for(int c=n;c>=0;c--){
        vector<int> temp;
        for(int i=0;i<=n;i++){
            temp.push_back(matrix[i][c]);
        }
        ans.push_back(temp);
    }
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans.size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}