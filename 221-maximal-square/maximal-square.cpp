class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> dp(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (i == 0 || j == 0) {
                    dp[i][j] = matrix[i][j] - 48;
                } else {
                    if (matrix[i][j] == '1') {
                        dp[i][j] = min(min(dp[i - 1][j], dp[i - 1][j - 1]),dp[i][j - 1]) +1;
                    } else {
                        dp[i][j] = 0;
                    }
                }
            }
        }
        int maxi = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (maxi < dp[i][j]) {
                    maxi = dp[i][j];
                }
            }
        }
        return maxi * maxi;
    }
};