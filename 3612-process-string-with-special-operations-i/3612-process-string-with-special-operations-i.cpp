class Solution {
public:
    string processStr(string s) {
        string b;
        for(int i=0;i<s.size();i++){
            if(s[i]>=97 && s[i]<=122){
                b+=s[i];
            }
            else if(s[i]=='*' && !b.empty()){
                 b.pop_back();
            }
            else if(s[i]=='#' && !b.empty()){
                b=b+b;
            }
            else if(s[i]=='%' && !b.empty()){
               reverse(b.begin(), b.end());
            }
        }
        return b;
    }
};