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
    vector<TreeNode*> v;
    void preOrder(TreeNode* root){
        if (root==NULL) return;
        v.push_back(root);
        preOrder(root->left);
        preOrder(root->right);
    }
    void flatten(TreeNode* root) {
        if (root == NULL) return;
        preOrder(root);
        root->left = NULL;
        for(int i=1;i<v.size();i++){
            root->right = v[i];
            root = root->right;
            root->left = NULL;
        }
    }
};