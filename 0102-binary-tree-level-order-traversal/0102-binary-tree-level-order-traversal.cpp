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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if(root == NULL){
            return ans;
        }
        
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int> temp;

        while(!q.empty()){
            
            TreeNode* temp1 = q.front();
            q.pop();

            if(temp1 == NULL){
                ans.push_back(temp);
                temp.clear();

                if(!q.empty()){
                    q.push(NULL);
                }

            }else{
                temp.push_back(temp1 -> val);

                if(temp1 -> left){
                    q.push(temp1 -> left);
                }
                if(temp1 -> right){
                    q.push(temp1 -> right);
                }

            }
        }

        return ans;

        
    }
};