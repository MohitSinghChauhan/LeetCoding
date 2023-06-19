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
        vector<vector<int>> result;
        if(root==NULL){
            return result;
        }
        queue<TreeNode*> nodesQueue;
        nodesQueue.push(root);

        while(true){
            int nodesInCurrentLevel = nodesQueue.size();
            if(nodesInCurrentLevel==0){
                break;
            }
            vector<int> nodes;
            while(nodesInCurrentLevel--){
                TreeNode* temp = nodesQueue.front();
                nodesQueue.pop();

                if(temp->left!=NULL) nodesQueue.push(temp->left);
                if(temp->right!=NULL) nodesQueue.push(temp->right);

                nodes.push_back(temp->val);
            }
            result.push_back(nodes);
        }

        return result;
    }
};











