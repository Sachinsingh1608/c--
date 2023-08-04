#include<iostream>
using namespace std;
void rev();
void rev(int n)
{
if(n>0)
    rev(n/10);
    cout<<n;

}
int main()
{
    int n;
    cin>>n;
    rev(n);

}