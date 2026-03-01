class Solution {
public:
    vector<vector<int>> result;

    void backtrack(int ind, int target, vector<int>& candidates, vector<int>& path, int n) {
        if (target == 0) {
            result.push_back(path);
            return;
        }
        if (ind == n || target < 0) return;

        if (candidates[ind] <= target) {
            path.push_back(candidates[ind]);
            backtrack(ind + 1, target - candidates[ind], candidates, path, n);
            path.pop_back();
        }

        while (ind + 1 < n && candidates[ind] == candidates[ind + 1]) ind++;

        backtrack(ind + 1, target, candidates, path, n);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> path;
        backtrack(0, target, candidates, path, candidates.size());
        return result;
    }
};
