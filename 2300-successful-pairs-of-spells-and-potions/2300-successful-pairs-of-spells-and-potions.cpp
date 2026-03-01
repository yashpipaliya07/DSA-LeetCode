class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions,
                                long long success) {
        // vector<int> ans(spells.size(),0);
        // sort(potions.begin(),potions.end());
        // vector<int> v;
        // for(int i=0;i<spells.size();i++){
        //     int c=0;
        //     v = potions;
        //     for(int j=0;j<potions.size();j++){
        //         v[j]*=spells[i];
        //     }
        //     for(int j=0;j<v.size();j++){
        //         if(v[j]>=success){
        //             c++;
        //         }
        //     }
        //     ans[i]+=c;
        // }

        // return ans;
        // sort(potions.begin(), potions.end());
        // vector<int> copy = spells;
        // sort(copy.begin(), copy.end(), greater<int>());

        // int i = 0;
        // int j = 0;
        // int spsize = spells.size();
        // int psize= potions.size();
        // vector<int> v(spells.size(),0);
        // while (i < spsize && j<psize) {
        //     if (1LL*copy[i] * potions[j] >= success) {
        //         for (int k = 0; k < spsize; k++) {
        //             if (spells[k] == copy[i]) {
        //                 v[k] = psize - j;
        //             }
        //         }
        //         i++;
        //     } else {
        //         j++;
        //     }
        // }
        
        // return v;

        sort(potions.begin(),potions.end());
        vector<int> ans;
        int n= spells.size();
        int m = potions.size();
        for(int i=0;i<n;i++){
            int s = spells[i];
            int l=0;
            int r=m-1;
            while(l<=r)
            {
                int mid = (l+r)/2;
                long long prod = (long long) s*potions[mid];
                if(prod>=success){
                    r = mid - 1;
                }
                else{
                    l = mid + 1;
                }

            }

            ans.push_back(m-l);

        }

        return ans;
    }
};