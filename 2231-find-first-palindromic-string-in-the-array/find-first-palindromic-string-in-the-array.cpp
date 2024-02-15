class Solution {
public:
    bool palindrome(string& it)
    {
        int start = 0 ; int end = it.size() - 1;

        while(start < end)
        {
            if(it[start]!=it[end])
            {
                return false;
            }
            start++; end--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(auto it : words)
        {
            if(palindrome(it))
            {
                return it;
            }
        }
        return "";
    }
};