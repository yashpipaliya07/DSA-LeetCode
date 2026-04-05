class Solution {
public:
    vector<vector<string>> res;
    
    void solve(int r, int n, vector<string>& b, vector<int>& col, vector<int>& d1, vector<int>& d2) {
        if (r == n) {
            res.push_back(b);
            return;
        }
        for (int c = 0; c < n; c++) {
            if (col[c] || d1[r + c] || d2[r - c + n - 1]) continue;
            b[r][c] = 'Q';
            col[c] = d1[r + c] = d2[r - c + n - 1] = 1;
            solve(r + 1, n, b, col, d1, d2);
            b[r][c] = '.';
            col[c] = d1[r + c] = d2[r - c + n - 1] = 0;
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<string> b(n, string(n, '.'));
        vector<int> col(n), d1(2 * n), d2(2 * n);
        solve(0, n, b, col, d1, d2);
        return res;
    }
};