// Last updated: 8/9/2026, 12:14:25 AM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int i = 0 ;

        while(true)
        {
            char current = 0 ; 
            for(auto str : strs)
            {
                if(i >= str.size())
                {
                    current = 0 ;
                    break;
                }
                if(current == 0)
                {
                    current = str[i];
                }
                else if(str[i] != current)
                {
                    current = 0;
                    break;
                }
            }
            if(current == 0)
            {
                break;
            }
            ans += current;
            i++;
        }
        return ans;
    }
};