class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
    unordered_map<int,int> mp;
    vector<int> res;
        for(auto i:nums){
            mp[i]++;
        }
        for(auto x:mp){
            if(x.second>n/3){
                res.push_back( x.first);
            }
        }
       return res;
    }
};