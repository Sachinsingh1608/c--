#include<iostream>
using namespace std;
int main()
{
    int arr[4][4]={{0, 1, 1, 1},
                  {0, 0, 1, 1},
                  {1, 1, 1, 1},
                  {0, 0, 0, 0}};
    int x=-1;
    int n=4;
    int m=4;
	    for(int i=0;i<n;i++)
	    {
	         int countOne=0;
	        for(int j=0;j<m;i++)
	        {
	            if(arr[i][j]==1)
	            {
	                countOne++;
	            }
	        }
	        x=max(x,countOne);
	    }
	   cout<<x;
       return 0;
}
