// Last updated: 9/13/2026, 1:30:30 AM
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
13    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
14        ListNode *curr1 = l1;
15        ListNode *curr2 = l2;
16        ListNode *prev2 = nullptr; // Track the previous node of l2
17        int carry = 0;
18        int sum = 0;
19
20        // 1. Process common length nodes
21        while (curr1 != nullptr && curr2 != nullptr) {
22            sum = curr1->val + curr2->val + carry;
23            curr2->val = sum % 10;
24            carry = sum / 10;
25
26            prev2 = curr2;
27            curr1 = curr1->next;
28            curr2 = curr2->next;
29        }
30
31        // 2. If l1 is longer than l2, splice l1's remaining tail onto l2
32        if (curr1 != nullptr) {
33            prev2->next = curr1;
34            curr2 = curr1;
35        }
36
37        // 3. Process remaining nodes (from l2 or spliced l1) and propagate carry
38        while (curr2 != nullptr) {
39            sum = curr2->val + carry;
40            curr2->val = sum % 10;
41            carry = sum / 10;
42
43            prev2 = curr2;
44            curr2 = curr2->next;
45        }
46
47        // 4. Handle final carry overflow by appending a new node
48        if (carry > 0) {
49            prev2->next = new ListNode(carry);
50        }
51
52        return l2;
53    }
54};