class Solution {
public:
    int numRescueBoats(std::vector<int>& people, int limit) {
        sort(people.begin(), people.end());

        int count = 0;
        int left = 0;
        int right = people.size() - 1;

        while (left <= right) {
            if (people[left] + people[right] <= limit) {
                // If both people can fit into a boat, move both pointers inward
                left++;
                right--;
            } else {
                // If only the person at the 'right' pointer can fit, move only 'right' inward
                right--;
            }
            // In either case, a boat is needed
            count++;
        }

        return count;
    }
};