// Last updated: 8/9/2026, 12:11:57 AM
class Solution {
public:
    int findMin(vector<int>& a) {
        //mid ka relation dhundna hii yes ya no or equal or bda bda bda bda chota chota chota

        int low = 0;
        int high= a.size() -1 ;
        int n = a.size();
        int ans = INT_MAX;
        

        while(low<=high)
        {
            int mid = low + (high - low)/2;

            if(a[mid]<=a[n-1]) //part1
            {
                ans = min(ans,a[mid]);
                high = mid - 1;
            }
            else //a[mid]>a[n-1] part2
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};