class Solution {
public:
    int findMaxLength(vector<int>& nums) {
    int maxLength = 0;
    int countZeros = 0, countOnes = 0;
    unordered_map<int, int> countIndex; // Map to store the index of the first occurrence of count difference

    countIndex[0] = -1; // Initialize with a count difference of 0 at index -1

    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == 0)
            countZeros++;
        else
            countOnes++;

        int countDiff = countZeros - countOnes;

        if (countIndex.find(countDiff) != countIndex.end())
            maxLength = max(maxLength, i - countIndex[countDiff]);
        else
            countIndex[countDiff] = i;
    }

    return maxLength;
}
};