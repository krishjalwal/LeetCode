class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        vector<int> arr;
        int rem = 0 ; 
        int quo = x ;

        while(quo!=0)
        {
            rem = x % 10;
            arr.push_back(rem);
            quo = x/10;
            x = quo;
        }

        int i = 0;
        int j = arr.size() - 1;

        while(i<=j)
        {
            if(arr[i]==arr[j])
            {
                i++;
                j--;
            }
            else
            {
                return false;
            }

        }
        
        return true;
    }
};