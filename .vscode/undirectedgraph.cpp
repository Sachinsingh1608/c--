#include <bits/stdc++.h>
using namespace std;
void add(vector<int> adj[],int x,int y){
  adj[x].push_back(y);  
}
void print(vector<int> adj[] , int v){
for(int x=0;x<v;x++)
    {
        cout<<x;
        for(auto s :adj[x])
        {
            cout<<"->"<<s;
        }
        cout<<endl;
   
}
}

int main(){
    int vertex;
    cout<<"Enter a vertex";
    vector<int> adj[vertex];
    add(adj,1,2);
    add(adj,2,3);
    add(adj,3,4);
    add(adj,4,1);
    print(adj,vertex);
    return 0;


    
}