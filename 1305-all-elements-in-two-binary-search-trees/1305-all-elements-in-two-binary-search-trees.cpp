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
    void inorder(TreeNode* root, vector<int> &v){
        if (root==NULL)
            return;
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }
public:
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> tree1;
        vector<int> tree2;
        vector<int> sorted;
        inorder(root1, tree1);
        inorder(root2, tree2);
        int one=0, two=0, size1 = tree1.size(), size2 = tree2.size();
        while(one<size1 && two<size2){
            if (tree1[one]<tree2[two])
                sorted.push_back(tree1[one++]);
            else
                sorted.push_back(tree2[two++]);
        }
        if (one==size1 && two<size2){
            while(two<size2)
                sorted.push_back(tree2[two++]);
        }
        else if (two==size2 && one<size1){
            while(one<size1)
                sorted.push_back(tree1[one++]);
        }
        return sorted;
    }
};