class Solution {
public:
    double myPow(double x, int n) {
         if(n == 0) return 1;
         if(x==1) return 1;
        // double res = x;
        // if(n>0){
        //     for(int i=1;i<n;i++){
        //         res = res * x;
        //     }
        // }
        // else{
        //     res =1;
        //     for(int i=0;i<(-1*n);i++){
        //         res = res/x;
        //     }
        // }
        // return res;
        long long N = n;
           if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        double ans=1.0;
        while(N>0){
            if(N%2==1){
                ans=ans*x;
            }
            x=x*x;
            N=N/2;
        }
        return ans;
    }
};