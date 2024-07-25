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
    bool isValidTarget(TreeNode* root, int targetSum,int sum){
        if(!root)   return false; 
        if(!root->left && !root->right){
                sum+=root->val;
                if(sum == targetSum){
                return true;
            }
            return false;
        }
        sum+=root->val;
        return isValidTarget(root->left,targetSum,sum) || isValidTarget(root->right,targetSum,sum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        return isValidTarget(root,targetSum,0);
    }
};