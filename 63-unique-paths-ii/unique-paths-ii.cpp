class Solution {
public:
    int solve(int i,int j,vector<vector<int>>& obstacleGrid,vector<vector<int>>&memo){

        if(i==-1||j==-1||obstacleGrid[i][j]==1) return 0;
        
        else if(i==0&&j==0) return 1;

        else if(memo[i+1][j+1]!=-1){
                return memo[i+1][j+1];

        }
        else{
           memo[i+1][j+1]= solve(i-1,j,obstacleGrid,memo)+solve(i,j-1,obstacleGrid,memo); 
        }
        return memo[i+1][j+1];
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        vector<vector<int>>memo(n+1,vector<int>(m+1,-1));
        int result = solve(n-1,m-1,obstacleGrid,memo);
        return result;
    }
};