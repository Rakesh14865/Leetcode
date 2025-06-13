class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> res;
        int top = 0; 
        int btm = n-1; 
        int left = 0; 
        int right = m-1;
        int i;
        while(left<=right &&top<=btm )
        {
        for(i=left;i<=right;i++){
            res.push_back(matrix[top][i]);
            }
            top++;
        for(i=top;i<=btm;i++){
            res.push_back(matrix[i][right]);
        }
        right--;
        if(top<=btm)
        {
        for(i=right;i>=left;i--){
            res.push_back(matrix[btm][i]);
        }
        btm--;
        }
        if(left<=right)
        {
        for(i=btm;i>=top;i--){
            res.push_back(matrix[i][left]);
        }
        left++;
        }
    }
        return res;
    }
};