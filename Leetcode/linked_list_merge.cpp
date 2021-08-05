
    while(cur1 != cur2)
    {
        cur1 = cur1?cur1->next:headB;
        cur2 = cur2?cur2->next:headA;
    }
        return cur1;
