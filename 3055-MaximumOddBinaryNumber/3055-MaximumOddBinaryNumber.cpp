// Last updated: 8/9/2026, 12:02:43 AM
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        
        string ans = "";

        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i]=='1')
            {
                ans+='1';
                s[i] = '*';
                break; // Move the break statement inside the if block
            }
            // Remove the break statement from here
            
        }

        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i]=='0')
            {
                ans+='0';
            }
        }

        for(int i = 0 ; i < s.size() ; i++)
        {
            if(s[i]=='1')
            {
                ans+='1';
            }
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};