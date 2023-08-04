#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector<int> temp;
    // vector element;
    temp.push_back(23);
     temp.push_back(24);
    //  cout<<temp[0]<<temp[1]<<endl;
    //emp.pop_back();
    //  cout<<temp[1]<<endl;
    //  for(int i=0;i<temp.size();i++)
    //  {
    //     cout<<temp[i]<<endl;
    //  }
     temp.erase(temp.begin()+1);
     //temp.clear();
// for(int i=0;i<temp.size();i++)
// {
//     cout<<temp[i];
// }
cout<<temp[0];
    return 0;
}