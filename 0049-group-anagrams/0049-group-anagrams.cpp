class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        for(int i=0;i<strs.size();i++){
            string key = strs[i];             // copy string
            sort(key.begin(), key.end());     // sort characters to form key
            m[key].push_back(strs[i]);
        }
        vector<vector<string>> v;
        for(auto &i:m){
            v.push_back(i.second);
        }
        return v;

    }
};