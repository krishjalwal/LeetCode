class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> characters;
        for(int i = 0 ; i < s.length() ; i++)
        {
            characters[s[i]]++;
        }

        for(int i = 0 ; i < s.length() ; i++)
        {
            if(characters[s[i]]==1)
            {
                return i;
            }
        }
        return -1 ;
    }
};