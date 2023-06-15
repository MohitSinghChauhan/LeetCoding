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

    // static int maxDepth(TreeNode* root) {
    //     if(root==NULL){
    //         return 0;
    //     }
    //     int leftHeight = maxDepth(root->left);
    //     int rightHeight = maxDepth(root->right);

    //     return max(leftHeight, rightHeight) + 1;
    // }


    int heightOfTree(TreeNode* root){
        
        if(root==NULL) return 0;
        int h=0, lh=0, rh=0;

        lh = heightOfTree(root->left);
        rh = heightOfTree(root->right);

        h = max(lh,rh) +1;
        return h;

    }

    bool isBalanced(TreeNode* root) {
        if(root==NULL ){
            return true;
        }

        queue<TreeNode*> nodesQueue;
        nodesQueue.push(root);

        while(!nodesQueue.empty()){
            TreeNode* temp = nodesQueue.front();
            nodesQueue.pop();

            if(temp->left!=NULL)
            nodesQueue.push(temp->left);
            if(temp->right!=NULL)
            nodesQueue.push(temp->right);

            if(abs(heightOfTree(temp->left)-heightOfTree(temp->right))>1){
                return false;
            }

        }

        return true;
    }
};









