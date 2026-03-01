class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // vector<int> pos;
        // vector<int> neg;
        // for(int i:nums){
        //     if(i>0) pos.push_back(i);
        //     else neg.push_back(i);
        // }
        
        // int j=0,k=0;
        // for(int i=0;i<nums.size();i++){
        //     if(i%2==0){
        //         nums[i]=pos[j];
        //         j++;
        //     }
        //     else{
        //         nums[i]=neg[k];
        //         k++;
        //     }
        // }
        // return nums;
        vector<int> res(nums.size());
        int p=0,n=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                res[p]=nums[i];
                p+=2;
            }
            else{
                res[n]=nums[i];
                n+=2;
            }
        }
        return res; 
    }
};