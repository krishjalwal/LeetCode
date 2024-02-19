class Solution {
public:
    bool power(int n, long long int i)
    {
        if(i == n)
        {
            return true;
        }
        else if(i > n)
        {
            return false;
        }
        else
        {
            return power(n, i * 2LL); // Use long long int to avoid overflow
        }
    }
    bool isPowerOfTwo(int n) {
        return power(n, 1);
    }
};
