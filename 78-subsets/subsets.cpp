class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        int n=nums.size();
        int total_sub=pow(2,n);
        int i,j;
        for(i=0;i<total_sub;i++){
            vector<int> subset;
            int p=1;
            for(j=0;j<n;j++){
                
                if((i&p)!=0){
                    subset.push_back(nums[j]);
                }
                p=p*2;
            }
            res.push_back(subset);
        }
        return res;
    }
};