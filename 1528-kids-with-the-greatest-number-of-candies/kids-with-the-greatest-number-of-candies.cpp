class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> v(candies.size(),false);
        int maxx=INT_MIN;
        for(int i=0;i<candies.size();i++){
            maxx=max(candies[i],maxx);
        }
        for(int i=0;i<candies.size();i++){
            v[i]=(candies[i]+extraCandies>=maxx);
        }
        return v;
    }
};