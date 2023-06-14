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
        if(root==NULL){
            return ans;
        }

        queue<TreeNode*> q;
        q.push(root);
        while(true){
            int nodesInCurrentLevel = q.size();
            if(q.size()==0){
                return ans;
            }
            vector<int> data;
            while(nodesInCurrentLevel>0){
                if(q.front()->left!=NULL)
                q.push(q.front()->left);

                if(q.front()->right!=NULL)
                q.push(q.front()->right);

                data.push_back(q.front()->val);

                q.pop();
                nodesInCurrentLevel--;
            }
            ans.push_back(data);
        }

        return ans;
    }
};











