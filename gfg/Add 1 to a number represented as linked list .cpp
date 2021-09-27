class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        int n;
        Node* curr=head;
        while(curr!=NULL)
        {
            n=n+curr->data;
            n=n*10;
            curr=curr->next;
        }
        n=n/10 +1;
        Node*head2;
        Node* curr2;
        // enter the digits in linked list
        int c=0;
        while(n>0)
        {
            int m=n%10;
            Node* nde=new Node(m);
            if(c==0)
            {
                head2=nde;
                c++;
                curr2=head2;
            }
            else{
            curr2->next=nde;
            curr2=curr2->next;
            }
            n=n/10;
        }
        
        // lined list reverse
        Node* current = head2;
        Node *prev = NULL, *next = NULL;
        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head2 = prev;
        
        
        return head2;
    }
};
