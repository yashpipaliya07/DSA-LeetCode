class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    //   map<int,int> m;
    //   for(auto &i:nums)  {
    //     m[i]+=1;
    //   }
    //   for(auto i:m){
    //     if(i.second>1){
    //         return true;
    //     }
    //   }
    //   return false;

    // unordered_set<int> s;
    // for(auto &i:nums){
    //     if(s.count(i)) return true;
    //     s.insert(i);
    // }
    // return false;

    return nums.size() > unordered_set<int>(nums.begin(), nums.end()).size();

    }
};