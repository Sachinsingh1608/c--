#include<iostream>
using namespace std;
int main()
{
    char a[100];
    // cin>>a;
 // ye space ke band ho ja raha hai;
 cin.getline(a,50);
    for(int i=0;i<18;i++)
    cout<<a[i];
        return 0;    
}