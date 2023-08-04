#include<iostream>
using namespace std;
void printsumcol();
void printsumcol(int arr[][3],int row,int col)
{
for(int i=0;i<row;i++)
{
    int sum=0;
    for(int j=0;j<col;j++)
    {
       sum=sum+arr[j][i];
    }
    cout<<sum<<endl;
}
}
int main()
{
    int arr[3][3]={{2,4,5},{4,6,7},{1,4,5}};
    int row=3;
    int col=3;
    printsumcol(arr,row,col);
}