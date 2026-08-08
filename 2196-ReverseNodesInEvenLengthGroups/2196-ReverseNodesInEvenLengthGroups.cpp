// Last updated: 8/9/2026, 12:04:04 AM
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

ListNode* reverse(ListNode* head, int size)
{
    int times = size;
    ListNode* curr = head;
    ListNode* prev = nullptr;

    while(times--)
    {
        ListNode * next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
    ListNode* reverseEvenLengthGroups(ListNode* head) {
        
        if(head==nullptr or head->next==nullptr)
        {
            return head;
        }

        ListNode *first = head;
        ListNode *prev_last = head;
        ListNode *f = nullptr;
        int size = 1;


        while(first!=nullptr)
        {
            ListNode *last = first;
            int count = 1;
            int times = size-1;
            while(times--)
            {
                if(last->next)
                {
                    last = last->next;
                    count++;
                }
                else
                {
                    break;
                }
            }
          
            
            ListNode *next = last->next;
            

            if(count%2==0 and count>0)
            {
                f = reverse(first,count);
                prev_last->next = f;
                first->next = next;
                prev_last = first;
            }
            else if(count%2!=0 and count>0)
            {
                prev_last = last;
            }

            first = next;
            size++;
        }
        return head;
    }
};