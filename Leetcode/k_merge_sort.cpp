/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    struct compare
    {
        bool operator() (ListNode* a, ListNode* b)
        {
            return a->val > b->val;
        
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        priority_queue <ListNode*, vector <ListNode*>,compare> min_heap;
        //push all the heads of each node in the list 
        for(int i=0;i<lists.size();i++)
        {
            if(!lists[i])
            {
                min_heap.push(lists[i]);
            }

        }
        
        //now min heap will contain the first nodes of all lists
        ListNode* head=new ListNode(0);
        ListNode* temp=head; 
        while(min_heap.size()>0)
        {
            ListNode* p=min_heap.top();
            min_heap.pop();
            temp->next=p;
            temp=temp->next;
            if(p->next!=NULL)
            {
                min_heap.push(p->next);
            }
        }
        return head->next;
        
    }
};
