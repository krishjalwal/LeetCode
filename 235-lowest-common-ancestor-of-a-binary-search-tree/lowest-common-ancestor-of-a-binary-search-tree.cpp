/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
#pragma GCC optimize("Ofast")
static auto _ = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while (root != NULL) {
            if (p->val > root->val && q->val > root->val) {
                root = root->right;
            } else if (p->val < root->val && q->val < root->val) {
                root = root->left;
            } else {
                return root;
            }
        }
        return nullptr;
    }
};