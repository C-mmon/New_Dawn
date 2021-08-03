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
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        queue <TreeNode*> store; //queue for storing the root node
        vector <vector <int>> ans;
        if(!root)
        {
            return ans;
        }
        store.push(root);
        
        while(!store.empty())
        {
            int size=store.size();
            vector <int> v;
            while(size--)
            {
                TreeNode* temp=store.front();
                store.pop();
                v.push_back(temp->val);
                if(temp->left)
                {
                    store.push(temp->left);
                }
                if(temp->right)
                {
                    store.push(temp->right);
                }
            }
            ans.push_back(v);
            
        }
        return ans;
        
    }
};
