#include<iostream>
using namespace std;
int main()
{
    int a[10]={1,2,3,4};
    int idx=-1;
    for(int i=0;i<10;i++)
    {
        if(a[i]=='\0')
        {
            idx=i;
            break;
        }
    }
    a[idx]=5;
    for(int i=0;i<=idx;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
