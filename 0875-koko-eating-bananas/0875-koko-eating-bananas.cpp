class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = *max_element(piles.begin(),piles.end());
        
        
        int n = piles.size();
        int l=0,r=max-1;
        int ans=max;
        while(l<=r){
            int mid = (l+r)/2;
            int k = mid+1;
            long long c = 0;
            for(int i=0;i<n;i++){
                c+=ceil((double)piles[i]/k);
            }
            if(c<=h){
                ans = k;
                r=mid-1;
            }

            else{
                 l = mid+1;
            }
        }

        return ans;
    }
};