class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
            auto compareByCloseness = [&](int a, int b) {
        if (abs(a - x) == abs(b - x)) {
            return a < b;
        }
        return abs(a - x) < abs(b - x);
    };

    // Sorting the array based on the custom comparator
    sort(arr.begin(), arr.end(), compareByCloseness);

    // Taking the first k elements from the sorted array
    vector<int> result(arr.begin(), arr.begin() + k);

    // Sorting the result in ascending order
    sort(result.begin(), result.end());

    return result;
    }
};