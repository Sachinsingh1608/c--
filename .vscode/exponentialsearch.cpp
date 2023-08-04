#include<bits/stdc++.h>
using namespace std;
int bs(vector<int> nums,int start,int end,int find)
{
//int end=nums.size()-1;
while(start<=end)
{
    int mid=start+(end-start)/2;
    if(nums[mid]==find)
    return mid;
    else if(nums[mid]>find)
    end=mid-1;
    else
    start=mid+1;
}
return -1;
}
int main(){
    vector<int> nums{1,2,3,4,5,6,7};
    int target=5;
    int n=nums.size()-1;
   if(nums[0]==target)
   cout<<"found at 0"<<endl;
   int i=1;
   while(i<nums.size())
   {
    if(nums[i]<=target)
    i=i*2;
   }

   int x=bs(nums,i/2,min(i,n),target);
   cout<<x;
}