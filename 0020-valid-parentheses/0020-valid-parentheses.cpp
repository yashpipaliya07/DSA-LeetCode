class Solution {
public:
    bool isValid(string s) {
        stack<char> t;
        int i = 0;
        while (s[i] != '\0') {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                t.push(s[i]);
            // if(t.empty()) return false;
            if (s[i] == ')') {
                if (t.empty() || t.top() != '(') {
                    return false;
                } else
                    t.pop();
            }
            if (s[i] == '}') {
                if (t.empty() || t.top() != '{') {
                    return false;
                } else
                    t.pop();
            }
            if (s[i] == ']') {
                if (t.empty() || t.top() != '[') {
                    return false;
                } else
                    t.pop();
            }
            
            i++;
        }
        if(t.empty()){
        return true;
        }
        return false;
    }
};