class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> freq;

        // Count frequency of characters in string s
        for (char c : s) {
            freq[c]++;
        }
        for(char c:t){
            freq[c]--;
        }

        int minSteps = 0;

        // Sum up the absolute differences between frequencies
        for (const auto& pair : freq) {
            if(pair.second > 0)
            {
                minSteps += pair.second;
            }
             // Add the absolute difference in frequencies
        }

        // Since the strings are of the same length, we need to divide by 2 to get the number of steps
        return minSteps;
    }
};