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
#include <bits/stdc++.h>
class Solution {
public:
    int max_sum=INT_MIN;
    int max_util(TreeNode* root)
    {
        if(!root)
            return 0;
        //base condition
        int left_recur=max(max_util(root->left),0);
        
        int right_recur=max(max_util(root->right),0);
        
        //sum path
        int include_root=left_recur+right_recur+(root->val);
        
        max_sum=max(include_root,max_sum);
        
        return (root->val)+max(left_recur,right_recur);
    }

    int maxPathSum(TreeNode* root) 
    {
        max_util(root);
        return max_sum;
    }
};
