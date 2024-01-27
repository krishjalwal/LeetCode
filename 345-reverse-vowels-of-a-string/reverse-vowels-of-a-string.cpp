class Solution {
public:
    bool isVowel(char s)
    {
        if(tolower(s)=='a' || tolower(s)=='e' || tolower(s)=='i' || tolower(s)=='o' || tolower(s)=='u')
        {
            return true;
        }
        return false;
    }

    string reverseVowels(string s) {
        int start = 0 ; int end = s.length() - 1;

       while(start < end)
       {
           if(isVowel(s[start]) && isVowel(s[end]))
           {
               swap(s[start],s[end]);
               start++; end--;
           }
           else if(!isVowel(s[start]))
           {
               start++;
           }
           else
           {
               end--;
           }
       }
       return s;
    }
};