class Solution {
    int m = 1337;
    
    int p(int x, int y) {
        int r = 1;
        x = x % m;
        for (int i = 0; i < y; ++i) {
            r = (r * x) % m;
        }
        return r;
    }
    
public:
    int superPow(int a, vector<int>& b) {
        if (b.empty()) {
            return 1;
        }
        
        int l = b.back();
        b.pop_back();
        
        int p1 = p(superPow(a, b), 10); 
        int p2 = p(a, l);
        
        return (p1 * p2) % m;
    }
};