class Solution {
public:
   bool isPalindrome(string s, int start, int end) {
    while (start <= end) {
      if (s[start++] != s[end--])
        return false;
    }
    return true;
  }


void solve(int index, vector<vector<string>> &res,vector<string>str, string s){
        if(s.length()==index){
        res.push_back(str);
        return;}

        for(int i=index;i<s.size();i++){
            if(isPalindrome(s,index,i)){
                str.push_back(s.substr(index,i-index+1));
                solve(i+1,res,str,s);
                str.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        int n=s.length();
        vector<vector<string>> res;
        vector<string> str;
        solve(0,res,str,s);
        return res;
    }
};