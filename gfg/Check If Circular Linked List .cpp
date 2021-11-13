Node *curr=head;
    while(true)
    {
        curr=curr->next;
        if(curr==head)
        {
            return true;
        }
        else if(curr==NULL)
        {
            return false;
        }
    }
