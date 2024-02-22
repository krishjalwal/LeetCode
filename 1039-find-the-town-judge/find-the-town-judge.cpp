class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> trustScore(n + 1, 0); // Initialize trust score for each person
        
        // Update trust score based on trust relationships
        for (const auto& t : trust) {
            trustScore[t[0]]--; // Decrease trust score for the person trusting
            trustScore[t[1]]++; // Increase trust score for the person being trusted
        }
        
        // Check for the town judge
        for (int i = 1; i <= n; ++i) {
            // Check if the person's trust score equals n - 1, indicating that everyone trusts them
            if (trustScore[i] == n - 1) {
                return i; // Found the town judge
            }
        }
        
        return -1; // No town judge found
    }
};
