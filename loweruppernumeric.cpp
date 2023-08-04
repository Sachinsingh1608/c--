#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"enter a character";
    cin>>ch;
    if(ch>=33 || ch<=58)
    cout<<"character is capital :";
    else if(ch>=65 || ch<=90)
    cout<<"character is lower :";
    else if(ch>=0 || ch<=9)
    cout<<"numeric";
    else
    cout<<"no character ";
    }