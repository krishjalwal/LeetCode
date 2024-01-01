class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
            if (strs.empty()) {
        return "";
    }

    // Take the first string as a reference
    string prefix = strs[0];

    // Iterate through the remaining strings
    for (int i = 1; i < strs.size(); ++i) {
        // Iterate through characters in the current string and the current prefix
        int j;
        for (j = 0; j < min(prefix.size(), strs[i].size()); ++j) {
            if (prefix[j] != strs[i][j]) {
                break;
            }
        }

        // Update the prefix to the common part
        prefix = prefix.substr(0, j);

        // If the prefix becomes empty, no common prefix exists
        if (prefix.empty()) {
            break;
        }
    }

    return prefix;
}
    
};