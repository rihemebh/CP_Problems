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
    
vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> result;
    queue<TreeNode*> q;
    if(root == nullptr) return{};

    q.push(root);
    result.push_back({root->val});

  
    vector<int> values;
    TreeNode* temp;


    while(!q.empty()){
        int n = q.size();
        for(int i=0; i<n; i++){
              temp= q.front();
                q.pop();

          if(temp->left!= nullptr){
            q.push(temp->left);
            values.push_back(temp->left->val);
           
        }

        if(temp->right != nullptr){
            q.push(temp->right);
            values.push_back(temp->right->val);
           
        }
        }
        
        if(values.size()>0)
        result.push_back(values);
        values.clear();
     
    }
    
    return result;
    
}
};