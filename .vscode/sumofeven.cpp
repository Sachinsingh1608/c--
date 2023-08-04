#include<iostream>
using namespace std;
int sumofeven();
int sumofeven(int a)
{
if(a==0)
return 0;
return a+sumofeven(a-2);
}
int main(){
    int n,x;
    cin>>n;
    x=sumofeven(2*n);
    cout<<x;
}