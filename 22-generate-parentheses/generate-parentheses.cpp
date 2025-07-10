class Solution {
public:

    void solve(int n,string str,vector<string>&ans,int open,int close){
        if(str.length()==n*2){
            ans.push_back(str);

        }

        
            if(open<n){
                solve(n,str+"(",ans,open+1,close);

            }
            if(close<open){
                solve(n,str+")",ans,open,close+1);
            }
        
    }

    vector<string> generateParenthesis(int n) {
        int open=0,close=0;
        vector<string> ans;
        solve(n,"",ans,open,close);
        return ans;
    }
};