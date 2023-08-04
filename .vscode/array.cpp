#include<iostream>
using namespace std;
int  main()
{
    string s[8]={"c","o","m","p","u","t","e","r"};
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<s[j]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<8;i++)
    {
        cout<<s[i]<<" ";
    }
}