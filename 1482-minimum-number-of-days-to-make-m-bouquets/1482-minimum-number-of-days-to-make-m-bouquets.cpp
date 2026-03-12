class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        if((long long)m*k > n ) return -1;
        int l = *min_element(bloomDay.begin(),bloomDay.end());
        int r = *max_element(bloomDay.begin(),bloomDay.end());
        
        while(l<=r){
            int mid = l + (r-l)/2;
            int b = 0;
            int c = 0;
            for(int i=0;i<n;i++){
                if(bloomDay[i]<=mid) c++;
                else {
                    b += c/k;
                    c=0;
                }
            }
            b+=c/k;
            if(b>=m) r = mid-1;
            else l = mid + 1; 
        }
        
       return l;
    }
};