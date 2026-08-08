// Last updated: 8/9/2026, 12:11:05 AM
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
        // *node = *node->next;
    }
};
