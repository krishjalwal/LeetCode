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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> ans = {-1,-1};
        ListNode* prev = head;
        ListNode* cur = head->next;
        ListNode* fwd = cur->next;
        bool isFirst = true;
        int first = 2;
        int curPos = 1; int prevPos = 1;int ptr = 2;int minDiff = INT_MAX;
        while(fwd){
            if((cur->val<fwd->val && cur->val<prev->val)|| (cur->val>fwd->val && cur->val>prev->val)){
                if(isFirst){first = ptr;isFirst=false;prevPos = ptr;curPos = ptr;}
                else{prevPos=curPos;curPos=ptr;minDiff = min(minDiff,(curPos-prevPos));}
            }
            cur=cur->next;
            fwd=fwd->next;
            prev=prev->next;
            ++ptr;
        }
        if(minDiff == INT_MAX || (curPos-first==0)){return ans;}
        ans[0] = minDiff;ans[1] = curPos-first;
        return ans;
    }
};