class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> answer;
        vector<int> dubli;
        for (int i = 1; i <= nums.size(); i++) {
            dubli.push_back(i);
        }

        unordered_map<int, int> hashing;

        for (auto it : nums) {
            hashing[it]++;
        }

        for (auto it : hashing) {
            int repeat = it.second;
            if (repeat > 1) {
                answer.push_back(it.first); // Push the duplicated number
            }
        }

        int result = 0;

        for (int x : dubli) {
            result ^= x;
        }

        for (int x : nums) {
            result ^= x;
        }

        answer.push_back(result ^ answer[0]); // XOR the duplicated number with the result to find the missing number
        return answer;
    }
};