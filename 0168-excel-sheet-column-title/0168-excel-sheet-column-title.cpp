class Solution {
public:
    string convertToTitle(int columnNumber) {
        string z ="";

        while(columnNumber>0){
            columnNumber--;
            char c = 'A'+(columnNumber%26);
            z.push_back(c);
            columnNumber/=26;
        }
        reverse(z.begin(),z.end());
        return z;
    }
};