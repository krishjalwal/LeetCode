// Last updated: 8/9/2026, 12:12:07 AM
class Solution {
public:
    void reorderList(ListNode* head) {
        // FIX 1: Handle edge cases where length is 0, 1, or 2 (no reordering needed)
        if (head == nullptr || head->next == nullptr || head->next->next == nullptr) {
            return;
        }
        
        ListNode *slow = head;
        ListNode *fast = head;

        while(fast!=nullptr && fast->next!=nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode *mid = slow;

        ListNode *slow_prev = head;

        while(slow_prev->next!=slow)
        {
            slow_prev = slow_prev -> next;
        }

        slow_prev->next = nullptr;

        // reverse the 2nd LL

        ListNode *prev = nullptr;
        ListNode *curr = mid;
        ListNode *agla = nullptr;

        while(curr!=nullptr)
        {
            agla = curr->next;
            curr->next = prev;
            prev = curr;
            curr = agla;
        }

        ListNode *one_curr = head;
        ListNode *one_agla = nullptr;

        ListNode *two_curr = prev;
        ListNode *two_agla = nullptr;

        // FIX 2 & 3: Loop while one_curr is valid. 
        // Because List 2 has 1 extra element for odd lengths, 
        // we connect two_curr to one_agla only when one_agla exists.
        while(one_curr != nullptr && two_curr != nullptr)
        {
            one_agla = one_curr->next;
            two_agla = two_curr->next;

            one_curr->next = two_curr;
            
            // If one_agla is null, List 1 reached its end.
            // Connect two_curr to the rest of List 2 (if any) instead of null.
            if(one_agla!=nullptr)
            {
                two_curr->next = one_agla;
            }
            else
            {
                two_curr->next = two_agla;
            }

            one_curr = one_agla;
            two_curr = two_agla;
        }
    }
};