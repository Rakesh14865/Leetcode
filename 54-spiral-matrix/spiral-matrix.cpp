class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int top=0;
        int left=0;
        int btm=m-1;
        int right=n-1;
        int i=0;
        vector <int> path;
        while(top<=btm&&left<=right){
            for(i=left;i<=right;i++){
                path.push_back(matrix[top][i]);
            }
            top++;
            for(i=top;i<=btm;i++){
                path.push_back(matrix[i][right]);
            }
            right--;
            if(top<=btm){
            for(i=right;i>=left;i--){
                path.push_back(matrix[btm][i]);
            }
            btm--;
            }
            if(left<=right){
            for(i=btm;i>=top;i--){
                path.push_back(matrix[i][left]);
            }
            left++;
            }
        }
        return path;
    }
};