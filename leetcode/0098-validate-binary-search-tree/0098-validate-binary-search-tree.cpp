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
    bool checkLeft(TreeNode* node, int val){
      if(!node) return true;
        while(node->left){
            node = node->left;
         
        }

        
  return  node->val > val;
   
    }
    bool checkRight(TreeNode* node, int val){
        if(!node) return true;
        while(node->right){
            node = node->right;
        }
    
       return node->val < val;

    }
    bool isValidBST(TreeNode* node) {
        if(node == nullptr) return true;
        if(node->left == nullptr && node->right == nullptr) return true;

        if(node->right != nullptr && node->right->val <= node->val) return false;

        if(node->left != nullptr && node->left->val >= node->val)  return false;
        
        


        return  checkRight(node->left, node->val)&& checkLeft(node->right, node->val)&& isValidBST(node->right) && isValidBST(node->left)   ;
    }
};