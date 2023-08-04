#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr={10,5,0,3,89,0,8,7,5,4,3,5,6,7};
    int target=24;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            for(int k=j+1;k<arr.size();k++)
            {
                for(int l=k+1;l<arr.size();l++)
                {
                    if(arr[i]+arr[j]+arr[k]+arr[l]==target)
                    {
                        cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" "<<arr[l]<<endl;
                    }
                }
            }
        }
    }
}