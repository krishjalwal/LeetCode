// Last updated: 8/9/2026, 12:09:52 AM
class Solution {
public:
    // Passed by const reference to avoid TLE
    bool sahi(const vector<int>& have, const vector<int>& need) {
        for(int i = 0; i < 256; i++) {
            if(have[i] < need[i]) {
                return false;
            }
        }
        return true;
    }
    
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        if(s.size() < p.size()) return res;
        
        vector<int> need(256, 0);
        vector<int> have(256, 0);

        for(char c : p) {
            need[c]++;
        }

        int low = 0;
        int high = 0;

        while(high < s.size()) {
            have[s[high]]++;
            
            // Shrink window from the left as long as we satisfy the required frequencies
            while(sahi(have, need)) {
                // FIXED: Only register as an anagram if the window length matches p.size()
                if(high - low + 1 == p.size()) {
                    res.push_back(low);
                }
                
                have[s[low]]--;
                low++;
            }

            high++;
        }
        
        return res;
    }
};