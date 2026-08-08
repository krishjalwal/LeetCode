// Last updated: 8/9/2026, 12:02:39 AM
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        int n = words.size();
        for (int i=0;i<n;i++) {
            for(auto j:words[i]) {
                if(j==x) {
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};