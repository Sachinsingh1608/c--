#include<iostream>
using namespace std;
int main(){
    //int n=1;
   int a;
//cout<<"hello world"<<endl;
//cout<<sizeof(int);  
//cout<<sizeof(string);
//cout<<endl;
int d,r=0;
cout<<"Enter a number ";
cin>>a;
while(a!=0){
d=a%10;
if(d==0)
{
    cout<<d;
    a/=10;
    continue;
}
else
{
r=r*10+d;
a=a/10;
//cout<<r;
}
if(r>0)
cout<<r;
}
}