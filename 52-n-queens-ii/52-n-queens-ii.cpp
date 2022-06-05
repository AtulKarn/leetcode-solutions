class Solution {
    int ans = 0;
    vector<bool> occupiedcols;
    vector<bool> diagonal1;
    vector<bool> diagonal2;
public:
    int totalNQueens(int n) {
        occupiedcols = vector<bool>(n, false);
        diagonal1 = vector<bool>(2*n-1, false);
        diagonal2 = vector<bool>(2*n-1, false);
        helper(n, 0);
        return ans;
    }
    void helper(int n, int row){
        if (row==n){
            ans++;
            return;
        }
        for(int col = 0;col<n;col++){
            if (occupiedcols[col] || diagonal1[row-col+n-1] || diagonal2[row+col])
                continue;
            occupiedcols[col] = true;
            diagonal1[row-col+n-1] = true;
            diagonal2[row+col] = true;
            helper(n, row+1);
            occupiedcols[col] = false;
            diagonal1[row-col+n-1] = false;
            diagonal2[row+col] = false;
        }
    }
};