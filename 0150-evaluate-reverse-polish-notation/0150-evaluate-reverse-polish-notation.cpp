class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                string c = tokens[i];
                int x = (s.top());
                s.pop();
                int y = (s.top());
                s.pop();
                int z;
                if(c=="+"){
                    z = x+y;
                }
                else if(c=="-"){
                    z = y-x;
                }
                else if(c=="*"){
                    z=x*y;
                }
                else if(c=="/"){
                    z=y/x;
                }
                s.push(z);
            }
            else{
                s.push(stoi(tokens[i]));
            }

        }
        return (s.top());
    }
};