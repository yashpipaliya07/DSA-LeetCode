class Solution {
public:
    void dfs(int u, vector<vector<int>>& g, vector<int>& vis) {
        vis[u] = 1;
        for (int v = 0; v < g.size(); v++) {
            if (g[u][v] && !vis[v]) dfs(v, g, vis);
        }
    }
    
    int findCircleNum(vector<vector<int>>& g) {
        int n = g.size(), ans = 0;
        vector<int> vis(n);
        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                dfs(i, g, vis);
                ans++;
            }
        }
        return ans;
    }
};