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
    int mindiff=INT_MAX, prev=-1;
    int getMinimumDifference(TreeNode* root) {
    
        if(root==nullptr) return mindiff;
        getMinimumDifference(root->left);
        if(prev>=0){
            mindiff=min(mindiff,root->val-prev);
        }
        prev=root->val;
        getMinimumDifference(root->right);
        return mindiff;
    }
};