class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0) return {1};
        vector<vector<int>> v;
        for (int i = 0; i <= rowIndex; i++) {
            v.push_back(vector<int>(i + 1, 1));
            for (int j = 1; j < i; j++) {
                v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
            }
            }
        
        return v[v.size()-1];
    }
};