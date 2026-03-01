class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // map<int,int> m;
        // for(auto l:nums){
        //     m[l]++;
        // } 
        // for(auto l:m){
        //     if(l.second>nums.size()/2){
        //         return l.first;
        //     }

        // } 
        
        // return 0;


        int cnt=0;
        int el;
        for(int i=0;i<nums.size();i++){
            if(cnt==0){
                cnt = 1;
                el = nums[i];
            }
            else if(nums[i]==el){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int c;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==el){
                c++;
            }
        }
        if(c>nums.size()/2) return el;
        return -1;
    }
};