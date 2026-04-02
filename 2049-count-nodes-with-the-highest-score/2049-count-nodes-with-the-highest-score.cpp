class Solution {
public:
    vector<vector<int>> tree;
    long long maxScore = 0;
    int countMax = 0;
    int n;

    int dfs(int node){
        long long score = 1;
        int size = 1;

        for(int child : tree[node]){
            int s = dfs(child);
            size += s;
            score *= s;
        }

        int rest = n - size;
        if(rest > 0) score *= rest;

        if(score > maxScore){
            maxScore = score;
            countMax = 1;
        } else if(score == maxScore){
            countMax++;
        }

        return size;
    }

    int countHighestScoreNodes(vector<int>& parents) {
        n = parents.size();
        tree.resize(n);

        for(int i = 1; i < n; i++){
            tree[parents[i]].push_back(i);
        }

        dfs(0);
        return countMax;
    }
};