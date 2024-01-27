class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[256] = {0};
        for(auto i : s)
        {
            arr[i]++;
        }

        for(auto i : t)
        {
            arr[i]--;
        }

        for(int i = 0 ; i < 256 ; i++)
        {
            if(arr[i] != 0)
            {
                return false;
            }
        }

        return true;
    }
};