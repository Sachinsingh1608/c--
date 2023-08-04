#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="11110011";
      int countOnes=0;
        int countO=0;
        for(int i=0;i<s.length();i++)
        {
            
            if(s[i]==1)
            {
                countO++;
            }
            else
            {
                cout<<countO<<endl;
                countOnes=max(countOnes,countO);
                cout<<countOnes<<endl;
                countO=0;
            }
        }
        countOnes=max(countOnes,countO);
        cout<<"last one"<<countOnes;
        int countZero=0;
          int countZ=0;
        for(int i=0;i<s.length();i++)
        {
          
            if(s[i]==0)
            {
                countZ++;
            }
            else
            {
                countZero=max(countZero,countZ);
                countZ=0;
            }
        }
         countZero=max(countZero,countZ);
         cout<<countZero<<" "<<countOnes;
         return 0;
}