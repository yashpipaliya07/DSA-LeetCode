class Solution {
public:
    int lengthOfLastWord(string s) {
        int spin;
        while(s[s.size()-1]==' ' && !s.empty() ){
            s.pop_back();
        }
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' ') {
                spin=i;
                break;
                }
               
        }
        int co = 0;
        for(int i=spin+1;i<s.size();i++){
            co++;
        }
        return co;
    }
};