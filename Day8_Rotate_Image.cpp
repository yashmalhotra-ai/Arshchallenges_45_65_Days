class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> ans(n,vector<int> (n,0));
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                ans[j][n-i-1]=matrix[i][j];
            }
        }
        matrix=ans;
    }
};