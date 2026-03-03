class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int max = *max_element(piles.begin(),piles.end());
        int l=1;
        int r=max;
        int n = piles.size();
        while(l<=r){
            int m = l + (r-l)/2;
            long long hr=0;
            for(int i=0;i<n;i++){
                hr+=ceil((double)piles[i]/m);
            }
            if(hr<=h){
                r=m-1;
            }
            else{
                l=m+1;
            }
        }

        return l;
    }
};