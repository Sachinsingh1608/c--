#include<iostream>

using namespace std;
int main()
{
    int graph[20][20]={0};
    int v,e,x,y,dir=1;
    cout<<"enter number of vertex an edge"<<endl;
    cin>>v>>e;
    cout<<"press 1 for directed graph otherwise 0 for undirected graph"<<endl;
    cin>>dir;
    for(int i=1;i<=e;i++)
    {
        int dist=0;
        cout<<"Source and destination "<<endl;
        cin>>x>>y;
        cout<<"enter distance x and y"<<endl;
        cin>>dist;
        graph[x][y]=dist;
        if(dir==0)
        graph[y][x]=dist;


    }
    for(int i=1;i<=v;i++)
    {
        for(int j=1;j<=v;j++)
        {
        cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }

}