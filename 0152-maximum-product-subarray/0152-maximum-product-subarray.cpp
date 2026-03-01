class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int max=INT_MIN;
        // int sum=1;
        // for(int i=0;i<nums.size();i++){
        //     sum*=nums[i];
        //     if(sum>max) max=sum;
        //     if(sum<0) sum=1;
        // }
        // return max;

        int mx = INT_MIN;
        int n= nums.size();
        for(int i=0;i<n;i++){
            int mul = 1;
            for(int j=i;j<n;j++){
                mul*=nums[j];
                mx = max(mul,mx);
            }
           
        }
        return mx;
    }
};