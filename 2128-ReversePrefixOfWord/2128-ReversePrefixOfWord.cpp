// Last updated: 8/9/2026, 12:04:18 AM
class Solution {
public:
    string reversePrefix(string word, char ch) {
        // Find the first occurrence of the character 'ch'
        int j = 0;
        while (j < word.size() && word[j] != ch) {
            j++;
        }

        // If 'ch' is not found in the string, return the original string
        if (j == word.size()) {
            return word;
        }

        // Reverse the prefix of the string up to and including the first
        // occurrence of 'ch'
        int i = 0;
        while (i < j) {
            swap(word[i], word[j]);
            i++;
            j--;
        }

        return word;
    }
};
