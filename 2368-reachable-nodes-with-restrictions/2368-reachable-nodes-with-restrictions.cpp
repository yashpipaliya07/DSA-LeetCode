class Solution {
public:
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        vector<vector<int>> adj(n);
        for(auto &e : edges){
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        unordered_set<int> ban(restricted.begin(), restricted.end());
        vector<int> vis(n, 0);

        function<int(int)> dfs = [&](int node){
            if(ban.count(node)) return 0;
            vis[node] = 1;
            int cnt = 1;

            for(int nei : adj[node]){
                if(!vis[nei]){
                    cnt += dfs(nei);
                }
            }
            return cnt;
        };

        return dfs(0);
    }
};