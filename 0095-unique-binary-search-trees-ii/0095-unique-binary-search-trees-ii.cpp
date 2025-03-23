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
   vector<TreeNode*>helper(int a, int e)
   {
    if(a>e) return {NULL};
    vector<TreeNode*>ans;
    for(int i=a;i<=e;i++)
    {
        vector<TreeNode*>l = helper(a,i-1);
        vector<TreeNode*>r= helper(i+1,e);

        for(auto &it: l)
        {
            for(auto &it2: r)
            {
                TreeNode* curr = new TreeNode(i);
                curr->left=it;
                curr->right = it2;
                ans.push_back(curr);
            }
        }
    }
    return ans;
   }

    vector<TreeNode*> generateTrees(int n) {
        return helper(1,n);
    }
};