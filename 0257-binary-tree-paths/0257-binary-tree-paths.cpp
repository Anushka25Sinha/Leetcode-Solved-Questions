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
    void Path(TreeNode* node, vector<string>& ans, string temp)
    {
        temp += to_string(node->val);

    if (!node->left && !node->right) { 
        ans.push_back(temp);  
        return;
    }

    if (node->left) Path(node->left, ans, temp + "->");
    if (node->right) Path(node->right, ans, temp + "->");
    }
   
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        if(root) Path(root, ans, "");
        return ans;
    }
};