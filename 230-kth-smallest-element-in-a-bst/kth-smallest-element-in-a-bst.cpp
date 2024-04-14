class Solution {
public:

    void traversal(TreeNode* root, vector<int> &arr)
    {
        if(root == NULL)
        {
            return;
        }

        traversal(root->left, arr);
        
        arr.push_back(root->val); // Push the value of the current node
        
        traversal(root->right, arr);
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int> arr ;

        traversal(root, arr);

        return arr[k-1];
    }
};
