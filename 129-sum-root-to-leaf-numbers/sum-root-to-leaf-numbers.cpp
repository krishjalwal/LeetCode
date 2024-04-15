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
    int sumNumbers(TreeNode* root) {
        return sumRootLeaf(root,0);    //current sum bheja 
    }

    int sumRootLeaf(TreeNode *root , int currentSum)
    {
        if(root==NULL)
        {
            return 0;     // null h tu 0 return kiya
        }

        currentSum = currentSum*10 + (root->val);   // sum add wala rule lgaya

        if(root->left==NULL && root->right==NULL)  // agr leaf node h tu abhi jitna hua h utna return kar diya 
        {
            return currentSum;
        }


        int leftSum = sumRootLeaf(root->left,currentSum);  // ek bar left chle gye 
        int rightSum = sumRootLeaf(root->right,currentSum); // ek bar right gye 

        return leftSum + rightSum;  // dono ko last mei add krke final answer dediya
    }
};