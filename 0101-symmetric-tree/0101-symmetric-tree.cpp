class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        queue<TreeNode*> nodesQueue;
        nodesQueue.push(root);
        nodesQueue.push(root);
        while(!nodesQueue.empty()){
            TreeNode* t1 = nodesQueue.front();
            nodesQueue.pop();
            TreeNode* t2 = nodesQueue.front();
            nodesQueue.pop();

            if(!t1 && !t2) continue;
            if(!t1 || !t2) return false;

            if(t1->val!=t2->val) return false;
            
            nodesQueue.push(t1->left);
            nodesQueue.push(t2->right);
            nodesQueue.push(t1->right);
            nodesQueue.push(t2->left);

        }

        return true;
        
    }
};




