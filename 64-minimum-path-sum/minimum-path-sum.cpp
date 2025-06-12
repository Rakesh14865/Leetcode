class Solution {
public:
//dp
    int solve(int i, int j, vector<vector<int>>& grid,vector<vector<int>>& memo) {
        if (i < 0 || j < 0) return INT_MAX;  
        if (i == 0 && j == 0) return grid[0][0]; 
        if(memo[i+1][j+1]!=0){
            return memo[i+1][j+1];
        }
        else{ 
        memo[i+1][j+1] = grid[i][j] + min(solve(i-1, j, grid,memo), solve(i, j-1, grid,memo));
        }
        return memo[i+1][j+1];
    }

    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> memo(n+1,vector<int> (m+1,0));
        int res= solve(n-1, m-1, grid,memo);
        return res;
    }
};
