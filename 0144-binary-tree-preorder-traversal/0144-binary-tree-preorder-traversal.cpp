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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>res;
        stack<TreeNode*>st;
        TreeNode*curr=root;
        
        while(!st.empty() || curr)
        {
            while(curr)
            {
            res.push_back(curr->val);
            st.push(curr);
            curr=curr->left;
            }
        
        if(st.empty()==false)
        {
            curr=st.top();
            st.pop();
            curr=curr->right;
        }
           
    }
         return res;
    }
    
};