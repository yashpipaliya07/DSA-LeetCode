class Solution {
public:
    vector<vector<int>> result;
    set<vector<int>> s;
    void backtrack(int ind,int target,vector<int> &candidates,vector<int> &path,int n){
        if(target<0 || ind==n) return;
        if(target==0) {
            if(s.find(path)==s.end()){
            result.push_back(path);
            s.insert(path);
            }
        
        }
        path.push_back(candidates[ind]);
        backtrack(ind+1,target-candidates[ind],candidates,path,n);  //single choice
        backtrack(ind,target-candidates[ind],candidates,path,n);  // mul choices
        
        path.pop_back();
        backtrack(ind+1,target,candidates,path,n);   //exclusion
              
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> path;
        int n = candidates.size();
        backtrack(0,target,candidates,path,n);
        return result;
    }
};