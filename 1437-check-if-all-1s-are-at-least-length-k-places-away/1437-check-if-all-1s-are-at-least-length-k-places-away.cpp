class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size();
        int m=-1;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1){
                if(m!=-1 && i-m-1<k){
                    return false;
                }
                m=i;
            }
        }
        return true;
    }
};