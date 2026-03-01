class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for(auto &i:nums){
            m[i]++;
        }
        vector<int> v;
        for(int j=0;j<k;j++){
       int  max = 0;
       int c=0;
        for(auto &i:m){
           if(i.second>c){
                c=i.second;
                max = i.first;
           }
        }
        v.push_back(max);
        m.erase(max);
        }
        return v;
    }
};