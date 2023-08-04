#include<iostream>
using namespace std;
int main()
{
    char name[100];
    // cin>>a;
 // ye space ke band ho ja raha hai;
 cin.getline(name,50);
   for(int i=0;name[i]!=0;i++){
    //if(name[i]>=65 && name[i]<=91)
    name[i]=name[i]-32;
   } 
   cout<<name;  
}