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
    int sum = 0;
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        
        int rightHeight = 1 + maxDepth(root->right);
        int leftHeight = 1 + maxDepth(root->left);
        return max(leftHeight,rightHeight);
    }
    void helper(TreeNode* root, int n, int i){
        if(!root){
            return;
        }
        if(root->left == NULL && root->right == NULL && i == n){
            sum += root->val;
        }
        if(root->left){
            helper(root->left, n, i+1);
        }
        if(root->right){
            helper(root->right, n, i+1);
        }
    }
    int deepestLeavesSum(TreeNode* root) {
        int n = maxDepth(root);
        helper(root, n, 1);
        return sum;
    }
};