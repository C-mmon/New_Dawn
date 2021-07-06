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
    int getDecimalValue(ListNode* head) 
    {
        ListNode* current=head;
        int temp=0;int i=0;
        int count=0;
        while(current!=NULL)
        {
            count++;
            current=current->next;
        }
        count--;
        current=head;
        while(current!=NULL)
        {
            if(current->val==0)
            {
                count--;
            }
            else
            {
            temp+=(current->val)*pow(2,count);
                count--;

            }
            
            current=current->next;
        }
        return temp;
        
    }
};
