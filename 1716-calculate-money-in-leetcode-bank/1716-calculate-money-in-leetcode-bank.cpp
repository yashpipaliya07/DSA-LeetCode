class Solution {
public:
    int totalMoney(int n) {
        int st = 1, s = 0;
        for (int i = 1; i <= n; ++i) {
            if (i > 7 && i % 7 == 1) st = (i / 7) + 1;
            s += st + (i - 1) % 7;
        }
        return s;
    }
};