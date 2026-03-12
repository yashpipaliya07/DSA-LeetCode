class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1;
        int r=*max_element(nums.begin(),nums.end());
        int n = nums.size();
        while(l<=r){
            int mid = l + (r-l)/2;
            int c = 0;
            for(int i=0;i<n;i++){
                c += ceil((double)nums[i]/(double)mid); 
            }
            if(c>threshold) l=mid+1;
            else r=mid-1;
        }
        return l;
    }
};