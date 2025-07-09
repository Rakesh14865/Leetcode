class Solution {
public:
    void bfs(vector<vector<int>>& grid, int n, int m, int& maxTime) {
        queue<tuple<int, int, int>> q;

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                if (grid[i][j] == 2)
                    q.push({i, j, 0});

        vector<int> dx = {-1, 1, 0, 0};
        vector<int> dy = {0, 0, -1, 1};

        while (!q.empty()) {
            auto [x, y, time] = q.front(); q.pop();
            maxTime = max(maxTime, time);

            for (int i = 0; i < 4; ++i) {
                int nr = x + dx[i];
                int nc = y + dy[i];
                if (nr >= 0 && nc >= 0 && nr < n && nc < m && grid[nr][nc] == 1) {
                    grid[nr][nc] = 2;
                    q.push({nr, nc, time + 1});
                }
            }
        }

        for (auto& row : grid)
            for (int cell : row)
                if (cell == 1) {
                    maxTime = -1;
                    return;
                }
    }

    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int maxTime = 0;
        bfs(grid, n, m, maxTime);
        return maxTime;
    }
};
