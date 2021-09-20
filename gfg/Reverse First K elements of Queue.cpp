void reversed(struct Queue *q)
{
    if (q->size==0)
        return;
    int data = front(q);
    dequeue(q);
    reversed(q);
    enqueue(q,data);
}

struct Queue *modifyQueue(struct Queue *q1, int n, int k) {
    struct Queue* q2= createQueue(n+5);
    for(int i=0;i<k;i++)
    {
        int temp=front(q1);
        enqueue(q2,temp);
        dequeue(q1);
    }
    reversed(q2);
    
    for(int j=0;j<(n-k);j++)
    {
        int temp=front(q1);
        enqueue(q2,temp);
        dequeue(q1);
    }
    
    
    return q2;
    
}
