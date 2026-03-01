class Solution {
public:
    int strStr(string haystack, string needle) {
        int ind;
        
        if (haystack.find(needle) != -1) ind = haystack.find(needle);
        
        else ind=-1;

        return ind;
    }
};