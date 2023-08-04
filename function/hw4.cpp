#include<iostream>
using namespace std;
void prime(int);
void prime(int num)
{
    int counter=0;
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
          counter++;
        }
    }
    if(counter==0)
    {
        cout<<"Prime number";
    }
    else
    cout<<"Not Prime number";
}
int main()
{
    int num;
    cout<<"Enter a number";
    cin>>num;
    prime(num);
    return 0;
}