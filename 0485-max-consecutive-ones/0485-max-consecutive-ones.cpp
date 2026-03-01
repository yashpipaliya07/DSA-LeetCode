class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int sum = 0;
        int mx = 0;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]==1) {
                sum++;
            }
            else{
                mx = max(sum,mx);
                sum = 0;
            }
        }
        mx = max(sum,mx);
        return mx;
    }
};