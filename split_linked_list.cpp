
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        vector <ListNode*> store (k,nullptr);
        temp=head;
        int size=count/k;
        int extra=count%k;
        int i=0;
        ListNode* N;
        while(head)
        {
            int s = size;
            store[i++] = head;
            ListNode* last = head, *prev = head;
            
            if(last)
            {
                //Minimum size (MUST)
            while(s-- > 0) {
                prev = last;
                last = last->next;
            }
            
            //Extra nodes
            if(extra-- > 0) {
                prev = last;
                last = last->next;
            }
            }
            
            
            if(prev) {
                head = prev->next;
                prev->next = NULL;
            }
        }
        
        return store;
