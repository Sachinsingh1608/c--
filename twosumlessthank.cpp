#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int exactAns=-1;
    int target=70;
    vector<int> nums={25,45,76,78,12,34,67};
    sort(nums.begin(),nums.end());
    int i=0;
    int j=nums.size()-1;
    while(i<j)
    {
        int sum=nums[i]+nums[j];
        if(sum>target)
        j--;
        else
        {
           exactAns=sum;
           i++;
        }
    }
    cout<<exactAns;
}