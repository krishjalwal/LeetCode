// Last updated: 9/7/2026, 2:57:34 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    void deleteNode(ListNode* node) {
12        
13
14        ListNode *temp = node->next;
15        node->val = temp->val;
16        node->next = temp->next;
17        delete temp;
18    }
19};