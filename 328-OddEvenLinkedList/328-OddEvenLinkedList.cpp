// Last updated: 9/11/2026, 6:36:40 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* oddEvenList(ListNode* head) {
14
15        if(head==nullptr or head->next==nullptr)
16        {
17            return head;
18        }
19        
20        ListNode *odd = head;
21        ListNode *even = head->next;
22        ListNode *head2 = head->next;
23
24        while(odd!=nullptr and odd->next!=nullptr and even!=nullptr and even->next != nullptr)
25        {
26                odd->next = odd->next->next;
27                odd = odd->next;
28    
29                even->next = even->next->next;
30                even = even->next;
31        }
32
33        odd->next = head2;
34
35        return head;
36    }
37};