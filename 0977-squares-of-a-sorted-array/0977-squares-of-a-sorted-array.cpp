class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        
        int n = nums.size()-1;
        vector<int> ans(j+1);
        while(n>=0){
            if(abs(nums[i])>abs(nums[j])){
                ans[n] = nums[i] * nums[i];
                i++;
                n--;
            }
            else{
                ans[n] = nums[j] * nums[j];
                j--;
                n--;
            }
        }
        return ans;
    }
};