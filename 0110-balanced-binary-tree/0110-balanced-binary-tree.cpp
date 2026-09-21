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

    bool isBalanced(TreeNode* root) {

        if(root == NULL) return true;

        int h1 = maxDepth(root -> left);
        int h2 = maxDepth(root -> right);

        if(abs(h1 - h2) > 1) return false;
        
        return isBalanced(root -> left) && isBalanced(root -> right);
    }
};