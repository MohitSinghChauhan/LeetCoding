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

   int heightOfTree( TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int heightOfLeftSubtree = heightOfTree(root->left);
        int heightOfRightSubtree = heightOfTree(root->right);
        return(max(heightOfLeftSubtree,heightOfRightSubtree)+1);
    }
     

    int diameterOfBinaryTree(TreeNode* root) {

        if(root==NULL){
            return 0;
        }

        int leftSubtreeDiameter = diameterOfBinaryTree(root->left);
        int rightSubtreeDiameter = diameterOfBinaryTree(root->right);

        int maxDiameter = heightOfTree(root->left) + heightOfTree(root->right);
        maxDiameter = max(maxDiameter, max(leftSubtreeDiameter,rightSubtreeDiameter));
        
        return maxDiameter;
    }
};












