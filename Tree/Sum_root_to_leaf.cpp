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
#define ll long long
class Solution {
public:
    ll max=0;
    void Summation(TreeNode* cal,ll val)
    {
        if(!cal)
            return;
        val*=10;
        val+=cal->val;
        if(cal->left==NULL & cal->right==NULL)
        {
            max+=val;
            return ;
        }
        Summation(cal->left,val);
        Summation(cal->right,val);
        
    }
    int sumNumbers(TreeNode* root) 
    {
        if(!root)
        {
            return 0;
        }
        Summation(root,0);
        return max;
        
        
    }
};
