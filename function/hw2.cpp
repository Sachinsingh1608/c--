#include<iostream>
using namespace std;
void evenodd(int num);
void evenodd(int num)
{
    if(num%2==0)
    {
        cout<<"Even";
    }
    else
    {
        cout<<"odd";
    }

}
int main()
{
    int  num;
    cout<<"Enter a number:=";
    cin>>num;
    evenodd(num);
}