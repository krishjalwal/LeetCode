class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0 ;
        unordered_map<char,int> mp;

        for(auto ch : stones)
        {
            mp[ch]++;
        }

        for(int i = 0 ; i < jewels.size() ; i++)
        {
            for(auto it : mp)
            {
                if(it.first == jewels[i])
                {
                    count += it.second;
                }
            }
        }

        return count;
    }
};