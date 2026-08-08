// Last updated: 8/9/2026, 12:12:08 AM
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        ListNode *slow = head;
        ListNode *fast = head;
        bool flag = false;
        ListNode *res = head;

        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow==fast)
            {
                flag = true;
                break;
            }
        }

        if(flag==false)
        {
            return nullptr;
        }

        slow = head;

        while(slow!=fast)
        {
            slow = slow -> next;
            fast = fast ->next;
        }

        return fast;

    }
};