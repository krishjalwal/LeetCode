class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count = 0; int k = 0;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        for (auto greed : g) {
            for (int j = k ; j < s.size() ; j++) {
                if (s[j] >= greed)
                {
                    count++;
                    s[j]=0;
                    break;
                }
            }
        }

        if (count > 0) {
            return count;
        }
        return 0;
    }
};