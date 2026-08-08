// Last updated: 8/9/2026, 12:12:40 AM
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
#define null NULL
#define Node ListNode

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == nullptr or left==right)
        {
            return head;
        }
        int size = right - left + 1;

        Node *curr = head;
        Node *prev = null;

        int count = 1;
        while(count < left)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }

        Node *flag1 = prev;
        Node *flag2 = curr;

        while(size--)
        {
            Node *nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }


 
        flag2->next = curr;


        if(flag1!=null)
        {
            flag1->next = prev;
        }
        else
        {
            head = prev;
        }

        return head;
    }
};