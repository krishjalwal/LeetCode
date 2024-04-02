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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *temp = head; int count = 0;

        while(temp!=NULL)
        {
            count++;
            temp = temp->next;
        }

        int target = count - n;

        if(target==0)
        {
            ListNode *newNode = head -> next;
            delete head;
            return newNode;
        }

        ListNode *prev = NULL;
        ListNode *current = head;

        int start = 0;

        while(start < target)
        {
            start++;

            prev = current;
            current = current -> next;
        }
        prev->next = current -> next;
        return head;
    }
        
};