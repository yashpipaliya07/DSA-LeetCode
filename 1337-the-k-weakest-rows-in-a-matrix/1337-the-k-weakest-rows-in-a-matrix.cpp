class Solution {
public:
    int countones(vector<int> &row){
        int l=0;
        int r=row.size();
        while(l<r){
            int m = l + (r-l)/2;
            if(row[m]==1) l=m+1;
            else r = m; 
        }
        return l;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int n=mat.size();
        int m=mat[0].size();

        // priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;

        // for(int i=0;i<n;i++){
        //     int one = countones(mat[i]);
        //     pq.push({one,i});
        // }

        // vector<int> ans;
        // while(k--){
        //     ans.push_back(pq.top().second);
        //     pq.pop();
        // }
        // return ans;


        vector<pair<int,int>> vv;
        vector<int> jj;
         for(int i=0;i<n;i++){
            int one = countones(mat[i]);
            vv.push_back({one,i});
        }
        sort(vv.begin(),vv.end());
        for(int i=0;i<k;i++){
            jj.push_back(vv[i].second);
        }
    return jj;
    }
};