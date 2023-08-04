#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums={1,2,3,4,4,5,6,7,8};
  int  target=4;
    int n=nums.size();
    int st=0;
    int end=n-1;
    int firstOcc=-1;
    while(st<=end)
    {
        int mid=st+(end-st)/2;
        if(nums[mid]==target)
        {
            firstOcc=mid;
            end=mid-1;
        }
        else if(nums[mid]>target)
        {
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    // last occurence
    st=0;
    end=n-1;
    int lastOcc=-1;
    while(st<=end)
    {
        int mid=st+(end-st)/2;
        if(nums[mid]==target)
        {
            lastOcc=mid;
            st=mid+1;
        }
        else if(nums[mid]>target)
        {
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    cout<<firstOcc<<" "<<lastOcc<<endl;
   
    int totalOcc=lastOcc-firstOcc+1;
    cout<<totalOcc;
     return 0;
}