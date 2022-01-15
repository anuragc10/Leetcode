void inorder(Node* root,int l,int h,int &c)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left,l,h,c);
    if(root->data >=l && root->data <=h)
    {
        c=c+1;
    }
    inorder(root->right,l,h,c);
}
int getCount(Node *root, int l, int h)
{
  // your code goes here
  int c=0;
  inorder(root,l,h,c);
  return c;
}
