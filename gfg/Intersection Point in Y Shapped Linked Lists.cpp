int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node* curr1=head1;
    Node* curr2=head2;
    
    int c1=0,c2=0;
    while(curr1!=NULL){
        c1=c1+1;
        curr1=curr1->next;
    }
    while(curr2!=NULL){
        c2=c2+1;
        curr2=curr2->next;
    }
    
    int d;
    Node* current1;
    Node* current2;
    
    if(c1>c2){
        d=c1-c2;
         current1=head1;
         current2=head2;
    }
    else{
        d=c2-c1;
         current1=head2;
         current2=head1;
    }
    
   
    
    for(int i=0;i<d;i++){
        if(current1 == NULL){
            return -1;
        }
        current1=current1->next;
    }
    
    while(current1!=NULL && current2!=NULL){
        if(current1==current2)
        {
            return current1->data;
        }
        current1=current1->next;
        current2=current2->next;
    }
    return -1;
}
