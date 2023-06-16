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

   int maxHeightOfSubtrees( TreeNode* root, int& maxDiameter){
        if(root==NULL){
            return 0;
        }
        int heightOfLeftSubtree = maxHeightOfSubtrees(root->left,maxDiameter);
        int heightOfRightSubtree = maxHeightOfSubtrees(root->right,maxDiameter);

        if((heightOfLeftSubtree+heightOfRightSubtree)>maxDiameter){
            maxDiameter = heightOfLeftSubtree + heightOfRightSubtree;
        }
        return(max(heightOfLeftSubtree,heightOfRightSubtree)+1);
    }
     

    int diameterOfBinaryTree(TreeNode* root) {

        int maxDiameter = 0;
        int data = maxHeightOfSubtrees(root,maxDiameter);
        return maxDiameter;
    }
};












