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
    bool checkValues(TreeNode* root1, TreeNode* root2){
        if(!root1 && root2 || root1 && !root2)  return false;
        if(!root1 && !root2)   return true;
        if(root1->val != root2->val)  return false;

        return checkValues(root1->left,root2->left) && checkValues(root1->right,root2->right);
    }
    void isFound(TreeNode* root, TreeNode* subRoot,bool &ans){
        if(!root)  return; 
        if(root->val == subRoot->val){
            if(checkValues(root,subRoot)){
                ans = true;
                return;
            }
        }

        isFound(root->left,subRoot,ans);
        isFound(root->right,subRoot,ans);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        bool ans = false;
        isFound(root,subRoot,ans);
        return ans;
    }
};
