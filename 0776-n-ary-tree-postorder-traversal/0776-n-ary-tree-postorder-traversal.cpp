/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:

    void postOrderTraversal(Node* root, vector<int>& ans){
        if(root==NULL) return;
        for(auto i : root->children) {
            postOrderTraversal(i,ans);
            // ans.push_back(i->val);
        }
        ans.push_back(root->val);
    }

    vector<int> postorder(Node* root) {
        vector<int> ans;
        postOrderTraversal(root,ans);
        return ans;
    }
};