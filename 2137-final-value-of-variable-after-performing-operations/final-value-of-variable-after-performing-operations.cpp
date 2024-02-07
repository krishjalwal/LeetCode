class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0 ;
        for(int i  = 0 ; i < operations.size() ; i++)
        {
            for(auto it : operations[i])
            {
                if(it=='-')
                {
                    ans--;
                    break;
                }
                else if(it == '+')
                {
                    ans++;
                    break;
                }
                else
                {
                    ans = ans;
                }
            }
        }
        return ans ;
    }
};