class Solution {
public:
    int strStr(string haystack, string needle) {
        int firstP = 0;
        int secondP = 0 ;
        int firstIndex = -1;
        if(haystack.size() < needle.size())
        {
            return -1;
        }

        while(firstP < haystack.size())
        {
            if(secondP == needle.size())
            {
                return firstIndex;
            }
            if(secondP==0)
            {
                firstIndex = firstP;
            }

            if(needle[secondP] == haystack[firstP])
            {
                firstP++;
                secondP++;
            }
            else
            {
                secondP = 0;
                firstP = firstIndex + 1;
                firstIndex = -1;
            }
            
        }
        return (secondP == needle.size()) ? firstIndex : -1;
    }
};