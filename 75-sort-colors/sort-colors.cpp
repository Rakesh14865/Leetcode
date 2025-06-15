class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0,o=0,t=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)z++;
            if(nums[i]==1)o++;
            if(nums[i]==2)t++;
        }
        int i=0;
        while(z>0) {
            nums[i]=0;
            i++;
            z--;
        }
        while(o>0) {
            nums[i]=1;
            i++;
            o--;
        }
        while(t>0) {
            nums[i]=2;
            i++;
            t--;
        }
    }
};