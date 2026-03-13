class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        int n=ranks.size();
        long long l = 1;
        long long r = 1LL* (*min_element(ranks.begin(),ranks.end())) * cars * cars;
        while(l<=r){
            long long mid = l + (r-l)/2;
            long long c = 0;
            for(int i=0;i<n;i++){
                c+= sqrt(mid/ranks[i]);
            }
            if(c<cars) l=mid+1;
            else r = mid-1;
        }
        return l;
    }
};