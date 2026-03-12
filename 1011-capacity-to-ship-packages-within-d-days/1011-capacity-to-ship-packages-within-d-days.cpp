class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int n = weights.size();
        int l = *max_element(weights.begin(),weights.end());
        int r = accumulate(weights.begin(),weights.end(),0);
        while(l<=r){
            int mid = l + (r-l)/2;
            int c = 0;
            int d = 0;
            for(int i=0;i<n;i++){
                c+=weights[i];
                if(c>mid){
                    c=weights[i];
                    d+=1;
                }
            }
            d+=1;
            if(d>days) l = mid + 1;
            else r = mid - 1;
        }
        return l;
    }
};