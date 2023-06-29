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

    int maxPathSumUtils(TreeNode* root, int& result){
        if(root==NULL){
            return 0;
        }
        
        int leftSum = max(0, maxPathSumUtils(root->left,result) );
        int rightSum = max(0, maxPathSumUtils(root->right,result) );

        int currPathSum = (leftSum + rightSum + root->val);
        result = max(result, currPathSum);

        return max(leftSum, rightSum) + root->val;
    }

    int maxPathSum(TreeNode* root) {
        int result = INT_MIN;
        maxPathSumUtils(root, result);
        return result;
    }
};