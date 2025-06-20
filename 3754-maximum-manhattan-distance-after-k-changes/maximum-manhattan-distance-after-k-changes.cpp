class Solution {
public:
    int maxDistance(string s, int k) {
        int ans = 0;
        vector<pair<char, char>> dirs = { {'N','E'}, {'N','W'}, {'S','E'}, {'S','W'} };
        
        for (auto d : dirs) {
            int i = 0;
            int pos = 0, opposite = 0;
            
            while (i < s.size()) {
                if (s[i] == d.first || s[i] == d.second) {
                    pos++;
                } else {
                    pos--;
                    opposite++;
                }
                
                int flips = min(k, opposite);
                int cur = pos + 2 * flips;
                if (cur > ans) {
                    ans = cur;
                }
                i++;
            }
        }
        
        return ans;
    }
};
