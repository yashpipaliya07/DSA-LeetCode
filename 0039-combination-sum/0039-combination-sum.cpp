class Solution {
public:
    vector<vector<int>> result;
    void backtrack(int ind,int target,vector<int> &candidates,vector<int> &path,int n){
        if(ind == n){
            if(target==0){
                result.push_back(path);
            }
            return;
        }
        if(candidates[ind]<=target){
            path.push_back(candidates[ind]);
            backtrack(ind,target-candidates[ind],candidates,path,n);
            path.pop_back();
        }

        backtrack(ind+1,target,candidates,path,n);
       
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> path;
        int n = candidates.size();
        backtrack(0,target,candidates,path,n);
        return result;
    }
};