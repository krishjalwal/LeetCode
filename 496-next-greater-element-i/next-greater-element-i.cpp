class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> answer;
        for(int i = 0; i < nums1.size(); i++) {
            int current = nums1[i];
            bool found = false;
            for(int j = 0; j < nums2.size(); j++) {
                if(nums2[j] == current) {
                    found = true;
                }
                if(found && nums2[j] > current) {
                    answer.push_back(nums2[j]);
                    break;
                }
                if(j == nums2.size() - 1) {
                    
                    answer.push_back(-1);
                }
            }
        }
        return answer;
    }
};