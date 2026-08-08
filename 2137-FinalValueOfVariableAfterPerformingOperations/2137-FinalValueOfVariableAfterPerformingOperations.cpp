// Last updated: 8/9/2026, 12:04:17 AM
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans = 0;
        for (auto it : operations) 
        {
            if(it[1]=='-') ans--;
            else ans++;
        }
        return ans;
    }
};