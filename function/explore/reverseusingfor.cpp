#include<iostream>
using namespace std;
int main();
int main()
{
    int n=623;
    int rem,sum=0;
    for(n;n!=0;)
    {
        rem=n%10;
        sum=sum*10+rem;
        n/=10;
    }
cout<<rem;
}
