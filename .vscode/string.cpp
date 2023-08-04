#include<bits/stdc++.h>
using namespace std;
int countnumber(string t){
        for(int i=0;i<t.length();i++){
            if(t[i]=='0'||t[i]=='1'||t[i]=='2'||t[i]=='3'||t[i]=='4'||t[i]=='5'||t[i]=='6'||t[i]=='7'||t[i]=='8'||t[i]=='9')
            return (t[i]-'0');
            
        }
       
            return t.length();
}
int main()
{
    vector<string> strs={"alic3","bob","3","4","00000"};
     vector<int> ans;
        for(int i=0;i<strs.size();i++)
        {
            string x=strs[i];
            ans.push_back(countnumber(x));
        }
        int max=-1;
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<" ";
        }
        for(int i=0;i<ans.size();i++){
            if(max<ans[i])
            max=ans[i];
        }
        cout<<max;
}