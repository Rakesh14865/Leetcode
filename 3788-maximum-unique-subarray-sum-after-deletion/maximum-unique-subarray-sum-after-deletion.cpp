class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int> unique(nums.begin(), nums.end());

        int posSum = 0;
        int maxNeg = INT_MIN;
        bool zeroExists = false;

        for (int val : unique) {
            if (val > 0) {
                posSum += val;
            } else if (val == 0) {
                zeroExists = true;
            } else {
                maxNeg = max(maxNeg, val);
            }
        }

        if (posSum > 0) return posSum;
        if (zeroExists) return 0;
        return maxNeg;
    }
};
