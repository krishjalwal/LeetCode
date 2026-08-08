// Last updated: 8/9/2026, 12:02:07 AM
class Solution {
public:
    int scoreOfString(string s) {
        int score = 0;

        for( int i = 0 ; i < s.size() - 1 ; i++)
        {
            if(int(s[i]) > int(s[i+1]))
            {
                score = score + int(s[i]) - int(s[i+1]);
            }
            else
            {
                score = score + int(s[i+1]) - int(s[i]);
            }
        }
        return score;
    }
};