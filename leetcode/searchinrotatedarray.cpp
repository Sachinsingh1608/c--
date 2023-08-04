#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> nums,int st,int end,int target){
    while(st<=end)
    {
        int mid=st+(end-st)/2;
        if(nums[mid]==target)
        return mid;
        else if(nums[mid]>target)
        end=mid-1;
        else
        st=mid+1;
    }
  return -1;
}
int pivot(vector<int> &nums,int n)
{
    int st=0;
    int end=n-1;
    while(st<end)
    {
        int mid=st+(end-st)/2;
        if(nums[mid]>nums[end])
        {
            st=mid;
        }
        else{
            end=mid-1;
        }
    }
    return st;
}
int main(){
    vector<int> nums={4,5,6,7,0,1,2};
   int target=2;
    int n=nums.size();
    int pivotidx=pivot(nums,n);
    cout<<pivotidx<<endl;
    int idx= binarySearch(nums,pivotidx,n-1,target);
    if(idx==-1)
    return binarySearch(nums,0,pivotidx-1,target);
    cout<<idx;
}