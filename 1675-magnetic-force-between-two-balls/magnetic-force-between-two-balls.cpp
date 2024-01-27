class Solution {
public:

    bool possible(vector<int> bins , int m , int mid)
    {
        int counter = 1;
        int position = bins[0];

        for(int i = 1 ; i < bins.size() ; i++)
        {
            if(bins[i] - position >= mid)
            {
                counter++;
                position = bins[i];
            }
            if(counter == m)return true;
        }
        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin() , position.end());
        int start = 0 ; int end = position[position.size() - 1] - position[0];
        int ans = -1;

        while(start<=end)
        {
            int mid = (start + end)/2;
            if(possible(position , m , mid))
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }

        }
        return ans;
    }
};