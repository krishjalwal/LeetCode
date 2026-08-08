// Last updated: 8/9/2026, 12:03:14 AM
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
    ListNode* removeNodes(ListNode* head) {
        ListNode *curr = head;
        stack<int>st;

        while(curr!=nullptr)
        {
            while(!st.empty() && curr->val > st.top())
            {
                st.pop();
            }
            st.push(curr->val);
            curr = curr->next;
        }

        vector<int>res;

        while(!st.empty())
        {
            res.push_back(st.top());
            st.pop();
        }


        reverse(res.begin(),res.end());

        for(auto i : res)
        {
            cout<<i<<" ";
        }

        curr = head;
        for(int i = 0 ; i < res.size() ; i++)
        {
            curr->val = res[i];
            curr = curr->next;
        }

        curr = head;

        for(int i = 0 ; i < res.size() - 1; i++)
        {
            curr = curr->next;
        }
        curr->next = nullptr;

        return head;
    }
};