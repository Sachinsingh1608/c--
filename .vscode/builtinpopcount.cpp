#include<bits/stdc++.h>
using namespace std;
bool cmd(int x,int y)
{
    return _builtin_popcount(x)>_builtin_popcount(y);
}
int main()
{
    vector<int> a={2,3,4,5,6,88,9};
    sort(a.begin(),a.end(),cmp);
}