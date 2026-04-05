class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<vector<int>> g(n);
        vector<int> indeg(n);
        for (auto &x : p) {
            g[x[1]].push_back(x[0]);
            indeg[x[0]]++;
        }
        queue<int> q;
        for (int i = 0; i < n; i++) if (indeg[i] == 0) q.push(i);
        int cnt = 0;
        while (!q.empty()) {
            int u = q.front(); q.pop();
            cnt++;
            for (auto v : g[u]) {
                if (--indeg[v] == 0) q.push(v);
            }
        }
        return cnt == n;
    }
};