class Solution {
public:

    int maxDigit(int num)
    {
        int maxdigi = 0;
        while(num > 0)
        {
            int digit = num % 10;
            maxdigi = max(maxdigi , digit);
            num = num / 10;
        }
        return maxdigi;
    }

    int encrypt(int num)
    {
        int maxDigi = maxDigit(num);
        int encryptedNum = 0 ;
        int multiplier = 1;

        while(num > 0)
        {
            encryptedNum += maxDigi * multiplier;
            multiplier *= 10;
            num /= 10;
        }
        return encryptedNum;
    }

    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for(auto it : nums)
        {
            sum += encrypt(it);
        }
        return sum;
    }
};