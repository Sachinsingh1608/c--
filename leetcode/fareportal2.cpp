#include<bits/stdc++.h>
using namespace std;
// bool cmp(string a ,string b)
// {
//     int sumA=0;
//     for(int i=0;i<a.length();i++)
//     {
//         sumA+=int(a[i]);
//     }
//     int sumB=0;
//     for(int i=0;i<b.length();i++)
//     {
//         sumB+=int(b[i]);
//     }
//     if(sumA<=sumB)
//     return true;
//     return false;                                                                                                                                                                                                                                                                                                                                                                            

// }
int main()
{
    string s="hello,geeks,zero";
    vector<string> ans;
    string temp="";
    for(int i=0;i<s.length();i++)
    {
        
        if(s[i]==',')
        {
            ans.push_back(temp);
            temp="";
        }
        else{
            temp+=s[i];
        }

    }
ans.push_back(temp);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
    //return 0;
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<endl;
    }
    return 0;
}