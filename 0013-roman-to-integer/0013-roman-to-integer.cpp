class Solution {
public:
    int romanToInt(string s) {

        if (s.empty()) return 0;


      map<char, int> m = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};

        int v = m[s[s.size() - 1]];

        for (int i = s.size() - 1; i > 0; i--) {
            if(m[s[i]]>m[s[i-1]]){
                v-=m[s[i-1]];
            }
            else{
                v+=m[s[i-1]];
            }
        }

        return v;
  
    }
};