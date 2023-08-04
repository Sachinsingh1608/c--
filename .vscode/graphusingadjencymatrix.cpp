#include<iostream>
using namespace std;
int main()
{
    int graph[20][20]={0};
    int x,y,E,V,dir=1;
    cout<<"enter number of vertex and edge"<<endl;
    cin>>V>>E;
    cout<<"Press 1 for directed graph otherwise 0 for undirected graph"<<endl;
    cin>>dir;
    for(int i=1;i<=E;i++)
    {
        int d=0;
        cout<<"Enter source and destinaton"<<endl;
        cin>>x>>y;
        cout<<"distance of x and y"<<endl;
        cin>>d;
        if(x<=V && y<=V)
        {
            // for weighte  graph put to distance of that source to destination
            graph[x][y]=d;
            if(dir=0)
            graph[y][x]=d;
        }
        else 
        cout<<"Invalid"<<endl;
    }
    for(int i=1;i<=V;i++)
    {
        for(int j=1;j<=V;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}