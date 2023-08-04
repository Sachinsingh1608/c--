#include<iostream>
using namespace std;
int s();
int s(int n)
{
    cout<<n;
    return n;
}
int main()
{
    cout<<s(3);
}