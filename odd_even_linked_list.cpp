
            auto odd = head, evenHead = head->next, even = head->next;

        if (!head) return head;
        while(odd->next && even->next)
        {
            odd=odd->next->next;
            even=even->next->next;
            odd=odd->next;
            even=even->next;
        }
        odd->next=evenHead;
        
        return head;
