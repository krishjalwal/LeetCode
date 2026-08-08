// Last updated: 8/9/2026, 12:06:38 AM
class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int nodelete = arr[0];
        int onedelete = INT_MIN;
        int ans = arr[0];

        for(int i = 1 ; i < arr.size() ; i++)
        {
            int prevnodelete = nodelete;
            int prevonedelete = onedelete;

            nodelete = max(nodelete+arr[i],arr[i]);

            int v1;
            
            if(prevonedelete == INT_MIN)
            {
                v1 = arr[i]; 
            }
            else
            {
                v1 = prevonedelete + arr[i];
            }

            onedelete = max(v1,prevnodelete);

            ans = max(ans,max(nodelete,onedelete));
        }
        return ans;
    }
};