class Solution {
public:
    void solve(vector<string> &ans,int n,int open,int close,string str){
        if(str.length()==n*2){
            ans.push_back(str);
            return;
        }
        if(open<n){
            solve(ans,n,open+1,close,str+"(");
        }
        if(close<open){
            solve(ans,n,open,close+1,str+")");
        }


    }
    vector<string> generateParenthesis(int n) {
        int open=0,close=0;
        vector<string> ans;
        solve(ans,n,0,0,"");
        return ans;
    }
};