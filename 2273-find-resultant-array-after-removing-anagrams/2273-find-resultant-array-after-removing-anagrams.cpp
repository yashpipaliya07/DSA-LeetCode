class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int n = words.size();
        string curr = words[0];
        sort(curr.begin(),curr.end());
        for(int i=1;i<n;i++){
            string s = words[i];
            sort(s.begin(),s.end());
            if(curr == s){
                words.erase(words.begin() + i);
                i--;
                n--;
            }
            else{
                curr = words[i];
                sort(curr.begin(),curr.end());
            }
        }
        return words;
    }
};