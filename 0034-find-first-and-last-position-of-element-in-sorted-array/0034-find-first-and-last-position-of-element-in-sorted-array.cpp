class Solution {
public:

    int fo(vector<int>& nums, int target){
        int l=0;
        int h=nums.size()-1;
        int ans=-1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(nums[mid]==target){
                ans = mid;
                h=mid-1;
            }
            else if(nums[mid]>target){
                h=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }

    int lo(vector<int>& nums, int target){
        int l=0;
        int h=nums.size()-1;
        int ans=-1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(nums[mid]==target){
                ans = mid;
                l=mid+1;
            }
            else if(nums[mid]>target){
                h=mid-1;
            }
            else l=mid+1;
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        // vector<int> v;
        // int i=0,j=nums.size()-1;

        // while(i<=j){
        //     int mid = (i+j)/2;
        //     if(nums[mid]==target){
        //        int l=mid, r=mid;
        //        while(l-1>=0 && nums[l-1]==target) l--;
        //        while(r+1<nums.size() && nums[r+1]==target) r++;
        //        return {l,r};
        //     }
        //     else if(nums[mid]<target){
        //         i = mid + 1;
        //     }
        //     else {
        //         j = mid - 1;
        //     }
        // }

        // return {-1,-1};

        return {fo(nums,target),lo(nums,target)};


       
        //........................STL............................... 
        
        // auto first = lower_bound(nums.begin(), nums.end(), target);
        // auto last = upper_bound(nums.begin(), nums.end(), target);

        // if (first == nums.end() || *first != target)
        //     return {-1, -1};

        // return {first - nums.begin(), last - nums.begin() - 1};
    }
};