#include<iostream>
using namespace std;
int main()
{
    
    int n;
    int i=1,j=1;
    cout<<"enter a value :";
    cin>>n;
    while(i<=n)
    {
        while(j<=n)
        {
            cout<<" "<<i;
            j++;
        }
        cout<<"  "<<endl;
        i++;
        j=1;

    }

}