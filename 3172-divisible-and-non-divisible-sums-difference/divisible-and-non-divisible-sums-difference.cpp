class Solution {
public:
    int differenceOfSums(int n, int m) {
        vector<int> divisible;
        vector<int> nonDivisible;

        for(int i = 1 ; i <= n ; i++)
        {
            if(i%m==0)
            {
                divisible.push_back(i);
            }
            else
            {
                nonDivisible.push_back(i);
            }
        }

        int divisibleSum = 0 ;
        int nonDivisibleSum = 0 ; 

        for(auto it : divisible)
        {
            divisibleSum += it;
        }
        for(auto it : nonDivisible)
        {
            nonDivisibleSum += it;
        }

        return (nonDivisibleSum - divisibleSum);
    }
};