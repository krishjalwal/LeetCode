class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> mp;

        string ans = "";

        char currentChar = 'a';

        // Generate mapping based on the key
        for (char it : key) {
            if (isalpha(it) && mp.find(it) == mp.end()) {
                mp[it] = currentChar++;
            }
        }

        // Decode the message using the mapping
        for (char it : message) {
            if (it == ' ') {
                ans += " ";
            } else if (mp.find(it) != mp.end()) { // Check if the character is in the map
                ans += mp[it];
            }
            // If the character is not in the map, you can choose to ignore it or handle it differently
        }

        return ans;
        
    }
};