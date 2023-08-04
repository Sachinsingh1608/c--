#include<iostream>
using namespace std;
int main(){
  for(int row=0;row<6;row++)
  {
    
    if(row==0|| row==5)
    {
      for(int prit=1;prit<5;prit++)
      cout<<"* ";
    }
    else
    {
      
        cout<<"* ";
        for(int spc=1;spc<3;spc++)
        {
          cout<<"  ";
        }
        cout<<"* ";
      }
      cout<<endl;
    }
  }
