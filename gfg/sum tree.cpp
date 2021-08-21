class Solution
{
    public:
    static int sum(Node* root){
        if(root==NULL)
        {
            return 0;
        }
        return (sum(root->left) + root->data + sum(root->right));
    }
    bool isSumTree(Node* root)
    {
         // Your code here
         if(root==NULL || (root->left==NULL && root->right==NULL))
         {
             return true;
         }
         int l=sum(root->left);
         int r=sum(root->right);
         
         if(root->data==l+r  &&(isSumTree(root->left)!=0 && isSumTree(root->right)!=0))
         {
             return true;
         }
         return false;
    }
};
