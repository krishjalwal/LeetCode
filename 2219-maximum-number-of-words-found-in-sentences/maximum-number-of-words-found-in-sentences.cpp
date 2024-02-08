class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxCount = 0;
        int c = 0;
        for(int i = 0; i < sentences.size(); i++)
        {
            c = 0;
            for(int j = 0; j < sentences[i].size(); j++)
            {
                if(sentences[i][j] == ' ')
                {
                    c++;
                }
                
            }
            c = c+ 1;
            maxCount = max(maxCount, c);
        }
        return maxCount;
    }
};