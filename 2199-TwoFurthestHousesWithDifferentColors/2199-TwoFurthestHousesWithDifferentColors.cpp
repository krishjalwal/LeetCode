// Last updated: 8/9/2026, 12:03:57 AM
class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int maxDist = 0;

        for (int i = 0; i < colors.size(); i++) {
            for (int j = colors.size() - 1; j >= 0; j--) {
                if (colors[i] != colors[j]) {
                    maxDist = max(maxDist, abs(j - i));
                    break; // Break the inner loop once a different color is
                           // found
                }
            }
        }

        return maxDist;
    }
};