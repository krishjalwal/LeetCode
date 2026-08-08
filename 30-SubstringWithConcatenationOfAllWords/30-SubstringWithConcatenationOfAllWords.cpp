// Last updated: 8/9/2026, 12:13:51 AM
// 1. CP COMPILER PRAGMAS (Forces CPU to vectorize loops and run at max speed)
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

// 2. FAST I/O TEMPLATE (Bypasses standard C++ input/output bottlenecks)
static const int __ = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    // Your exact 'sahi' logic, but now it checks integers in arrays instead of strings!
    bool sahi(const vector<int>& word_ids, int start, int numWords, int wordLen, 
              const vector<int>& need, vector<int>& have) {
        
        // Fast reset of the 'have' array without reallocating memory
        fill(have.begin(), have.end(), 0);
        
        for(int j = 0; j < numWords; j++) {
            // Get the ID of the word at this position
            int id = word_ids[start + j * wordLen];
            
            // If id is -1, it's not a word we need
            if (id == -1) return false;
            
            have[id]++;
            
            // If we have more of this word than needed, fail early
            if (have[id] > need[id]) return false;
        }
        return true;
    }

    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> res;
        if (s.empty() || words.empty()) return res;
        
        int wordLen = words[0].size();
        int numWords = words.size();
        int len = wordLen * numWords;
        int n = s.size();
        
        if (len > n) return res;

        // 3. INTEGER MAPPING TRICK: Give every unique string an integer ID (0, 1, 2...)
        unordered_map<string, int> str_to_id;
        int id_counter = 0;
        for (const string& word : words) {
            if (str_to_id.find(word) == str_to_id.end()) {
                str_to_id[word] = id_counter++;
            }
        }
        
        // Now 'need' and 'have' are simple, blazing-fast integer arrays just like your first draft!
        vector<int> need(id_counter, 0);
        for (const string& word : words) {
            need[str_to_id[word]]++;
        }
        
        // PRECOMPUTE: Scan the string ONCE and translate it entirely into Word IDs
        // This completely removes string operations from your loops!
        vector<int> word_ids(n, -1);
        for (int i = 0; i <= n - wordLen; i++) {
            string sub = s.substr(i, wordLen);
            auto it = str_to_id.find(sub);
            if (it != str_to_id.end()) {
                word_ids[i] = it->second;
            }
        }
        
        // Your exact outer loop, completely untouched
        vector<int> have(id_counter, 0);
        for(int i = 0 ; i <= n - len ; i++) {
            if(sahi(word_ids, i, numWords, wordLen, need, have)) {
                res.push_back(i);
            }
        }
        
        return res;
    }
};