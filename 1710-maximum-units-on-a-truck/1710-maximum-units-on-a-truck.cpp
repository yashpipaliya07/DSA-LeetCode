class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [](auto& x, auto& y) { return x[1] > y[1]; });
        
        int ans = 0;
        for (auto& x : boxTypes) {
            int take = min(truckSize, x[0]); 
            ans += take * x[1];     
            truckSize -= take;               
            if (!truckSize) break;          
        }
        return ans;
    }
};