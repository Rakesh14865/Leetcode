class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        string res;
        unordered_map<char,int> mp;
        for(auto c : s){
            mp[c]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto p : mp){
            pq.push({p.second,p.first});
        }
        while(!pq.empty()){
            auto[f,ch] =pq.top();
            pq.pop();
            res=res+string(f,ch);
        }
        return res;
    }
};