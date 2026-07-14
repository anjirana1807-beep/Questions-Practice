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
TreeNode*  getSuccessor(TreeNode* curr){
     curr=curr->right;
    while(curr!=nullptr && curr->left!=nullptr){
        curr=curr->left;
    }
    return curr;
}
    TreeNode* deleteNode(TreeNode* root, int k) {
        if(root==NULL){
            return root;
        }
        if(k < root->val){
            root->left=deleteNode(root->left,k);
        }
        else if(k >root->val){
            root->right=deleteNode(root->right,k);
        }
        else{
            if(root->left==nullptr){
                TreeNode* temp=root->right;
                delete root;
                return temp;
            }
            if(root->right==nullptr){
                TreeNode* temp=root->left;
                delete root;
                return temp;
            }
            TreeNode* succ = getSuccessor(root);
             root->val= succ->val;
             root->right = deleteNode(root->right, succ->val);
        }
        return root;
    }
};