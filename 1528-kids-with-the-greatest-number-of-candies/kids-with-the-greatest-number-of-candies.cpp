#include <vector>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max_ele = 0;
        vector<bool> ans(candies.size()); // Initialize ans vector with proper size

        // Find the maximum number of candies among all kids
        for(int i = 0 ; i < candies.size() ; i++) {
            max_ele = max(max_ele, candies[i]);
        }

        // Check if each kid, after getting extra candies, will have the greatest number of candies
        for(int i = 0; i < candies.size(); i++) {
            if(candies[i] + extraCandies >= max_ele) {
                ans[i] = true;
            } else {
                ans[i] = false;
            }
        }

        return ans;
    }
};
