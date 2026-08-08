// Last updated: 8/9/2026, 12:10:02 AM
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int>mp;
        for(char ch : s){
            mp[ch] ++;
        }
        int sum = 0;
        for(auto i : mp){
            if(i.second & 1) sum += i.second - 1;
            else sum += i.second;
        }
        if(sum < s.size()){
            return sum + 1;
        }
        return sum;
    }
};