/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == NULL) {
            return ans;
        }

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int qsize = q.size();
            vector<int> temp;
            for (int i = 0; i < qsize; i++) {
                TreeNode* node = q.front();
                q.pop();
                temp.push_back(node->val);

                if (node->left != NULL) {
                    q.push(node->left);
                }
                if (node->right != NULL) {
                    q.push(node->right);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};