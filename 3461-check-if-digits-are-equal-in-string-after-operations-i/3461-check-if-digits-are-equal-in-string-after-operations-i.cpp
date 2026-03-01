class Solution {
public:
    bool hasSameDigits(string s) {
        int n = s.size();
        string x = s;
        for(int i=0;i<n-2;i++){
            string z(x.size()-1,'0');
            for(int j=0;j<x.size()-1;j++){
                z[j] = (((x[j]-'0') + (x[j+1] -'0'))%10) + '0';
            }
            x = z;
        }
        if(x[0]==x[1]) return true;
        else return false;
    }
};