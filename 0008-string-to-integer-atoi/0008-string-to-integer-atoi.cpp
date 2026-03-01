class Solution {
public:
    int myAtoi(string s) {
        int x = 0;
        bool n = false;
        bool p = false;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ' && !p)
                continue;
            if (s[i] == '-' && !p) {
                n = true;
                p = true;
                continue;
            }
            if (s[i] == '+' && !p) {
                p = true;
                continue;
            }
            if (s[i] >= '0' && s[i] <= '9') {
                p = true;
                if (x > (INT_MAX - (s[i] - '0')) / 10) {
                    return n ? INT_MIN : INT_MAX;
                }
                x = x * 10 + (s[i] - '0');
            } else {
                break;
            }
        }

        if (n)
            x = x * (-1);

        return x;
    }
};