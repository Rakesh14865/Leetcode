//
class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        for(int i=1; i<n;i++){
                if(i==n-1){
                maxi=  max(maxi,abs(nums[0]-nums[n-1]));    
                }
                maxi=  max(maxi,abs(nums[i]-nums[i-1]));
            }
        
        return maxi;
    }
};