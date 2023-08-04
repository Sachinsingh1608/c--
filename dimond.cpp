 #include<iostream>
 using namespace std;
 int main()
 {
    int n,i,s;
    cin>>n;
 for(int row=0;row<n;row++)
    {
        for(int col=row+1;col<=n-1;col++)
        {
            cout<<" ";
        }
        for(int  str=0;str<=i;str++)
        {
            cout<<"* ";
        }
        cout<<endl;
        i++;
    }
    s=n;
     for(int row=0;row<n;row++)
    {
        for(int col=0;col<row;col++)
        {
            cout<<" ";
        }
        for(int i=0;i<s;i++)
        {
            cout<<"* ";
        }
        s--;
        cout<<endl;
    }
 }