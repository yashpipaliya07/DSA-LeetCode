class Solution {
public:
    int countCollisions(string directions) {
        int n = directions.size();
       int l=0;
       int r=n-1;
       int sum = 0;
     
        while(l<n && directions[l]=='L') l++;
        while(r>=0 && directions[r]=='R') r--;

        while(l<=r){
            if(directions[l]=='L' || directions[l]=='R') sum++;
            l++;
       }
        
       return sum; 
    }
};