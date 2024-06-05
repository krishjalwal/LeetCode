class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> minFreq(26, INT_MAX);

        // Loop through each word to calculate frequency of each character
        for (const string& word : words) {
            vector<int> charFreq(26, 0);
            for (char ch : word) {
                charFreq[ch - 'a']++;
            }
            
            for (int i = 0; i < 26; i++) {
                minFreq[i] = min(minFreq[i], charFreq[i]);
            }
        }

        vector<string> result;
        // Collect the characters that are common to all words
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < minFreq[i]; j++) {
                result.push_back(string(1, 'a' + i));
            }
        }

        return result;
    }
};
