class Solution {
public:
    void solve(int index,vector<vector<int>> &ans,vector<int>& candidates, int target,vector<int>& v){
        if(target==0){
            ans.push_back(v);
        }

        for(int i=index;i<candidates.size();i++){
            
            if(target-candidates[i]>=0){
                v.push_back(candidates[i]);
                solve(index,ans,candidates,target-candidates[i],v);
                index++;
                v.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
    vector<int> v;
    vector<vector<int>> ans;
    sort(candidates.begin(),candidates.end());
    solve(0,ans,candidates,target,v);
    return ans;

    }
};