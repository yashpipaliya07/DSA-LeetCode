class Solution {
public:
    int smallestNumber(int n) {
       
        int i=0;
        int x=0;

        while(x<=n){
            x = pow(2,i);
            i++;
        }
        return x-1;
    }
};