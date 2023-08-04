#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> nums{1,2,3,4,6,7,8,9,10,16};
    int l=0;
    int h=nums.size()-1;
    int target=10;
    int flag=0;
    while(l<=h)
    {
        int mid=(l+h)>>1;
        if(nums[mid]==target)
        {
           flag=1;
            break;
        }
        else if(nums[mid]>target)
        {
            h=mid-1;
        }
        else{ 
           l=mid+1;
        }
    }
    if(flag==1)
    cout<<"mil gya";
    else
    cout<<"ni mila";
    return 0;
}