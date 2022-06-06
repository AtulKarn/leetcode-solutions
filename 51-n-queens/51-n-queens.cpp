class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> nQueens(n, std::string(n,'.'));
        vector<int> flag_col(n, 1), flag_45(2*n-1, 1), flag_135(2*n-1, 1);
        solveNQueens(ans, nQueens, flag_col, flag_45, flag_135, 0, n);
        return ans;
    }
private:
    void solveNQueens(vector<vector<string>> &ans, vector<string> &nQueens, vector<int> flag_col, vector<int> flag_45, vector<int> flag_135, int row, int n){
        if (row == n){
            ans.push_back(nQueens);
            return;
        }
        for(int col=0;col<n;col++){
            if (flag_col[col] && flag_45[row+col] && flag_135[n-1+col-row]){
                flag_col[col] = flag_45[row+col] = flag_135[n-1+col-row] = 0;
                nQueens[row][col] = 'Q';
                solveNQueens(ans, nQueens, flag_col, flag_45, flag_135, row+1, n);
                nQueens[row][col] = '.';
                flag_col[col] = flag_45[row+col] = flag_135[n-1+col-row] = 1;
            }
        }
    }
};