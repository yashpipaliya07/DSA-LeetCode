class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        int i=0,j=nums.size()-1;

        while(i<=j){
            int mid = (i+j)/2;
            if(nums[mid]==target){
               int l=mid, r=mid;
               while(l-1>=0 && nums[l-1]==target) l--;
               while(r+1<nums.size() && nums[r+1]==target) r++;
               return {l,r};
            }
            else if(nums[mid]<target){
                i = mid + 1;
            }
            else {
                j = mid - 1;
            }
        }

        return {-1,-1};
    }
};