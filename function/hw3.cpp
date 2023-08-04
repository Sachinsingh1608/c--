#include<iostream>
using namespace std;
long long fact(int num);
long long  fact(int num)
{
    // long long isliye use kiye kiyuki int ka range me 12 tk fact. nikal sakte 
    long long  fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int num;
    cout<<"Enter a number";
    cin>>num;
    cout<<"Factorial of number is:="<<fact(num);
}