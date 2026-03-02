class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        // set<int> s;
        // for(int i=0;i<nums.size();i++){
        //     s.insert(nums[i]);
        // }
        
        // s.insert(target);
        // int ind=0;
        // for(int i:s){
        //    if(i==target) {
        //     break;
        //    }
        //    ind++;
        // }
        // return ind;
        int l=0;
        int h=nums.size()-1;
        
        while(l<=h){
            int mid = l+(h-l)/2;
            if(nums[mid]<target) l=mid+1;
            else if(nums[mid]>target) h=mid-1;
            else return mid;
           
        }
        return l;
    }
};