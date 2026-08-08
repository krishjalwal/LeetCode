// Last updated: 8/9/2026, 12:05:08 AM
class Solution {
public:
    string interpret(string command) {
        string ans = "";

        for(int i = 0 ; i < command.size() ; i++)
        {
            if(command[i]=='(' && command[i+1]==')')
            {
                ans+="o";
            }
            else if(isalpha(command[i]))
            {
                ans+=command[i];
            }
            else if(command[i]=='(' && isalpha(command[i]))
            {
                ans+="al";
            }
        }
        return ans;
    }
};