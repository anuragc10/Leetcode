class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        unordered_set<Node*> v;
        // your code here
        
        while(head!=NULL){
            if(v.find(head)!=v.end())
                return true;
            v.insert(head);
            head=head->next;
        }
        return false;
    }
};
