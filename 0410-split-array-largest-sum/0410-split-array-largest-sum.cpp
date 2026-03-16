class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int l = *max_element(nums.begin(),nums.end());
        int r = accumulate(nums.begin(),nums.end(),0);
        int n = nums.size();
        int ans = -1;
        while(l<=r){
            int mid = l + (r-l)/2;
            int sum = nums[0];
            int cnt = 1;
            for(int i=1;i<n;i++){
                if(nums[i]+sum>mid){
                    cnt++;
                    sum = nums[i];
                }
                else{
                    sum+=nums[i];
                }
            }
            if(cnt>k){
                l = mid + 1;
            }
            else {
                r = mid - 1;
                ans = mid;
            }
        }
        return ans;
    }
};