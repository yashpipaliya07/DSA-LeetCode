class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0,j =nums.size()-1;
        while(i<=j){
            if(nums[(i+j)/2] == target){
                return (i+j)/2;
            }
            else if(nums[(i+j)/2] > target){
                j = (i+j)/2 - 1;
            }
            else{
                i = (i+j)/2 + 1;
            }
        }

        return -1;
    }
};