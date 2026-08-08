// Last updated: 8/9/2026, 12:11:12 AM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        ListNode *slow = head;
        ListNode *fast = head;

        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow = slow->next;
            fast = fast->next;
            fast = fast->next;
        }

        ListNode *prev = nullptr;
        ListNode *curr = slow;
        ListNode *agla = slow->next;
        

        while(curr!=nullptr)
        {
            agla = curr->next;
            curr->next = prev;
            prev = curr;
            curr = agla;
        }

        slow = head;

        while(prev!=nullptr)
        {
            if(prev->val!=slow->val)
            {
                return false;
            }
            prev = prev->next;
            slow = slow->next;
        }
        return true;
    }
};