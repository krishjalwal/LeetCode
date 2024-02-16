class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>altitude{0};
        int alt;

        for(int i = 0 ; i < gain.size() ; i++)
        {
            alt = altitude[i] + gain[i];
            altitude.push_back(alt);
        }
        int max = 0;
        for(int i = 0 ; i < altitude.size(); i++)
        {
            if(altitude[i]>max)
            {
                max = altitude[i];
            }
        }
        return max;
    }
};