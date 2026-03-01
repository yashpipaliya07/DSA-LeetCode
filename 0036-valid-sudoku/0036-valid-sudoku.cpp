class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_map<char, int> row,col;
            for (int j=0;j<9;j++) {
                if (isdigit(board[i][j])) {
                    row[board[i][j]]++;
                }
            }
            for (int j = 0; j < 9; j++) {
                if (isdigit(board[j][i])) {
                    col[board[j][i]]++;
                }
            }
            for (auto& p : row) {
                if (p.second > 1) {
                    return false;
                }
            }
            for (auto& p : col) {
                if (p.second > 1) {
                    return false;
                }
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                unordered_map<char,int> p;
                for(int k=0;k<3;k++){
                    for(int l=0;l<3;l++){
                        if (isdigit(board[i*3 + k][j*3 + l])) {
                             p[board[i*3 + k][j*3 + l]]++;
                        }
                    }
                }
                for (auto& s : p) {
                    if (s.second > 1) {
                    return false;
                    }
                }
            }
        }
        return true;
    }
};