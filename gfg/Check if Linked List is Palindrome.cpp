class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
     { 
       int arr[10000] ;
       int i =0;
        while(head!= NULL)
        {
            arr[i] = head->data;
            head = head->next;
            i++;
        }
        for(int j =0;j<i;j++)
        {
         if(arr[j]!=arr[i-j-1])
         return false;
        }  
        return true;
   }
};
