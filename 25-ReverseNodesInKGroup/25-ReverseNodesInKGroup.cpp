// Last updated: 8/9/2026, 12:14:02 AM
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

    void reverse(Node *head, int size)
    {
        int times = size;
        Node *curr = head;
        Node *prev = null;

        while(times--)
        {
            Node *nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==null or head->next == null)
        {
            return head;
        }

        int size = k;

        Node *left = head;
        Node *right = null;
        Node *prevleft = nullptr;
        Node *nextleft =nullptr;
        Node *res = nullptr;

        while(true)
        {
            if(left==null)
            {
                break;
            }
            right = left;
            
            for(int i = 0 ; i < size-1 ; i++)
            {
                if(right==null)
                {
                    break;
                }
                right = right->next;
            }

            if(right)
            {
                if(res==null)
                {
                    res = right;
                }
                nextleft = right->next;
                
                reverse(left,size);
                if(prevleft)
                {
                    prevleft->next = right;
                }
                prevleft = left;
                if(left==null)
                {
                    break;
                }
                left = nextleft;
            }
            else
            {
                if(prevleft)
                {
                    prevleft->next = left;
                }
                
                break;
            }
        }
        return res;
    }
};