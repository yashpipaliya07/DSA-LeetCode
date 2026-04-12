class Solution {
public:
    vector<int> diffWaysToCompute(string expression) {
        vector<int> result;
        int n = expression.length();
        for(int i=0;i<n;i++){
            char c = expression[i];
            if(c=='+' || c=='-' || c=='*'){
                vector<int> left = diffWaysToCompute(expression.substr(0,i));
                vector<int> right = diffWaysToCompute(expression.substr(i+1));

                for(auto l:left){
                    for(auto r:right){
                        if(c=='+') result.push_back(l+r);
                        else if(c=='-') result.push_back(l-r);
                        else if(c=='*') result.push_back(l*r);
                    }
                }
            }
        }

        if(result.empty()) result.push_back(stoi(expression));
        return result;
    }
};