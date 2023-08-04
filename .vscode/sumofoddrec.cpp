#include<iostream>
using namespace std;
int sumofodd();
int sumofodd(int a)
{
if(a==1)
return 1;
return a+sumofodd(a-2);
}
int main()
{
    int n,x;
    cout<<"Enter a number ";
    cin>>n;
x=sumofodd(2*n-1);
cout<<x;
}