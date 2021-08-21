class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     unordered_set<int> h;;
     Node* curr=head;
     Node* prev=head;
     if(head==NULL){
         return head;
     }
     while(curr!=NULL)
     {
        if(h.find(curr->data) != h.end())
        {
            prev->next=curr->next;
            delete(curr);
        }
        else
        {
            h.insert(curr->data);
            prev=curr;
        }
        curr=prev->next;
     }
     return head;
     
    }
};
