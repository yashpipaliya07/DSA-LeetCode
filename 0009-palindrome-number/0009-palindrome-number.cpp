class Solution {
public:
    bool isPalindrome(int x) {
        string z = to_string(x);
    string y;
    bool a;
    
        
        for(int i=z.size()-1;i>=0;i--){
            y+=z[i];
        
        }
 
    if(x>=0 && y==z) a=true;
    else a=false;
    return a;
    // if(x<0) return false;
    // long y = x;
    // long rev = 0;
    // while(y!=0){
    //     long ld = y%10;
    //     rev = rev*10 + ld;
    //     y = y/ 10;
    // }
    // if(x==rev) return true;
    // return false;
    }
};