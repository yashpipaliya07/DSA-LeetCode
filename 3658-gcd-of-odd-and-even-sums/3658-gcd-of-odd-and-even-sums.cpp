class Solution {
public:
    int gcdOfOddEvenSums(int n) {
       int co=1;
        int o =0;
        for(int i=1;co<=n;i=i+2){
            o+=i;
            co++;
        }
        int cb=1;
        int e =0;
        for(int i=2;cb<=n;i=i+2){
            e+=i;
            cb++;
        }
         while(e != 0) {
        int temp = e;
        e = o % e;
        o = temp;
    }
    return o;
        
    }
};