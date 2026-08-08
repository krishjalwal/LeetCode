// Last updated: 8/9/2026, 12:07:53 AM
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        long low = 1 ; 
        long long high = *max_element(piles.begin(),piles.end());
        int ans = -1;
        

        while(low<=high)
        {
            long long mid = low + (high - low)/2;
            long long sum = 0;

            for(long long i : piles)  
            {
                sum += ceil((double)i/mid);
            }

            if(sum<=h)  //kam se kam time mei sara banana khana hai , sab complete krna hai jaldi ho jaye to time bdha ke optimal lana hai but under the time jab tak guard wapas aaye sab khana hai.
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        return ans;
    }
};