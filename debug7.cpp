#include<iostream>
using namespace std;
int main(){
    int n;
    int k=2;
    int s;
    cin>>n;
    int t=n;
    int y=n;
    //ek kam chalana hai kiyuki last me alg se print krunga
    for(int i=0;i<n-1;i++){
          if(i==0){  
            // first row ke 12345..n print krega  
        for(int j=0;j<n;j++){
            cout<<j+1;
          
        }
          }
           else{
            //phle print phir spaces
                cout<<k;
                for(int s=0;s<=t-3;s++)
                {
                    cout<<" ";
                }
                 cout<<y;
                k++;
            }
            cout<<endl;
            // spaces ko kam krne ke liye 
            t--;
        }
        // last element ke liye
        cout<<y;
}
