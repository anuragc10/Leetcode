class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> v1;
        while(list1!=NULL)
        {
            v1.push_back(list1->val);
            list1=list1->next;
        }
        while(list2!=NULL)
        {
            v1.push_back(list2->val);
            list2=list2->next;
        }
        ListNode* l= new  ListNode(0);
        sort(v1.begin(),v1.end());
        ListNode* p=l;
        for(int i=0;i<v1.size();i++)
        {
            l->next = new ListNode(v1[i]);
            l=l->next;
        }
        return p->next;
        
        
    }
};
