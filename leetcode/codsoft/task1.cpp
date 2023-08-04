// NUMBER GUESSING GAME
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
   cout<<"Guess the Number"<<endl;
    cin>>num;
    cout<<"*******************************************"<<endl;
    int randNum=rand();
    int round=1;
    while(num!=randNum){
        cout<<"************"<<endl;
         cout<<"Round:-"<<++round<<endl;
        if(num>randNum)
        {
            int diff=num-randNum;
            if(diff<50)
            cout<<"Number is  High"<<endl;
            else{
                cout<<"Number is too High"<<endl;
            }
           // cout<<"Round:-"<<round++;
            int x;
            cout<<"Guess the number:- "<<endl;
            cin>>x;
            num=x;
        }
        else{
            int diff=randNum-num;
             if(diff<50)
            cout<<"Number is low "<<endl;
            else{
                cout<<"Number is too Low"<<endl;
            }
            int x;
            cout<<"Guess the number:- "<<endl;
            cin>>x;
            num=x;
        }
    }
    cout<<"Correct Number";
    return 0;
}