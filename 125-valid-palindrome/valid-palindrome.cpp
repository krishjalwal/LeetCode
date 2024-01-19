class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty())
        {
            return true;
        }
        string answer = "";
        for(char ch : s)
        {
            if(isalnum(ch))
            {
                answer += tolower(ch);
            }
        }

        int start = 0;
        int end = answer.length() - 1;
        while(start<=end)
        {
            if(answer[start] == answer[end])
            {
                start++;
                end--;
            }
            else
            {
                return false;
            }
        }
        return true;

    }
};