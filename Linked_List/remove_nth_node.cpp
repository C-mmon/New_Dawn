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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int count=0;
        ListNode* current=head;
        while(current!=NULL)
        {
            current=current->next;
            count++;
        }
        
        //condition when the head is the first element
        if(count==n)
        {
            return head->next;
        }
        else
        {
            int diff=count-n;
            ListNode* current=head;
            ListNode* prev=NULL;
            for(int i=0;i<diff;i++)
            {
                prev=current;
                current=current->next;
            }
            prev->next=current->next;
            return head;
            
            
            
        }
        
    }
    
};
