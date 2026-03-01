class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> m;
        int j = 0;
        for (char i : s) {
            m[i] = t[j];
            j++;
        }
        string x = "";
        for (int i = 0; i < s.size(); i++) {
            x += m[s[i]];
        }

        map<char, char> m2;
        int k = 0;
        for (char i : t) {
            m2[i] = s[k];
            k++;
        }
        string y = "";
        for (int i = 0; i < s.size(); i++) {
            y += m2[t[i]];
        }
        bool r;
        if (x == t && y == s) {
            r=true;
        }
        else r=false;
        return r;
    }
};