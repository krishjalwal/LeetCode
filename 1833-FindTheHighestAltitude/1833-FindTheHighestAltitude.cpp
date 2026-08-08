// Last updated: 8/9/2026, 12:05:00 AM
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum = 0, max_alt = 0;

        for(int i = 0; i < gain.size(); i++) {
            sum += gain[i];
            max_alt = max(max_alt, sum);
        }

        return max_alt;
    }
};