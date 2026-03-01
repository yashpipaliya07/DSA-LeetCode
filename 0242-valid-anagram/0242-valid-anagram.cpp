class Solution {
public:
    bool isAnagram(string s, string t) {
    //    sort(s.begin(), s.end());
    //    sort(t.begin(), t.end());
    //    if (s==t) return true;
    //    else return false;
    if(s.size()!=t.size()) return false;
    unordered_map <char,int> x;
    unordered_map <char,int> y;
    for(auto &i:s){
        x[i]++; 
    }
    for(auto &j:t){
        y[j]++;
    }
    if(x==y) return true;
    return false;
    }
};