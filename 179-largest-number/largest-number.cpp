class Solution {
public:
    static bool mycomp(string a , string b)
    {
        string t1 = a + b;
        string t2 = b + a;

        return t1 > t2;
    }

    string largestNumber(vector<int>& nums) {
        vector<string> snums;
        

        for(auto num : nums)
        {
            snums.push_back(to_string(num));
        }

        string ans = "";

        sort(snums.begin(),snums.end(),mycomp);
        if(snums[0]=="0")
        {
            return "0";
        }
        for(auto s : snums)
        {
            ans += s;
        }
        return ans;
    }
};