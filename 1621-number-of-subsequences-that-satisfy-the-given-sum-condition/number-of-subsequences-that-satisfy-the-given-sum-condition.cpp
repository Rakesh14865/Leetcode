class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int count=0;
        int left=0;
        int right=n-1;
        int mod=1e9+7;
        vector<int> pow2(n,1);
        for(int i=1;i<n;i++){
            pow2[i]=(pow2[i - 1] * 2) % mod;
        }
        while(left<=right){
           if(nums[left]+nums[right]>target){
            right--;
           }
           else{
            count=(count+ pow2[right-left])%mod;
            left++;
           }

        }
        return count;
    }
};