class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> v;
        int i=0;
        while(n>0){
            int x=(n%10) * pow(10, i);
            if(x!=0)
            v.push_back(x);
            n=n/10;
            i++;
        }
        reverse(v.begin(),v.end());
        return v;
    }
};