/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    void dfs(TreeNode *root, string current , string &smallest)
    {
        if(root == NULL)
        {
            return;
        }
        char ch = 'a' + root->val;
        current += ch;

        if(root->left == NULL && root->right == NULL)
        {
            reverse(current.begin(),current.end());
            if(smallest.empty() || current < smallest)
            {
                smallest = current;
            }
        }

        dfs(root->left,current,smallest);
        dfs(root->right,current,smallest);
    }

    string smallestFromLeaf(TreeNode* root) {
        string smallest;
        dfs(root,"",smallest);
        return smallest;
    }
};