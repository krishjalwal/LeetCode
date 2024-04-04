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
    int maxDepth(TreeNode* root) {
         if(root == NULL)
         {
            return 0;
         }
         
         int count1= 0; int count2 = 0;

         if(root->left != NULL)
         {
            count1 = maxDepth(root->left);
         }

         if(root->right != NULL)
         {
            count2 = maxDepth(root->right);
         }

         int maxCount = max(count1 , count2);

         return maxCount + 1;

    }
};