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
        void first(TreeNode* root,vector<int>&arr)
    {
        if(!root)return;
        if(!root->left && !root->right){
            arr.push_back(root->val);
            return;
        }
        first(root->left,arr),first(root->right,arr);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>t1,t2;
        first(root1,t1),first(root2,t2);
        return t1==t2;

    }
};