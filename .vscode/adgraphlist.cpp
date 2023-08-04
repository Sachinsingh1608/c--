// for undirected graph;
#include<bits/stdc++.h>
using namespace std;
void add(vector<int> adj[],int s,int des)
{
    adj[s].push_back(des);
    adj[des].push_back(s);
}
void printedge(int v,vector<int> adj[])
{
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
int main()
{
    int v;
    cout<<"Enter number of vertex";
    cin>>v;
    vector<int> adj[v];
    add(adj,0,1);
    add(adj,2,3);
    add(adj,3,4);
    add(adj,4,1);
    //add(adj,1,0);
    printedge(v,adj);
    return 0;
}