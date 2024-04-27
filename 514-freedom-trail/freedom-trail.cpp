class Solution {
public:
    int findRotateSteps(string ring, string key) {
        int n = ring.size();
        int m = key.size();
        vector<vector<int>>dp(n+5,vector<int>(m+5,1e6));
        dp[1][0] = 0;
        int i,j,k;
        for(j = 0;j<m;j++)
        {
            for(i = 1;i<=n;i++)
            {
                //we need to press key[j] now.
                for(k = i;k<=n;k++)
                {
                    if(ring[k-1] != key[j])continue;
                    int dist;
                    if(k >= i)
                    {
                        dist = min(k - i, n - k + i);
                    }
                    else
                    {
                        dist = min(i - k, n - i + k);
                    }
                    dp[k][j+1] = min(dp[k][j+1], dist + 1 + dp[i][j]);
                }
                for(k = i-1;k>0;k--)
                {
                    if(ring[k-1] != key[j])continue;
                    int dist;
                    if(k >= i)
                    {
                        dist = min(k - i, n - k + i);
                    }
                    else
                    {
                        dist = min(i - k, n - i + k);
                    }
                    dp[k][j+1] = min(dp[k][j+1], dist + 1 + dp[i][j]);
                }
            }
        }
        int ans = 1e6;
        for(i = 1;i<=n;i++)
        {
            ans = min(ans, dp[i][m]);
        }
        return ans;
    }
};