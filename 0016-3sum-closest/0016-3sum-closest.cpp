class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int cl =0;
        int mn = INT_MAX;
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum = nums[i] + nums[j] + nums[k];
                int diff = abs(sum-target);
                if(diff<mn){
                    mn=diff;
                    cl=sum;
                }
                if(sum<target){
                    j++;
                }
                else if(sum>target){
                    k--;
                }
                else{
                    return sum;
                }

                
            }
        }

    return cl;
    }
};

