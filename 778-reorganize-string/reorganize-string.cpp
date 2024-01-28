class Solution {
public:
    string reorganizeString(string s) {
        int hash[26] = {0};
        for(int i = 0 ; i < s.size() ; i++)
        {
            hash[s[i] - 'a']++;
        }

        //most frequent
        char most_frequent;
        int frequent = INT_MIN;

        for(int i = 0 ; i < 26 ; i++)
        {
            if(hash[i] > frequent)
            {
                frequent = hash[i];
                most_frequent = i + 'a';
            }
        }

        int index = 0 ;
        while(frequent >0 && index < s.size())
            {
                s[index] = most_frequent;
                frequent--;
                index+=2;
            }

            if(frequent != 0)
            {
                return "";
            }

            hash[most_frequent - 'a'] = 0;

            for(int i = 0 ; i < 26 ; i++)
            {
                while(hash[i]>0)
                {
                    index = index >= s.size() ? 1 : index;
                    s[index] = i + 'a';
                    hash[i]--;
                    index+=2;
                }
            }
        return s;

    }
};