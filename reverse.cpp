#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int rev_num=0,r;
    while(num!=0)
    {
        r=num % 10;  
        rev_num = rev_num * 10 + r;
        num = num / 10;
    }
    cout<<rev_num;
}