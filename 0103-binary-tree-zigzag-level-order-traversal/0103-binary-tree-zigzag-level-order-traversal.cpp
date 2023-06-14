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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);

        int level=1;

        while(true){

            if(q.size()==0)
            return ans;

            int nodesInCurrentLevel = q.size();
            vector<int> val; 
            while(nodesInCurrentLevel--){
                
                if(q.front()->left!=NULL)
                q.push(q.front()->left);

                if(q.front()->right!=NULL)
                q.push(q.front()->right);

                val.push_back(q.front()->val);
                q.pop();

            }

            if(level%2==0) reverse(val.begin(),val.end());
            ans.push_back(val);
            level++;

        }
        return ans;
    }
};











