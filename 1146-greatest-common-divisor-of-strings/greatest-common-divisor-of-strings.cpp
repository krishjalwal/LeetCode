class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if ((str1 + str2) != (str2 + str1)) {
            return "";
        }

        // Find the GCD
        while (str1 != str2) {
            if (str1.length() > str2.length()) {
                str1 = str1.substr(str2.length());
            } else {
                str2 = str2.substr(str1.length());
            }
        }

        return str1;
    }
};