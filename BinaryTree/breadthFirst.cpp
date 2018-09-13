/**
    Binary Search Tree
    Breadth First
    Level Order Traversal

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root) return {};
        vector<int> row;
        vector<vector<int>> ans;
        queue<TreeNode*> Q;
        
        Q.push(root);
        int count = 1;
        
        while(!Q.empty()) {
            //Meter los hijos a la queue
            if (Q.front()->left) Q.push(Q.front()->left); 
            if (Q.front()->right) Q.push(Q.front()->right);
            //FIFO, meter el front de la queue al vector
            row.push_back(Q.front()->val);
            Q.pop();
        
            //Acomodar todo en la matriz de vectores
            if (--count == 0) {
                ans.emplace_back(row);
                row.clear();
                count = Q.size();
            }
        }
        return ans;
    }
};