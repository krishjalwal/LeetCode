// Last updated: 8/9/2026, 12:07:44 AM
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int start = 0 ; int end = s.length() - 1;

        while(start<=end)
        {
            if(isalpha(s[start]) && isalpha(s[end]))
            {
                swap(s[start],s[end]);
                start++; end--;
            }
            else if(!isalpha(s[end]))
            {
                end--;
            }
            else if(!isalpha(s[start]))
            {
                start++;
            }
        }
        return s;
        }

};