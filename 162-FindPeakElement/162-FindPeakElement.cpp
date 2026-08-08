// Last updated: 8/9/2026, 12:11:56 AM
class Solution {
public:
    int findPeakElement(vector<int>& n) {

        if(n.size()==1)
        {
            return 0;
        }
        
        int low = 0;
        int high = n.size() - 1;
        int ans = high;



        while(low <= high)
        {
            int mid = low + (high - low)/2;

            if(mid+1 < n.size())
            {
                if(n[mid] < n[mid+1]) //chaadhai
                {
                    low = mid + 1;
                }
                else if(n[mid] > n[mid+1]) //dhaalan
                {
                    ans = mid;
                    high = mid - 1;
                }
            }
            else
            {
                break;
            }


        }
        return ans;
    }
};