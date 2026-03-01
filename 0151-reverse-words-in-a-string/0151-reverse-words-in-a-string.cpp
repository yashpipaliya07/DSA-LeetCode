class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string z="";
        string ans="";
        for(int i=n-1;i>=0;i--){
            if(s[i]!= ' '){
                z = s[i] + z;
            }
            else{
                if(z!="") ans+=z+' ';
                z = "";
            }
            if(i==0){
                ans+=z;
            }
        }
        int i = ans.size()-1;
        while(ans[i]==' '){
            ans.pop_back();
            i--;
        }
        return ans;
    }
};