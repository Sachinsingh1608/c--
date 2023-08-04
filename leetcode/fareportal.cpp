#include<bits/stdc++.h>
using namespace std;
int singleNum(int num)
{
    int tempNum=0;
    while(num!=0)
    {
        int rem= num %10;
        tempNum=rem+tempNum;
        num/=10;
    }
    cout<<tempNum;
    return tempNum;
}
int main()
{
    int num=98;
  while(num)
  {
    int x=singleNum(num);
    cout<<x<<endl;
    
    num=x;
    if(num<10)
    break;farepro
  }
  cout<<num;
  return 0;
}