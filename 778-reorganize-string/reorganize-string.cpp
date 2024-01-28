class Solution {
public:
    string reorganizeString(string s) {
        int hash[26] = {0};
        for(int i = 0 ; i < s.size() ; i++)
        {
            hash[s[i] - 'a']++;
        }

        char most_freq;
        int max_freq = INT_MIN;
        for(int i = 0 ; i < 26 ; i++)
        {
            if(hash[i] > max_freq)
            {
                max_freq = hash[i];
                most_freq = i + 'a';
            }
        }

        int index = 0 ; 
        while(max_freq > 0 && index < s.size())
        {
            s[index] = most_freq;
            max_freq --;
            index = index + 2;
        }

        if(max_freq != 0)
        {
            return "";
        }

        hash[most_freq - 'a'] = 0;

        for(int i = 0 ; i < 26 ; i++)
        {
            while(hash[i] > 0)
            {
                index = index >= s.size() ? 1 : index;
                s[index] = i + 'a';
                hash[i]--;
                index = index + 2;

            }
        }
        return s;
    }
};