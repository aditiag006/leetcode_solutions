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
        if(root == NULL) return 0;

        int left_h = maxDepth(root -> left);
        int right_h = maxDepth(root -> right);

        return max(left_h, right_h) + 1;
        
    }

    int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0;

        int d1 = diameterOfBinaryTree(root -> left);
        int d2 = diameterOfBinaryTree(root -> right);
        int d3 = maxDepth(root -> left) + maxDepth(root -> right);

        return max(d1, max(d2, d3));
        
    }
};