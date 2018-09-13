/**
	Binary Search Tree
	Preorder, postorder and inorder

 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        order(root, ans);
        return ans; 
    }
    
    void order(TreeNode* root, vector<int>& ans) {
        if (!root) return;
        
        //Preorder
        ans.push_back(root->val); 
        order(root->left, ans);
        order(root->right, ans);

        /*Postorder
        order(root->left, ans);
        ans.push_back(root->val);  <--
        order(root->right, ans);

        //Inorder 
        order(root->left, ans);
        order(root->right, ans);
        ans.push_back(root->val);  <--
        */
    }
};