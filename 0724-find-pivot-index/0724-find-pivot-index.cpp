class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int t=0;
        for(int i=0;i<nums.size();i++){
            t+=nums[i];
        }
        int l=0;
        int x;
        if(t-nums[0]==0) return 0;
        for(int i=1;i<nums.size();i++){
            l+=nums[i-1];
            x = t-l-nums[i];
            if(x==l){
                return i;
            }
        }
        return -1;
    }
};