class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0 ; int j = needle.size() -1;
        while(j<=haystack.size() - 1)
        {
            if(haystack.substr(i,j-i+1) == needle)
            {
                return i;
            }
            i++;
            j++;
        }
        return -1;
    }
};