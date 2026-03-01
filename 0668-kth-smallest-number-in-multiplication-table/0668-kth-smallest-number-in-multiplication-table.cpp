class Solution {
public:
    int findKthNumber(int m, int n, int k) {
        // vector<int> mx;

        // for(int i=1;i<=m;i++){
        //     for(int j=1;j<=n;j++){
        //        mx.push_back(i*j);
        //     }
        // }
        // priority_queue<int> pq;
        // for(int i=0;i<mx.size();i++){
        //     if(pq.size()<k) pq.push(mx[i]);
        //     else{
        //         if(mx[i]<pq.top()){
        //             pq.pop();
        //             pq.push(mx[i]);
        //         }
                
        //     }
        // }
        // return pq.top();
        int l=1;
        int r = m*n;
        while(l<r)
        {
            int mid=l+(r-l)/2;
            long long c=0;
            for(int i=1;i<=m;i++){
                c += min(n,mid/i);
            }
            if(c>=k) r=mid;
            else l=mid+1;
        }
        return l;
    }
};