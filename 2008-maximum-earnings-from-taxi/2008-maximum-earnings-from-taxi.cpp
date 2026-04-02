class Solution {
public:
    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {
        sort(rides.begin(), rides.end());
        int m = rides.size();
        vector<long long> dp(m + 1, 0);
        vector<int> starts;
        
        for(auto &r : rides) starts.push_back(r[0]);

        for(int i = m - 1; i >= 0; i--){
            int s = rides[i][0], e = rides[i][1], tip = rides[i][2];
            long long earn = e - s + tip;

            int next = lower_bound(starts.begin(), starts.end(), e) - starts.begin();

            dp[i] = max(dp[i + 1], earn + dp[next]);
        }

        return dp[0];
    }
};