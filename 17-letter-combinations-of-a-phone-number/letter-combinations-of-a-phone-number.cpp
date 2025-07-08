class Solution {
public:
    void solve(int index, string& digits, string& com, vector<string>& res,
               unordered_map<char, string>& alp) {
        if (index == digits.size()) {
            res.push_back(com);

            return;
        }
        for (char c : alp[digits[index]]) {
            com.push_back(c);
            solve(index + 1, digits, com, res, alp);
            com.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {

        if(digits.empty()) return{};
        unordered_map<char, string> alp = {
            {'2', "abc"}, {'3', "def"},  {'4', "ghi"}, {'5', "jkl"},
            {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};
        string com = "";
        vector<string> res;
        solve(0, digits, com, res, alp);
        return res;
    }
};