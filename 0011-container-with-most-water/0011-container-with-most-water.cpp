class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int a = 0;
        while(i<j){
            int b = (j-i) * min(height[i],height[j]);
            a = max(a,b);
            if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
            }
        }
    return a;
    }
};