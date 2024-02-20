class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if ((str1 + str2) != (str2 + str1)) {
            return ""; // If concatenation doesn't match, return empty string
        }

        // Find the GCD
        while (str1 != str2) {
            if (str1.length() > str2.length()) {
                str1 = str1.substr(str2.length()); // Remove the common prefix
            } else {
                str2 = str2.substr(str1.length()); // Remove the common prefix
            }
        }

        return str1; // or str2, since they are equal
    }
};