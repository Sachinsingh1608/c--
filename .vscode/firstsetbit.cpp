#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums{4,5,6,7,0,1,2};
    int i=0;
    int j=nums.size()-1;
    while(i<=j){
        int mid=i+(j-i)/2;
        if(i==j)
        cout<<i;
        else if(nums[mid]>nums[mid+1]&& mid+1<=j)
        cout<<mid;
        else if(nums[mid-1]>=nums[mid] &&nums[mid-1]>nums[mid])
        cout<<mid-1;
        else if(nums[i]>nums[mid])
        j=mid-1;
        else
        i=mid+1;
    }
    cout<<0;
}