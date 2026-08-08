// Last updated: 8/9/2026, 12:03:55 AM
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        
        int maxcount = 0;
        for(auto it : sentences)
        {
            int count = 0;
            for(int i = 0 ; i < it.size() ; i++)
            {
                if(it[i]==' ')
                {
                    count = count + 1;
                }
            }
            if(count > maxcount)
            {
                maxcount = count;
            }
        }
        return maxcount + 1;
    }
};