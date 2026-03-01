class Solution {
public:
    bool check(vector<int>& nums) {
        if(nums.size()==1) return true;
        int x = -1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1]){
                x = i;
                break;
            }
        }
        if(x==-1) return true;

        
        for(int i=0;i<x;i++){
            if(nums[i]>nums[i+1]){
                return false;
            }
        }
        for(int i=x+1;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]){
                return false;
            }
        }
        if(nums[x]<nums[nums.size()-1] || nums[0]<nums[nums.size()-1]) return false;
        
        return true;
    }
};