// Last updated: 8/9/2026, 12:09:36 AM
class Solution {
public:
    bool circularArrayLoop(vector<int>& nums) {
        
        int n = nums.size();

        vector<int>visited(n,-1);

        for(int start = 0; start < n ; start++)
        {
            int curr = start;
            bool isforward = nums[start]>0;

            while(true)
            {
                if((nums[curr]>0)!=isforward)
                {
                    break;
                }

                int next_i = ((curr+nums[curr])%n+n)%n;

                if(next_i==curr)
                {
                    break;
                }

                if(visited[next_i]==start)
                {
                    return true;
                }

                visited[curr]=start;
                curr = next_i;
            }
        }
        return false; 
    }
};