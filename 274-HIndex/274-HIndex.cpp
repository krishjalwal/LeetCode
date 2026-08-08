// Last updated: 8/9/2026, 12:10:50 AM
class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end(), greater<int>());

        for (int i = 0; i < citations.size(); ++i) {
            if (citations[i] < i + 1) {
                return i;
            }
        }

        return citations.size();
    }
};
