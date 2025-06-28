class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int,int>> in;
        for(int i=0;i<nums.size();i++){
            in.push_back({nums[i],i});
        }
        sort(in.begin(),in.end(),[](auto &a,auto&b){
            return a.first>b.first;
        });
        
        vector<pair<int,int>> res(in.begin(),in.begin()+k);

        sort(res.begin(),res.end(),[](auto &a,auto &b){
            return a.second<b.second;
        });

        vector<int>fr;
        for(auto i:res){
            fr.push_back(i.first);
        }
        return fr;

    }
};