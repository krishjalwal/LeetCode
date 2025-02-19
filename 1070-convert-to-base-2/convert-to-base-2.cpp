class Solution {
public:
    string baseNeg2(int n) {
        if(n==0)
        {
            return "0";
        }
        
        string result = "";

        while(n!=0)
        {
            int bit = n & 1;
            result = to_string(bit) + result;
            n = (n - bit)/(-2);
        }

        return result;
       
    }
};