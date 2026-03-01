class Solution {
public:
    string removeDuplicates(string s) {
        int i = 0;
        stack<char> st;
        
        while(s[i]!='\0'){
             if (st.empty()) {  
                st.push(s[i]);
            }
            
            else if(s[i] != st.top()){
                st.push(s[i]);
            }
            else{
                st.pop();
            }
            i++;
        }
        string z = "";
        
        // while(!st.empty()){
        //     z = st.top() + z; 
        //     st.pop();
        // }

       
        while(!st.empty()){
            z += st.top();   // append (O(1) amortized)
            st.pop();
        }
        reverse(z.begin(), z.end()); 
        return z;
    }
};