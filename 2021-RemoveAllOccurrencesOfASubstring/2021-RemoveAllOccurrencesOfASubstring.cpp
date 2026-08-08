// Last updated: 8/9/2026, 12:04:38 AM
class Solution {
public:
    string removeOccurrences(string s, string part) {
        int pos = s.find(part);

        while (pos != string::npos) {
            s.erase(pos, part.size());
            pos = s.find(part);
        }

        return s;
    }
};