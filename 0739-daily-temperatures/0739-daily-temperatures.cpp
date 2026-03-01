class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
   
    // int i=0;
    // int j=1;
    // vector<int> v;
    // while(i < temperatures.size()-1 ){
    //     if (j >= temperatures.size()) {   // fix: avoid out-of-bounds
    //             v.push_back(0);
    //             i++;
    //             j = i + 1;
    //             continue;
    //         }
    //     if(temperatures[j] > temperatures[i] ){
    //         v.push_back(j-i);
    //         i+=1;
    //         j=i+1;
    //     }
    //     else{
    //         j++;
    //     }
    // }
    // v.push_back(0);
    // return v;

    stack<int> s;
    vector<int> v(temperatures.size(),0);
    for(int i=0;i<temperatures.size();i++){
        while(!s.empty() && temperatures[i] > temperatures[s.top()]){
            int prev = s.top();
                 s.pop();
                v[prev] = i - prev;
        }
        s.push(i);
    }
    return v;
    }
};