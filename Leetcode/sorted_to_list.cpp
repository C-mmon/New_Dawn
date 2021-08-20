
        //EXIT CONDITION
        if(head==tail)
        {
            return NULL;
        }
        
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=tail && fast->next!=tail)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        TreeNode* root=new TreeNode(slow->val);
        root->left=sortedListToBST(head,slow);
        root->right=sortedListToBST(slow->next,tail);
        return root;
        
        
