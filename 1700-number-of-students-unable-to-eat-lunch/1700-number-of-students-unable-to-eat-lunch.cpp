class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for(int i=0;i<students.size();i++){
            q.push(students[i]);
        }
        stack<int> s;
        for(int i=sandwiches.size()-1;i>=0;i--){
            s.push(sandwiches[i]);
        }
        int k=0;
        while(!q.empty() && k < q.size()){
            if(q.front()==s.top()){
                q.pop();
                s.pop();
                k=0;
            }
            else{
                q.push(q.front());
                q.pop();
                k++;
            }
            
        }
        return q.size();
    }
};