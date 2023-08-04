#include<iostream>
using namespace std;
int main()
{
    int a[4]={2,10,5,6};
    int temp,i,j;
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            
            }
           
        }
    }
     for(int i=0;i<4;i++)
            {
                cout<<a[i]<<"\t";
            }

}