class Solution {
public:

    int bs(vector<int>& nums, int target,int low,int high){
        while(low<=high){int mid=(low+high)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(target<nums[mid]){
            return bs(nums,target,low,mid-1);
        }
        else if(target>nums[mid]) {
            return bs(nums,target,mid+1,high);
        }}
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int low =0;
        int high= nums.size()-1;

        return bs(nums,target,low,high);

    }
};