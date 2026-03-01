class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1){
            return x;
        }
        double i=1;
        int ans=1;
        while(i*i<=x){
            ans=i;
            i++;
        }
        return ans;
    }
};