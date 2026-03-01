class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        //  while (nums.size() > 1) {
        //     vector<int> r(nums.size() - 1);
        //     for (int i = 0; i < nums.size() - 1; i++) {
        //         r[i] = (nums[i + 1] + nums[i])%10;
        //     }
        //     nums = r;
        // }
        
        // return nums[0];

        for(int i=nums.size()-1;i>0;--i){
            for(int j=0;j<i;++j){
                nums[j] = (nums[j + 1] + nums[j])%10;
            }
        }
        return nums[0];
    }
};