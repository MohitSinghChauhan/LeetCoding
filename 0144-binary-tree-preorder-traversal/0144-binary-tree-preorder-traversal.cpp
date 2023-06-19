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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*> s;
        s.push(root);

        while(!s.empty()){
            TreeNode* curr = s.top();
            s.pop();

            if(curr){
                if(curr->right) s.push(curr->right); //bcoz stack is lifo
                if(curr->left) s.push(curr->left);
                ans.push_back(curr->val);
            }
            
        }

        return ans;
    }

};









