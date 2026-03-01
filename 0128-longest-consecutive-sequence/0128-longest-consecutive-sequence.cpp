class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(auto &i:nums){
            s.insert(i);
        }
        int l=0;
        for(auto &i:s){
            if(s.find(i-1)==s.end()){
                int x = i;
                int c = 1;
                while(s.find(x+1)!=s.end()){
                    x++;
                    c++;
                }
                l = max(c,l);
            }
        }

        return l;
    }
};