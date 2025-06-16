class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxi=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
               if(nums[i]<nums[j]){ maxi=max(maxi,abs(nums[i]-nums[j]));}
            }
        }
        return maxi;
    }
};