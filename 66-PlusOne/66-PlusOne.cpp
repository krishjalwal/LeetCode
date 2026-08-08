// Last updated: 8/9/2026, 12:13:12 AM
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int index = digits.size() - 1;
        while(index >= 0)
        {
            if(digits[index]==9)
            {
                digits[index]=0;
            }
            else
            {
                digits[index] = digits[index] + 1;
                return digits;
            }
            index--;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};