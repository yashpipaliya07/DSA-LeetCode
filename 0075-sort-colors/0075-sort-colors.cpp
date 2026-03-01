class Solution {
public:  // bubble sort
    void sortColors(vector<int>& nums) {
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[j]<nums[i]){
        //             swap(nums[i],nums[j]);
        //         }
        //     }
        // }

        int a=0,b=0,c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) a++;
            if(nums[i]==1) b++;
            if(nums[i]==2) c++;

        }
        for(int i=0;i<a;i++){
            nums[i] = 0;
        }
        for(int i=a;i<a+b;i++){
            nums[i] = 1;
        }
        for(int i=a+b;i<nums.size();i++){
            nums[i] = 2;
        }
    }
};