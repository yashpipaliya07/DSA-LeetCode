class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        
        s.insert(target);
        int ind=0;
        for(int i:s){
           if(i==target) {
            break;
           }
           ind++;
        }
        return ind;
    }
};