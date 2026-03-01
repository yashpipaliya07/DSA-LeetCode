class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> m;
        for(auto &l:s){
            m[l]++;
        }
        char c;
        int p=0;
        for(auto &l:s){
            if(m[l]==1){
                c=l;
                return p;
            }
            p++;
        }
        return -1;
    }
};