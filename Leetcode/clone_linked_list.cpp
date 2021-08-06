        
        map<Node*, Node*> m;
        //Node* root= new Node(1);
        //new Node(1) is basically  Node* hence 
        //if 
        Node* ptr=head;
        while(ptr)
        {
            m[ptr]=new Node(ptr->val);
            
            ptr=ptr->next;
        }
        ptr=head;
        while(ptr)
        {
            //m[ptr]->next=ptr->next;; we are creating a link inside the map 
            //No doubt we are creating a link inside a mapp
            //m[ptr]->random=ptr->random;
            //making the link with its next node by using the original list pointer by searchin in the hashmap only
            //so hashmap ptr will return the node matching the pointer and intialise the next 
            //with the original ptr next
            m[ptr]->next=m[ptr->next];
            m[ptr]->random=m[ptr->random];
            ptr=ptr->next;
        }
        Node* ans=m[head];
        return ans;

    
    
    }
        
