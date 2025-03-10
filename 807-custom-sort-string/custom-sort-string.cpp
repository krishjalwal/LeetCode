class Solution {
public:
    string customSortString(string order, string s) {
        string ans = "";
        string remaining = "";

        // Step 1: Append characters from s that match order to ans
        for (int i = 0; i < order.size(); i++) {
            for (int j = 0; j < s.size(); j++) {
                if (order[i] == s[j]) {
                    ans += order[i];
                }
            }
        }

        // Step 2: Append characters from s that don't match order to remaining
        for (int i = 0; i < s.size(); i++) {
            bool found = false;
            for (int j = 0; j < order.size(); j++) {
                if (order[j] == s[i]) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                remaining += s[i];
            }
        }

        // Step 3: Append remaining to ans
        ans += remaining;

        return ans;
    }
}
;