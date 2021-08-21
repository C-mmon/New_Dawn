bool isValidBST(TreeNode* root) 
    {
        return check(root,LONG_MIN,LONG_MAX);
    }
    bool check(TreeNode* root, long MIN, long MAX)
    {
        if(root==NULL)
        {
         return true;   
        }
        if(root->val >= MAX || root->val <=MIN)
        {
            return false;
        }
            return check(root->left, MIN, root->val) && check(root->right, root->val, MAX);

    }
