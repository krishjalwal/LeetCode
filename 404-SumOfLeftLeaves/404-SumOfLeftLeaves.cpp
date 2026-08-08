// Last updated: 8/9/2026, 12:10:05 AM
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == nullptr)
            return 0;

        int sum = 0;
        if (root->left != nullptr && root->left->left == nullptr && root->left->right == nullptr) {
            sum += root->left->val; 
        }

       
        
        sum += sumOfLeftLeaves(root->right);
        sum += sumOfLeftLeaves(root->left);

        return sum;
    }
};
