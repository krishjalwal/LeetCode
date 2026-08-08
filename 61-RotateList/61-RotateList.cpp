// Last updated: 8/9/2026, 12:13:13 AM
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr or head->next == nullptr)
        {
            return head;
        }

        long size = 1;

        ListNode *curr = head;
        while(curr->next!=nullptr)
        {
            curr = curr->next;
            size++;
        }

        long times =(int)k%size;

        for(int i = 0 ; i < times ; i++)
        {
            ListNode *piche = head;
            ListNode *aage = piche->next;
            while(aage->next!=nullptr)
            {
                aage = aage->next;
                piche = piche->next;
            }

            piche->next = aage->next;
            aage->next = head;
            head = aage;     
        }
        return head;

    }
};