class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp;
        int ans = 0;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        int result = 0 ; int prev = 0;

        for(int i = s.size() - 1 ; i>=0 ; i--)
        {
            int current = mp[s[i]];
            if(current < prev)
            {
                result -= current;
            }
            else
            {
                result += current;
            }
            prev = current;
        }
        return result;
    }
};