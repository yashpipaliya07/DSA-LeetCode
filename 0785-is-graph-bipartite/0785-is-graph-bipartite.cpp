class Solution {
public:
    bool isBipartite(vector<vector<int>>& g) {
        int n = g.size();
        vector<int> col(n, -1);
        for (int i = 0; i < n; i++) {
            if (col[i] != -1) continue;
            queue<int> q;
            q.push(i);
            col[i] = 0;
            while (!q.empty()) {
                int u = q.front(); q.pop();
                for (auto v : g[u]) {
                    if (col[v] == -1) {
                        col[v] = col[u] ^ 1;
                        q.push(v);
                    } else if (col[v] == col[u]) return false;
                }
            }
        }
        return true;
    }
};