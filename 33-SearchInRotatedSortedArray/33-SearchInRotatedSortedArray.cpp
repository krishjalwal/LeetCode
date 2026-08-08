// Last updated: 8/9/2026, 12:13:48 AM
#include <vector> //2nd way
using namespace std;

class Solution {
public:
    int search(vector<int>& a, int target) {
        
        int n = a.size();
        int low = 0;
        int high = n - 1;
        int ans = -1;

        while(low <= high)
        {
            int mid = low + (high - low)/2;

            if(a[mid] == target)
            {
                return mid;
            }

            else if(a[mid] <= a[n-1]) // FIX 1: Changed < to <= to handle mid == n-1
            {
                if(a[mid] < target)
                {
                    if(target <= a[n-1]) // FIX 2: Changed < to <=
                    {
                        low = mid + 1;
                    }
                    else
                    {
                        high = mid - 1;
                    }
                }
                else
                {
                    high = mid - 1;
                }
            }

            else if(a[mid] > a[n-1]) // Part 2
            {
                if(a[mid] < target)
                {
                    low = mid + 1; // FIX 3: If target > a[mid], always search RIGHT
                }
                else // target < a[mid]
                {
                    if(target >= a[0]) // FIX 4: Check if target belongs in left portion
                    {
                        high = mid - 1;
                    }
                    else
                    {
                        low = mid + 1;
                    }
                }
            }
        }
        return ans;
    }
};