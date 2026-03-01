class Solution {
public:
    int singleNumber(vector<int>& nums) {
    //     map<int,int> m;
    //     for(int i:nums){
    //         m[i]+=1;
    //     }
    //     for(auto &j:m){
    //         if(j.second==1) return j.first;
    //     }
    //     return -1;
    // }
    int ans = 0;
        for (int x : nums) {
            ans ^= x;   // XOR cancels out duplicates
        }
        return ans;
    }
};