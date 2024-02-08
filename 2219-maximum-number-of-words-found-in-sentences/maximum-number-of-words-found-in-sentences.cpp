class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {

        int maxcount = 0;
        int count;
        for (auto it : sentences) {
            count = 0;
            for (int i = 0; i < it.size(); i++) {
                if (it[i] == ' ') {
                    count = count + 1;
                }
            }
            if (count > maxcount) {
                maxcount = count;
            }
        }
        return maxcount + 1;
    }
};