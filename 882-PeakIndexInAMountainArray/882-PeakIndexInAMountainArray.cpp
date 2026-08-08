// Last updated: 8/9/2026, 12:07:59 AM
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& a) {
        
        int low = 0;
        int high = a.size() -1;
        int ans = -1;

        while(low<=high)
        {
            int mid = low + (high-low)/2;
            
            if(a[mid]<a[mid+1])
            {
                low = mid + 1;
            }
            else if(a[mid]>a[mid+1])
            {
                ans = mid;
                high = mid - 1;
            }
        }
        return ans;
    }
};