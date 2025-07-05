class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
        int maxi=-1;
        for(auto i:arr){
            mp[i]++;
        }
        for(auto&[i,j] : mp){
            if(i==j){
                maxi= max(maxi,i);
            }

        }
        return maxi;
    }
};