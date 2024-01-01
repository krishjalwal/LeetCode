class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) 
        {
        return "";
        }

        string assume = strs[0];
        for(int i = 0 ; i < strs.size() ; i++)
        {
            int j;
            for( j = 0 ; j < min(assume.size(),strs[i].size()) ; j++)
            {
                if(assume[j] != strs[i][j])
                {
                    break;
                }
            }
            assume = assume.substr(0,j);
            if(assume.empty())
            {
                break; //yhin tut gya hoga j ki condition 0 bnegi dog mei
            }
        }
        return assume;
    }
};