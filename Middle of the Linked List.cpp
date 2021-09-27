class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* curr=head;
        int c=0;
        while(curr!=NULL)
        {
            c++;
            curr=curr->next;
        }
        curr=head;
        c=c/2;
        while(c--)
        {
            curr=curr->next;
        }
        
        
        return curr;  
    }
}
