#include<iostream>
#include<cmath>
using namespace std;
int binaryToDecimal(int b){
    int ans=0;
    int c=0,i=0;
    while(b)
    {
        c=b%10;
        ans=c*pow(2,i++)+ans;
        b=b/10;
    }
    return ans;
}
int main()
{
int n;
cout<<"Enter a Binary number";
cin>>n;
cout<<"Decimal value of "<<n<<" is  "<<binaryToDecimal(n);
return 0;
}