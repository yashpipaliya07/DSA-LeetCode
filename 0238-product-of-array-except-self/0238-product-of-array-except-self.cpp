class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // vector<int> p(nums.size()+1);
        // p[0]=1;
        // vector<int> s(nums.size()+1);
        // s[nums.size()]=1;
        // int m=1;
        // for(int i=1;i<=nums.size();i++){
        //     p[i] = m*nums[i-1];
        //     m=m*nums[i-1];
        // }
        // int n=1;
        // for(int i=nums.size()-1;i>=0;i--){
        //     n=n*nums[i];
        //     s[i]=n;
        // }

        // vector<int> r(nums.size());

        // for(int i=0;i<nums.size();i++){
        //     r[i]=p[i]*s[i+1];
        // }
        // return r;

        int p = 1, s = 1;
        vector<int> r(nums.size(), 1);
        for (int i = 1; i < nums.size(); i++) {
            p = p * nums[i - 1];
            r[i] *= p;
        }
        for (int i = nums.size() - 2; i >= 0; i--) {
            s = s * nums[i + 1];
            r[i] *= s;
        }
        return r;
    }
};