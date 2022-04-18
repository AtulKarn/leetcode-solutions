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
private:
    int ans, i;
    void inorder(TreeNode* root, int k){
        if (root->left != NULL)
            inorder(root->left, k);
        i++;
        if (i==k){
            ans = root->val;
            return;
        }
        if (root->right != NULL)
            inorder(root->right, k);
    }
public:
    int kthSmallest(TreeNode* root, int k) {
        ans = 0;
        i = 0;
        inorder(root, k);
        return ans;
    }
};