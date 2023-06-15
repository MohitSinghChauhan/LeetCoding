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


    int heightOfTree(TreeNode* root, bool& isBalancedBT){
        
        if(root==NULL) return 0;
        int h=0, lh=0, rh=0;

        lh = heightOfTree(root->left, isBalancedBT);
        rh = heightOfTree(root->right, isBalancedBT);

        if(abs(lh-rh)>1){
            isBalancedBT=false;
        }

        h = max(lh,rh) +1;
        return h;

    }

    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }

        bool isBalancedBT=true;
        heightOfTree(root,isBalancedBT);

        return isBalancedBT;
    }
};










