#include<iostream>
using namespace std;
int reverse(int num);
int reverse(int num)
{
    int rem,rev=0;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    return rev;
}
int main()
{
    int n;
    cout<<"Enter a number";
    cin>>n;
    cout<<"Reverse of a number is:="<<" "<<reverse(n);
    return 0;
}