class Solution {
public:
    int search(vector<int>& nums, int target) {
        // int l=0;
        // int r=nums.size()-1;
        // int mini = INT_MAX;
        // int ind=0;
        // while(l<=r){
        //     int mid = (l+r)/2;
        //     if(nums[l]<=nums[mid]){
        //         // mini = min(mini,nums[l]);
        //         // if(nums[l]<mini) ind = l;
        //         if(nums[l]<mini){
        //             mini = nums[l];
        //             ind = l;
        //         }
        //         l = mid + 1;
        
        //     }
        //     if(nums[mid]<nums[r]){
        //         // mini = min(mini,nums[mid]);
        //         // if(nums[mid]<mini) ind = mid;
        //         if(nums[mid]<mini){
        //             mini = nums[mid];
        //             ind = mid;
        //         }
        //         r = mid -1;
        //     }
            
        // }

        // int l1=0;
        // int r1=ind-1;
        // int l2=ind;
        // int r2=nums.size()-1;

        // if(target>=nums[l2] && target<=nums[r2]) {
        //     while(l2<=r2){
        //     int mid = (l2+r2)/2;
        //     if(nums[mid]<target){
        //         l2=mid+1;
        //     }
        //     else if(nums[mid]>target){
        //         r2=mid-1;
        //     }
        //     else{
        //         return mid;
        //     }
        //     }
        // }

        // else {
        //     while(l1<=r1){
        //     int mid = (l1+r1)/2;
        //     if(nums[mid]<target){
        //         l1=mid+1;
        //     }
        //     else if(nums[mid]>target){
        //         r1=mid-1;
        //     }
        //     else{
        //         return mid;
        //     }
        //     }
        // }
        

        int l=0;
        int h=nums.size()-1;
        while(l<=h){
            int mid = l + (h-l)/2;
            if(nums[mid]==target) return mid;
            
            if(nums[mid]>=nums[l]){
                if(target>=nums[l] && target<=nums[mid]){
                    h=mid-1;
                }
                else{
                    l=mid+1;
                }
            }
            else{
                if(target>=nums[mid] && target<=nums[h]){
                    l=mid+1;
                }
                else{
                    h=mid-1;
                }
            }
        }
        return -1;
    }
};