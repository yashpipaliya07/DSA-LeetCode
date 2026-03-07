class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int d=0;
        int n=nums.size();
        for(int i =0;i<n;i++){
            d = d ^ nums[i];
        }
        unsigned int diff = (unsigned int)d & -(unsigned int)d;
        int x=0; int y=0;
        for(int j=0;j<n;j++){
            if((diff & nums[j]) == 0) x = x ^ nums[j];
            else y = y ^ nums[j];
        }
        return {x,y};
    }
};