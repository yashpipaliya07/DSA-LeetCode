class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int c=0;
        // for(int i=0;i<nums.size();i++){
        //     int sum=0;
        //     for(int j=i;j<nums.size();j++){
        //         sum+=nums[j];
        //         if(sum==k) 
        //         {   
        //             c++;
        //         }
        //     }
        // }

        unordered_map<int,int> m;
        m[0]=1;
        int p=0;
        int c=0;
        for(int i:nums){
            p+=i;
            c+=m[p-k];
            m[p]+=1;
        }
        return c;
    }
};