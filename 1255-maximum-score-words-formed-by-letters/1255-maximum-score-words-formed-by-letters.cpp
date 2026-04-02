class Solution {
public:
    int solve(int i, vector<string>& words, vector<int>& freq, vector<int>& score){
        if(i == words.size()) return 0;

        int skip = solve(i + 1, words, freq, score);

        bool ok = true;
        int gain = 0;
        vector<int> used(26, 0);

        for(char c : words[i]){
            int idx = c - 'a';
            used[idx]++;
            if(used[idx] > freq[idx]) ok = false;
            gain += score[idx];
        }

        int take = 0;
        if(ok){
            for(int j = 0; j < 26; j++) freq[j] -= used[j];
            take = gain + solve(i + 1, words, freq, score);
            for(int j = 0; j < 26; j++) freq[j] += used[j];
        }

        return max(skip, take);
    }

    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        vector<int> freq(26, 0);
        for(char c : letters) freq[c - 'a']++;
        return solve(0, words, freq, score);
    }
};